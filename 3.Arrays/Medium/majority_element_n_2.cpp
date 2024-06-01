#include<bits/stdc++.h>
using namespace std;

int bmajE(vector<int> v){

    for(int i=0;i<v.size();i++){
        int cnt=0;
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j])
                cnt++;
        }

        if(cnt>(v.size()/2))
            return v[i];
    }

    return -1;
}


int gmajE(vector<int> v){

    unordered_map<int,int> mpp;

    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }

    for(auto i:mpp){
        if(i.second>(v.size()/2))
            return i.first;
    }

    return -1;
}


int omajE(vector<int> v){

    int cnt=0;
    int el=-1;

    for(int i=0;i<v.size();i++){

        if(cnt==0){
            cnt++;
            el=v[i];
        }

        if(el==v[i])
            cnt++;
        else
            cnt--;

    }

    int tmp=0;

    for(int i=0;i<v.size();i++){
        if(v[i]==el)
            tmp++;
    }

    if(tmp>(v.size()/2))
        return el;
    
    return -1;
}

int main(){

    vector<int> v={2, 2, 1, 1, 1, 2, 2};

    cout<<bmajE(v)<<endl;
    cout<<gmajE(v)<<endl;
    cout<<omajE(v)<<endl;

    return 0;
}