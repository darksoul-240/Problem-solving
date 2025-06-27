#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    

    bool isPowerOfFour(int n) {
        while(n/4!=0&&n%4==0){
            n=n/4;
        }
        return n==1;
    }

   
   
};