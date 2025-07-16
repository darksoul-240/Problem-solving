#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        long long mx=0;
        while(left<right){
            mx=max(mx,1LL*(right-left)*min(height[left],height[right]));
            if(height[left]<=height[right])left++;
            else right--;
        }return mx;
    }
};