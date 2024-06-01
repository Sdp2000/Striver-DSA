#include<bits/stdc++.h>
using namespace std;

void lrotate(vector<int> v){
    int temp=v[0];

    for(int i=0;i<v.size()-1;i++){
        v[i]=v[i+1];
    }

    v[v.size()-1]=temp;

    for(auto i:v)
        cout<<i<<" ";
}

void rrotate(vector<int> v){
    int temp=v[v.size()-1];

    for(int i=v.size()-1;i>0;i--){
        v[i]=v[i-1];
    }

    v[0]=temp;

    
    for(auto i:v)
        cout<<i<<" ";
}

int main(){
    vector<int> v={1,2,3,4,5,6};
    for(auto i:v)
        cout<<i<<" ";


    cout<<endl;
    lrotate(v);
    cout<<endl;
    rrotate(v);

    return 0;

}