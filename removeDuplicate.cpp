#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int i:nums)s.insert(i);
        int p=0;
        for(int j:s){nums[p]=j;p++;}
        return p;
}
};