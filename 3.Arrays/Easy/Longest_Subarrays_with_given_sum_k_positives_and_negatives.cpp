#include<bits/stdc++.h>
using namespace std;

int blS(vector<int> v,int k){

    int mx=0;

    for(int i=0;i<v.size();i++){
        int sum=0;
        for(int j=i;j<v.size();j++){
            sum+=v[j];

            if(sum==k){
                mx=max(mx,j-i+1);
            }
        }

    }

    return mx;

}

int olS(vector<int> v,int k){
    unordered_map<int,int> mpp;
    int sum=0;
    int mx=0;

    for(int i=0;i<v.size();i++){
        
        sum+=v[i];

        if(sum==k){
            mx=max(mx,i+1);
        }


        if(mpp.find(sum)==mpp.end()){
            mpp[sum]=i;
        }


        if(mpp.find(sum-k)!=mpp.end()){
            mx=max(mx,i-mpp[sum-k]);
        }


    }

    return mx;
}

int main(){

    vector<int> v={1,2,1,1,1,3,4,5};
    int k=3;

    cout<<blS(v,k)<<endl;
    cout<<olS(v,k)<<endl;

    return 0;
}