#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())return "";
        string prefix=strs[0];
        for(int i=0;i<strs.size();i++){
            while(strs[i].find(prefix)!=0){
                prefix=prefix.substr(0,prefix.size()-1);
                if(prefix.size()==0)return "";
            }
        }return prefix;
    }
};