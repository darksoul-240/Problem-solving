#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    
    vector<int> InsertionSort(vector<int>&nums){
        int n=nums.size();
        for(int i=0;i<n;i++){
            int key=nums[i];
            int j=i-1;
            while(j>=0&& nums[j]>key){
                nums[j+1]=key;
                j--;
            }
            nums[j+1]=key;
        }
        return nums;
    }
};