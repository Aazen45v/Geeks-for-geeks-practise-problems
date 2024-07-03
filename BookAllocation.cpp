class Solution {
  public:
  
  
    bool isPossible(int n,int arr[],int m,int sol){
        int pageSum=0;
        int count=1;
        for(int i=0;i<n;i++){
            if(arr[i]>sol){
                return false;
            }
            if(pageSum+arr[i]>sol){
                count++;
                pageSum=arr[i];
                if(count>m){
                    return false;
                }
            }  else{
                pageSum=pageSum+arr[i];
                }
            }
        return true;
    }
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // code here
        if(m>n){
            return -1;
        }
        int start=0;
        int end=accumulate(arr,arr+n,0);
        int mid=start+(end-start)/2;
        int ans=-1;
        
        while(start<=end){
            if(isPossible(n,arr,m,mid)){
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
};
