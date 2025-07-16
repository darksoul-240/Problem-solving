#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int>a=nums;
        vector<vector<int>> b;
        sort(a.begin(),a.end());
        int n=a.size();
        for(int i=0;i<n-2;i++){
            if(i>0 && a[i]==a[i-1])continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(a[i]+a[j]+a[k]>0)k--;
                else if(a[i]+a[j]+a[k]<0)j++;
                else {
                    b.push_back({a[i],a[j],a[k]});
                    j++;
                    while(j<k&&a[j]==a[j-1])j++;
                }
            }
        }return b;
    }
};