#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    
     vector<string> fizzBuzz(int n) {
        vector<string> r;
        for(int i=1;i<=n;i++){
            if(i%3==0&&i%5==0)r.push_back("FizzBuzz");
            else if(i%3==0)r.push_back("Fizz");
            else if(i%5==0)r.push_back("Buzz");
            else r.push_back(to_string(i));
        }
        return r;
    }
};