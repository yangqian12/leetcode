class Solution{
public:
    string longestCommonPrefix(vector<string> s){
        if(s.empty())   return "";
        string res = "";
        for(int j = 0; j < s[0].size(); ++j){
            char c = s[0][j];
            for(int i = 1; i < s.size(); ++i){
                if(j > s[i][j].size() || s[i][j] != c)
                    return res;
            }
            s.push_back(c);
        }
        return res;
    };
    


