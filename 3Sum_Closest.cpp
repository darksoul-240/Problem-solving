#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int min=INT_MAX;
        int closest=INT_MAX;
        int min_diff=INT_MAX;
        for(int i=0;i<n-2;i++){
        int r=n-1;
        int l=i+1;
        while(l<r){
            int curr=nums[i]+nums[l]+nums[r];
            int diff=abs(target-curr);
            if(min_diff>diff){min_diff=diff;closest=curr;}
            if(curr<target)l++;
            else if(curr>target)r--;
            else return target;
        }
        }
    return closest;
    }
   
   
};