class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        for(int i=1;i<words.size();i++)
        {
            if(words[i].length()==words[i-1].length())
            {
                string w1 = words[i];
                sort(w1.begin(),w1.end());
                string w2 = words[i-1];
                sort(w2.begin(),w2.end());
                if(w1==w2)
                {
                    words.erase(words.begin()+i);
                    i--;
                }
            }
        }
        return words;
    }
};