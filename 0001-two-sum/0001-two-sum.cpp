class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]] = i;
        }

        for(int i=0;i<n;i++){
            int rem = target-nums[i];
            if(mp.find(rem)!=mp.end()){
                if(mp[rem]!=i)
                    return {i,mp[rem]};
            }
        }
        return {-1,-1};
        
    }
};