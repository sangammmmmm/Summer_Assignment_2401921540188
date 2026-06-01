#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int i = 0,j=0,maxi=0;
        while(j<n)
        {
           maxi = max(maxi,arr[j]-arr[i]);
            if(arr[i]>arr[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return maxi;
    }
};
