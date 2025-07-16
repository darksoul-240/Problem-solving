#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    
    vector<int>twoSum(vector<int>nums, int target){
        vector<int>result;
        int n=nums.size();
        unordered_map<int,int>val_idx;
        for(int i=0;i<n;i++){
            int tar=target-nums[i];
            if(val_idx.find(tar)!=val_idx.end()){
                return {i,val_idx[tar]};
            }
            val_idx.insert({nums[i],i});
        }
        return {};

}
};