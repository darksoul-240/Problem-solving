#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    
     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s(nums1.begin(),nums1.end());
        vector<int>res;
        for(int i:nums2){
            if(s.count(i)){
                res.push_back(i);
                s.erase(i);
            }
        }
        return res;
    }
   
   
};