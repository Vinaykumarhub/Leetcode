class Solution {
public:
    int lengthOfLastWord(string s) {
        // 1. general basics
        // 2. stack
        int i;//index
        int count=0;//word count
        int m=0;//space count
        int n=s.size();//size
        /*
        str="word "
        m=1
        */
        for(i=n-1;i>=0;i--){
            if(s[i]==' '){
                m++;
            }
            else{
                break;
            }
        }
        //space count
        for(i=n-1-m;i>=0;i--){
            if(s[i]!=' '){
                count++;
            }
            else{
                break;
            }
        }
        return count;
        
    }
};