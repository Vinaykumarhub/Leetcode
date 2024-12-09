class Solution {
public:
    int firstUniqChar(string s) {
        //unordered_map<char,int>mp
        unordered_map<char,int>mp;//empty
            //         v    f
        int n=s.size();//size
        int i;//index
        for(i=0;i<n;i++){
            mp[s[i]]++;
            /*   v  f
                 l=>1
                 e=>1->2->3
                 t=>1
                 c=>1
                 o=>1
                 d=>1*/
            
        }
        for(i=0;i<n;i++){
            //second mp.second
            if(mp[s[i]]==1){
                return i;
            }
        }
        return -1;
        
    }
};