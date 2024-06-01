#include<bits/stdc++.h>
using namespace std;

vector<int> bleaderA(vector<int> v){

    vector<int> temp;

    for(int i=0;i<v.size();i++){
        int elm=v[i];
        int flag=1;

        for(int j=i+1;j<v.size();j++){
            if(v[j]>elm)
                flag=0;
        }

        if(flag)
            temp.emplace_back(elm);
    }

    return temp;
}


vector<int> oleaderA(vector<int> v){

    vector<int> tmp;
    tmp.emplace_back(v[v.size()-1]);
    int lead=v[v.size()-1];

    for(int i=v.size()-2;i>=0;i--){

        if(lead<v[i]){
            tmp.emplace_back(v[i]);
            lead=v[i];
        }

    }

    reverse(tmp.begin(),tmp.end());

    return tmp;
}

int main(){

    vector<int> v={10,22,12,3,0,6};

    auto lead1=bleaderA(v);

    for(auto i:lead1)
        cout<<i<<" ";

    cout<<endl;
    
    auto lead2=oleaderA(v);

    for(auto i:lead2)
        cout<<i<<" ";
    
    return 0;
}