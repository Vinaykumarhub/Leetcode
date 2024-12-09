class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        //             v    f
        int n=s.size();
        int i;//index
        for(i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                return s[i];
            }
            else{
                mp[s[i]];
            }
        }
        return '0';
          
    }
};