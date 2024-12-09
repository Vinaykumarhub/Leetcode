class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //unordered_map<int,int>mp;
        unordered_map<int,int>mp;//empty
        int i;//index
        int n=nums1.size();
        for(auto i:nums2){
            mp[i]++;
            /*   v  f
                 2=>1
                 2=>2
                 example 2
                 v  f
                 9=>1->2
                 4=>1->2
                 8=>1*/
        }
        vector<int>arr;
        for(i=0;i<n;i++){
            if(mp.find(nums1[i])!=mp.end()&&mp[nums1[i]]!=0){
                arr.push_back(nums1[i]);
                mp[nums1[i]]--;
            }
        }
        return arr;
    }
};