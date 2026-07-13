class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<n;i++){
            if((n&(n-1))==0){
                return true;
            }else if(n<=0){
                return false;
            }
        }
        return false;
    }
};