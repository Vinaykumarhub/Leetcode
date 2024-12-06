class Solution {
public:
    string convertDateToBinary(string arr) {
        /*index    0 1 2 3 4 5 6 7 8 9
         string = "2 0 8 0 - 0 2 - 2 9"
                    year    month  date
         */
        int d=(arr[8]-'0')*10+(arr[9]-'0');
        int m=(arr[5]-'0')*10+(arr[6]-'0');
        int y=(arr[0]-'0')*1000+(arr[1]-'0')*100+(arr[2]-'0')*10+(arr[3]-'0');
        // O(3n)=>O(n)
        string str="";
        while(d>0){
            str+=(d%2+'0');
            d=d/2;
        }
        str+='-';
        while(m>0){
            str+=(m%2+'0');
            m=m/2;
        }
        str+='-';
        while(y>0){
            str+=(y%2+'0');
            y=y/2;
        }
        reverse(str.begin(),str.end());
        return str;
   }
};