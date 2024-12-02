class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j;
        unordered_map<int,int>map;
        int n=nums.size();
        vector<int>arr;
        for(i=0;i<n;i++){
         if(map.find(nums[i])==map.end()){
         map[nums[i]]=i;
         arr.push_back(nums[i]);
       }
       }
        int m=arr.size();
        for(i=0;i<m;i++){
         nums[i]=arr[i];
        }
        return m;
            
    }
};