#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int addDigits(int num) {
            int p;
            if(num<10)return num;
            int carr=0;
        while(num/10!=0){
            p=num%10;
            carr+=p;
            num=num/10;
            if(num<10){
                num=carr+num;
                carr=0;
            }
        }return num;
    }
    
};