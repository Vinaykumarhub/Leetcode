class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        /*               t.c   s.c
        unordered_map    O(n)  O(n)
        string matching  O(n+m) O(1)
        */
        unordered_map<int,int>map;//intailly map is empty 
        //            v   f
        int i;//index
        int n=s.size();//string size
        int m=spaces.size();
        //how many elements in spaces array
        for(i=0;i<m;i++){
            map[spaces[i]]=i;
        }
        string str="";
        //the answer of the string stores in the str
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