#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    
    vector<int> SelectionSort(vector<int>&nums){
        int n=nums.size();
        for(int i=0;i<n;i++){
            int min_idx=i;
            for(int j=i;j<n;j++){
                if(nums[j]<nums[min_idx])min_idx=j;
            }
            swap(nums[i],nums[min_idx]);
        }
        return nums;
    }
};