class Solution {
public:

    bool isPossible(vector<int>&stalls,int k,int mid){
        int c=1;
        int pos=stalls[0];
        
        for(int i=1;i<=stalls.size()-1;i++){
            if(stalls[i]-pos>=mid){
                c++;
                pos=stalls[i];
            }
        if(c==k)
            return true;
        }
            return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int start=0;
        int end=stalls[stalls.size()-1]-stalls[0];
        int mid=start+(end-start)/2;
        int ans=-1;
        
        while(start<=end){
            if(isPossible(stalls,k,mid)){
                ans=mid;
                start=mid+1;
            } else {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
};
