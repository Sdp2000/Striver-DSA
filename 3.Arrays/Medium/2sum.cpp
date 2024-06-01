#include<bits/stdc++.h>
using namespace std;

vector<int> b2sum(vector<int> v,int k){

    for(int i=0;i<v.size();i++){
        int sum=v[i];

        for(int j=i+1;j<v.size();j++){
            if(sum+v[j]==k)
                return {i,j};
        }
    }

    return {-1,-1};
}

vector<int> g2sum(vector<int> v,int k){

    unordered_map<int,int> mpp;

    for(int i=0;i<v.size();i++){

        if(mpp.find(k-v[i])!=mpp.end())
            return {mpp[k-v[i]],i};

        mpp[v[i]]=i;
    }

    return {-1,-1};
}

vector<int> o2sum(vector<int> v,int k){

    sort(v.begin(),v.end());
    int sum=0;
    int i=0,j=v.size()-1;

    while(i<j){

        sum=v[i]+v[j];

        if(sum==k)
            return {i,j};

        if(sum<k){
            i++;
        }else{
            j--;
        }

    }

    return {-1,-1};
}


int main(){
    vector<int> v={2,5,6,8,11};
    auto ans1=b2sum(v,14);

    for(auto i:ans1)
        cout<<i<<" ";
    
    cout<<endl;

    auto ans2=g2sum(v,14);

    for(auto i:ans2)
        cout<<i<<" ";
    
    cout<<endl;

    auto ans3=o2sum(v,14);

    for(auto i:ans3)
        cout<<i<<" ";
    
    return 0;
}