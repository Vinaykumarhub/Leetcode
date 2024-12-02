class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>map;
        vector<int>ans;
        int i;
        for(i=0;i<n;i++){
            map[nums[i]]++;
        }
        for(auto k:map){
            if(k.second>n/3){
                ans.push_back(k.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};