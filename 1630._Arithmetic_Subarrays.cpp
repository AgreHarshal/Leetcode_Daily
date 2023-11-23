class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int len=l.size();
        vector<bool>res;
        for(int i=0;i<len;i++){
int l_i=l[i];
int r_i=r[i];
vector<int>temp;
for(int j=l_i;j<=r_i;j++){
temp.push_back(nums[j]);
}
sort(temp.begin(),temp.end());
int n=temp.size();
int dis=INT_MAX;
if(n>=2){
 dis=temp[1]-temp[0];
}

bool flag=true;
for(int j=0;j<n-1;j++){
    if(temp[j+1]-temp[j]!=dis){
        flag=false;
        break;
    }
}
res.push_back(flag);
        }
        return res;
    }
};