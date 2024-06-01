#include<bits/stdc++.h>
using namespace std;

void beZerores(vector<int> v){

    int n=v.size();
    vector<int> temp;

    for(int i=0;i<n;i++){
        if(v[i]!=0)
            temp.emplace_back(v[i]);
    }

    for(int i=0;i<temp.size();i++){
        v[i]=temp[i];
    }

    for(int i=temp.size();i<n;i++){
        v[i]=0;
    }

    
    for(auto i:v)
        cout<<i<<" ";

    
}


void oeZerores(vector<int> v){

    int n=v.size();
    int i;

    for(int k=0;k<n;k++){
        if(v[k]==0){
            i=k;
            break;
        }
    }

    for(int j=i+1;j<n;j++){

        if(v[j]!=0){
            int temp=v[j];
            v[j]=v[i];
            v[i]=temp;
            i++;
        }
    }

    for(auto i:v)
        cout<<i<<" ";

}


int main(){

    vector<int> v={3,0,9,0,1,2,3,0};

    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;
    beZerores(v);
    cout<<endl;
    oeZerores(v);

    return 0;
}