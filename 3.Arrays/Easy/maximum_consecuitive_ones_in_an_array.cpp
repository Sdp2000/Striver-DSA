#include<bits/stdc++.h>
using namespace std;

int maxN(int a,int b){
    if(a>b)
        return a;

    return b;
}

int maxCO(vector<int> v){

    int cnt=0;
    int mx=-1;

    for(int i=0;i<v.size();i++){
        if(v[i]==1){
            cnt++;
            mx=maxN(cnt,mx);
        }else{
            cnt=0;
        }
    }

    return mx;
}

int main(){

    vector<int> v={1,1,1,0,0,1,1,0,1,1,1,1,0};

    cout<<maxCO(v);
    return 0;
}