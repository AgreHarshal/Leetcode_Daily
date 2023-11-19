c
//you have to pick that a number will replaced by the no of different elements smaller the the given number.

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int small=0;
        int res=0;
        for(int i=1;i<n;i++){
              if(nums[i]==nums[i-1]){
                  res+=(small);
              }else{
                   small++;
                   res+=(small); 
              }
        }
        return res;
    }
};