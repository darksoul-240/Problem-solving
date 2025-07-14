#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    
    vector<int> InsertionSort(vector<int>&nums){
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j>0;j--){
                if(nums[i]>nums[j])swap(nums[i],nums[j]);
            }
        }
    }
   
   
};