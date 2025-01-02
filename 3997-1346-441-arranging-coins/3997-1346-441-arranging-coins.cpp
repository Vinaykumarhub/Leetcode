class Solution {
public:
    int arrangeCoins(int n) {
        // n=5      n-i
        //index 1=> 5-1=4 n=4
        //index 2=> 4-2=2 n=2
        //index 3=> 2-3=-1 n=-1
        int i;//index
        int k=n; //passing the n valye to k
        int l;
        for(i=1;i<=n;i++){
            k=k-i;
            if(k<0){
            return i-1;
            }
        }
        return 1; 
    }
};