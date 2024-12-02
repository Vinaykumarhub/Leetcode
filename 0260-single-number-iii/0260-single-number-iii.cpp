class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       int n=nums.size();
       int i,k;
       vector<int>arr;
        unordered_map<int,int>map;
        for(i=0;i<n;i++){
            map[nums[i]]++;
        }
        for(auto k:map){
            if(k.second==1){
                arr.push_back(k.first);
            }
        }
        return arr;
    }
};