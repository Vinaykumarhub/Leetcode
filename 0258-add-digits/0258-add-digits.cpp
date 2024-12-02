class Solution {
public:
    int addDigits(int num) {
        int n=num;
        int k;
        int sum=0;
        while(n>0){
            sum+=n%10;
            n=n/10;
            }
       while(sum>=10){   
        sum=(sum-10)+1;
           }
      return sum;
            
    }
};