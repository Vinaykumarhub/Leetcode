class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map;//empty
        unordered_set<int>set;//empty
        int i;//index
        for(auto k:nums2){
            map[k]++;
        }
        int n=nums1.size();
        for(i=0;i<n;i++){
            if(map.find(nums1[i])!=map.end()){
                set.insert(nums1[i]);
            }
        }
        vector<int>ans;
        for(auto l:set){
            ans.push_back(l);
        }
        return ans;
        
    }
};