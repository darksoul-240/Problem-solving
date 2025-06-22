#include <bits/stdc++.h>
using namespace std;

class Solution{
     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> hy;
        int p = 0, q = 0;
        while (p < m && q < n) {
            if (nums1[p] <= nums2[q]) hy.push_back(nums1[p++]);
            else hy.push_back(nums2[q++]);
        }
        while (p < m) hy.push_back(nums1[p++]);
        while (q < n) hy.push_back(nums2[q++]);
        for (int i = 0; i < m + n; ++i) {
            nums1[i] = hy[i];
        }
    }
    
};