class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>mp;
        int sum=0;
        while(sum!=1){
            sum=0;
           while(n>0){
            sum+=pow(n%10,2);
            n=n/10;
            }
    if(mp.find(sum)!=mp.end()){
         return false;
      }
        mp[sum]++;
        n=sum;
        
        }
        return true;
       
            
    }
};