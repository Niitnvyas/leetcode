class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int i=0;
        int correct=0;
        while(i<nums.size()){
            if (nums[i]==1){
              ans++;
              i++;
              correct = max(ans,correct);
            }
            else{
                ans=0;
                i++;
            
            }
        }
        return correct;
    }
};