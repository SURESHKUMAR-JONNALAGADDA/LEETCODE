
class LRUCache {
public:
    class Node
    {
        public:
            int k;
            int v;
            Node* pre;
            Node* next;
            Node(int x,int y)
            {
                this->k=x;
                this->v=y;
                pre=nullptr;
                next=nullptr;
            }
    };
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    int cap;
    map<int,Node*>mp;
    LRUCache(int capacity) {
        this->cap=capacity;
        head->next=tail;
        tail->pre=head;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end())
        {
            Node* x=mp[key];
            del(x);
            insert(x);
            return x->v;
        }
        else
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end())
        {
            del(mp[key]);
        }
        else if(mp.size()==cap)
        {
            Node* x=tail->pre;
            mp.erase(x->k);
            del(x);
            
        }
        
        Node* n=new Node(key,value);
        mp[key]=n;
        insert(n);
    
    }
    void del(Node* x)
    {
        Node* n1=x->pre;
        Node* n2=x->next;

        
        n1->next=n2;
        n2->pre=n1;
    }
    void insert(Node* x)
    {
        Node* t=head->next;

        x->next=t;
        t->pre=x;

        head->next=x;
        x->pre=head;
    }
};


/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */