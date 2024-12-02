class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        /*
        unordered_map
        */
        unordered_map<int,int>map;//empty
                     //v   f==i
        int i;//index
        int n=nums.size();//size
        for(i=0;i<n;i++){
            map[nums[i]]++;
        }
        for(i=1;i<=n+n;i++){ // 1,2,3,4
            if(map.find(i)==map.end()){
                return i;
            }
        }
        /*
              2
        nums=[1]
        output:2
        */
        return 0;
        
    }
};