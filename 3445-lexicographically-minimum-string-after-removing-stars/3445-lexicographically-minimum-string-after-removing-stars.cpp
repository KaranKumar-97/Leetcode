class Solution {
public:
    string clearStars(string s) {
        map<char,vector<int>> mp;
        string ans="";

        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                s.erase(s.begin()+i);

                s[mp.begin()->second.back()]='0';
                mp.begin()->second.pop_back();

                if(mp.begin()->second.size()==0){
                    mp.erase(mp.begin()->first);
                }
                i--;
            }
            else {
                mp[s[i]].push_back(i);
            }
        }

        for(char ch:s){
            if(ch=='0') continue;
            ans+=ch;
        }

        return ans;
    }
};