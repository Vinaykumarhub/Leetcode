class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // bit 
        // unordered map 
        // generally basics 
        
        /* 
        xor operation (^)
        1-> 8421= 0001
        3-> 8421= 0011
        --------------
        output:
                  0010 (2)
                  
       1-> 8421= 0001  3-> 8421 =0011
       1-> 8421= 0001  3-> 8421 =0011
       
                   0000(0)*/
        int s=0;
        int i;//index
        for(i=0;i<nums.size();i++){
           s=s^nums[i]; 
        }
        return s;
       
    }
};