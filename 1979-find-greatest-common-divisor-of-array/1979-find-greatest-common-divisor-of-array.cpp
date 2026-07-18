class Solution {
public:
    int findGCD(vector<int>& nums) {
      int n = nums.size();
      int mini = nums[0];
      int maxi = nums[0];
      int ans = 0;
      for(int i=1;i<n;i++){
             if (nums[i] < mini)
                mini = nums[i];

            if (nums[i] > maxi)
                maxi = nums[i];
      }  

        return __gcd(mini, maxi);
    }
};