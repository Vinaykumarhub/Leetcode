class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        /* unordered_map
           general format
           
           unordered_map<int,int>map;
                          v   f
        */
    unordered_map<int,int>map;//empity
                 //v  f   
        int n=nums.size();//size
        int i;//index
        for(i=0;i<n;i++){
            map[nums[i]]++;
            /* [0,1,1,0,1,2]
            v  f  v  f  v  f
            0->1  1->1  2->1
            0->2  1->2
                  1->3
                  */
        }
        vector<int>arr;//decleration of array dynamic
       // int arr[n];//decleration of array static 
        for(auto l:map){
            //we have v it has f ==2
            //map.first=>l.first(value)
            //map.second=>l.second(frequency)
            if(l.second==2){
                arr.push_back(l.first);
            }
        }
        return arr;

    }
};