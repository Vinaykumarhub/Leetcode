class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        /*               t.c   s.c
        unordered_map    O(n)  O(n)
        string matching  O(n+m) O(1)
        */
        int n=s.size();
        int m=spaces.size();
        string str="";
        int i;//index
        int j=0;
        for(i=0;i<n;i++){
            if(j<m&&spaces[j]==i){
                str+=' ';
                str+=s[i];
                j++;
            }
            else{
                str+=s[i];
            }
        }
        return str;

    }
};