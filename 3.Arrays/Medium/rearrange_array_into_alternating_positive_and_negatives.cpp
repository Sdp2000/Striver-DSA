#include<bits/stdc++.h>
using namespace std;

void brPNA(vector<int> v){

    vector<int> pos;
    vector<int> neg;

    for(int i=0;i<v.size();i++){
        if(v[i]<0)
            neg.emplace_back(v[i]);
        else
            pos.emplace_back(v[i]);
    }


    for(int i=0;i<v.size()/2;i++){

        v[i*2]=pos[i];
        v[i*2+1]=neg[i];
    }

    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;
}


void orPNA(vector<int> v){

    int pos=0,neg=1;
    vector<int> ans(v.size());


    for(int i=0;i<ans.size();i++){
        if(v[i]<0){
            ans[neg]=v[i];
            neg+=2;
        }else{
            ans[pos]=v[i];
            pos+=2;
        }
    }

    for(auto i:ans)
        cout<<i<<" ";

    cout<<endl;
}

void v2_brPNA(vector<int> v){

    vector<int> pos;
    vector<int> neg;

    for(int i=0;i<v.size();i++){
        if(v[i]<0)
            neg.emplace_back(v[i]);
        else
            pos.emplace_back(v[i]);
    }

    if(neg.size()>pos.size()){

        for(int i=0;i<pos.size();i++){
            v[i*2]=pos[i];
            v[i*2+1]=neg[i];
        }

        int j=pos.size()*2;

        for(int i=pos.size();i<neg.size();i++){
            v[j]=neg[i];
            j++;
        }

    }else{

        for(int i=0;i<neg.size();i++){
            v[i*2]=pos[i];
            v[i*2+1]=neg[i];
        }

        int j=neg.size()*2;

        for(int i=neg.size();i<pos.size();i++){
            v[j]=pos[i];
            j++;
        }

    }

    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;
}

int main(){

    vector<int> v1={1,2,-4,-5};

    brPNA(v1);
    orPNA(v1);

    vector<int> v2={1,2,-4,-5,3,4};
    v2_brPNA(v2);

    return 0;
}