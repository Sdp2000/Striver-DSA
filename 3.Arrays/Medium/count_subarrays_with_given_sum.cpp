#include<bits/stdc++.h>
using namespace std;

int bcSA(vector<int> v,int k){

    int cnt=0;

    for(int i=0;i<v.size();i++){
        int sum=0;
        for(int j=i;j<v.size();j++){
            sum+=v[j];
            if(sum==k)
                cnt++;
        }
    }

    return cnt;
}

int ocSA(vector<int> v,int k){

    int cnt=0,preS=0;
    unordered_map<int,int> mpp;
    mpp[0]=1;

    for(int i=0;i<v.size();i++){

        preS+=v[i];

        int rem=preS-k;
        cnt+=mpp[rem];
        mpp[preS]+=1;
    }

    return cnt;
}


int main(){

    vector<int> v{3, 1, 2, 4};
    int k = 6;

    cout<<bcSA(v,k)<<endl;
    cout<<ocSA(v,k)<<endl;

    return 0;
}