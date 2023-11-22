class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        long long i=0,j=0;
        long long n=nums.size();
        vector<long long>len(n);
        for(long long x=0;x<nums.size();x++){
            len[x]=nums[x].size();
        }
        queue<pair<long long,pair<long long,long long>>>q;
        vector<int>res;
        int prev=-1;
        q.push({nums[0][0],{0,0}});
        while(q.empty()==false){
            auto fro=q.front();
            q.pop();
            int data=fro.first;
            res.push_back(fro.first);
            long long x=fro.second.first;
            long long y=fro.second.second;
           
            if(y==0){
                  long long new_x=x+1;
                long long new_y=y;
              
                if(new_x<n){
                    if(new_y<len[new_x]){
                        q.push({nums[new_x][new_y],{new_x,new_y}});
                    }
                }
                new_x=x;
                new_y=y+1;
                if(new_x<n){
                    if(new_y<len[new_x]){
                        q.push({nums[new_x][new_y],{new_x,new_y}});
                    }
                }
                
            }else{
                long long new_x=x;
                int new_y=y+1;
                if(new_x<n){
                    if(new_y<len[new_x]){
                        q.push({nums[new_x][new_y],{new_x,new_y}});
                    }
                }
            }
        }
        return res;
    }
};