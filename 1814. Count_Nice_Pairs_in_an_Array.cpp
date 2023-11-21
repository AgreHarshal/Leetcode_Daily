
long long reverse(int num) 
{ 
    long long rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
}
#define mod 1000000007
class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<long long,long long>mp;
        long long n=nums.size();
        for(long long i=0;i<n;i++){
            int temp=reverse(nums[i]);
            long long cal=(nums[i]-temp);
            mp[cal]++;
        }
        long long res=0;
        for(auto i:mp){
            long long freq=i.second;
            if(freq>1){
                res+=(((freq)%mod)*((freq-1)%mod)/2);
                res%=mod;
            }
        }
        return res;
    }
};