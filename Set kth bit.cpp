#include<bits/stdc++.h> 
using namespace std; 


class Solution
{
public:
    int setKthBit(int N, int K)
    {
        int mask = 1 << K ;
        int ans = N | mask;
        return ans;
    }
    
};
