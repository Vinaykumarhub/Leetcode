class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        /*               t.c   s.c
        unordered_map    O(n)  O(n)
        string matching  O(n+m) O(1)
        */
        unordered_map<int,int>map;//empty
        //             v   f
        int n=s.size();
        int m=spaces.size();
        int i;//index
        for(i=0;i<m;i++){
            map[spaces[i]]=i;
        }
        string str="";
        for(i=0;i<n;i++){
            if(map.find(i)!=map.end()){
                str+=' ';
                str+=s[i];
            }
            else{
                str+=s[i];
            }
        }
        return str;
    }
};