class Solution {
public:
  int mySqrt(int x){
        if(x<2)return x;
        int right=x/2;
        int left=1;
        int ans;
        while(left<=right){
            long mid=left+(right-left)/2;
            long sq;
            sq=mid*mid;
            if(x==sq)return mid;
           else if(x>sq){
                ans=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return ans;
    }
};