class Solution {
public:
    bool isPalindrome(int x) {
long int sum=0;
long int temp=x;
while(x>0){
     long int l=x%10;
     sum=sum*10+l;
     x/=10;
    }
   return sum==temp;
    }
};