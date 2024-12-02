class Solution {
public:
    bool isHappy(int n) {
       /* unordered_map*/
     //n=18
        unordered_map<int,int>map;
        /*
        1. n update sum
        19 => 82 n will store again 82 sum=0
        82 => 68 n will store again 68 sum=0
        68=>100 n will stores again 100 sum=0*/
        /*
        2. if(sum != map)
        return false;*/
        /*n=19
        n%10=9
        n=n/10;
        n=1
        n%10=1;
        */
        int sum=0;
        while(sum!=1){
            sum=0;
            while(n>0){
                sum+=pow(n%10,2);
                n=n/10;
            }
            if(map.find(sum)!=map.end()){
           return false; 
            }
            map[sum]++;
            n=sum;
        }
        return true;
        
    }
};