class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
    int carry=0;
    string ans;
    int i=n-1;
    int j=m-1;
    while(i>=0 && j>=0){
        int x=a[i]+b[j]+carry;
        int digit=x%10;
        carry=x/10;
        ans.push_back(digit+'0');
        i--,j--;
    }
    while(i>=0){
        int x=a[i]+0+carry;
        int digit=x%10;
        carry=x/10;
        ans.push_back(digit+'0');
        i--;
    }
    while(j>=0){
        int x=0+b[j]+carry;
        int digit=x%10;
        carry=x/10;
        ans.push_back(digit+'0');
        j--;
    }
        return ans;
    }
};
