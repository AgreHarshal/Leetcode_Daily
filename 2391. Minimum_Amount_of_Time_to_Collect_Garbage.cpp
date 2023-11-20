class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int g=0,m=0,p=0;
        int rem_p=0,rem_m=0,rem_g=0;
        int n=garbage.size();
        for(int i=1;i<n;i++){
            rem_p+=(travel[i-1]);
            rem_g+=(travel[i-1]);
            rem_m+=(travel[i-1]);
int n1=garbage[i].size();
int cnt_g=0,cnt_p=0,cnt_m=0;
for(int j=0;j<n1;j++){
    if(garbage[i][j]=='G'){
        cnt_g++;
    }
    if(garbage[i][j]=='P'){
        cnt_p++;
    }
    if(garbage[i][j]=='M'){
        cnt_m++;
    }
}
if(cnt_g>0){
     g+=(cnt_g);
     g+=(rem_g);
     rem_g=0;
}
if(cnt_m>0){
     m+=(cnt_m);
     m+=(rem_m);
     rem_m=0;
}
if(cnt_p>0){
     p+=(cnt_p);
     p+=(rem_p);
     rem_p=0;
}
        }
        int n1=garbage[0].size();
        for(int j=0;j<n1;j++){
    if(garbage[0][j]=='G'){
        g++;
    }
    if(garbage[0][j]=='P'){
        p++;
    }
    if(garbage[0][j]=='M'){
        m++;
    }
}
return g+p+m;
    }
};