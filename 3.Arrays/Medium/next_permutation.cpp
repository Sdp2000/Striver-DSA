#include<bits/stdc++.h>
using namespace std;

void gnext_permutation(vector<int> &v){

    next_permutation(v.begin(),v.end());
}

void onext_permutation(vector<int> &v){

    int ind=-1;
    int n=v.size();

    for(int i=n-1;i>0;i--){

        if(v[i-1]<v[i]){
            ind=i-1;
            break;
        }
    }

    if(ind==-1){
        reverse(v.begin(),v.end());
        return;
    }


    for(int i=n-1;i>ind;i--){

        if(v[i]>v[ind]){
            int temp=v[i];
            v[i]=v[ind];
            v[ind]=temp;
            break;
        }
    }

    reverse(v.begin()+ind+1,v.end());
}


int main(){

    vector<int> v={2,3,0,0,1,4,5};

    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;

    //gnext_permutation(v);
    onext_permutation(v);

    for(auto i:v)
        cout<<i<<" ";

    return 0;

}