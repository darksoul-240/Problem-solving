#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    
    int countSegments(string s) {
        if(s=="")return 0;
        
        int n=s.length();
        int k=0;
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ' && (i == 0 || s[i-1] == ' '))
                k++;
        }
        return k;
    }
   
   
};