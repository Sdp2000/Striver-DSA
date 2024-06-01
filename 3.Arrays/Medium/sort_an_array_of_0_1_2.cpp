#include<bits/stdc++.h>
using namespace std;

void bsortA(vector<int> v){
    sort(v.begin(),v.end());

    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;
}

void gsortA(vector<int> v){

    int cnt0=0,cnt1=0,cnt2=0;

    for(int i=0;i<v.size();i++){

        if(v[i]==0)
            cnt0++;
        else if(v[i]==1)
            cnt1++;
        else
            cnt2++;
    }

    for(int i=0;i<cnt0;i++) v[i]=0;
    for(int i=cnt0;i<cnt0+cnt1;i++) v[i]=1;
    for(int i=cnt0+cnt1;i<v.size();i++) v[i]=2;

    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;
}

void swap(int &a,int &b){
    
    int temp=a;
    a=b;
    b=temp;

}

void osortA(vector<int> v){

    int low=0,mid=0;
    int n=v.size();
    int high=n-1;
    

    while(mid<=high){

        if(v[mid]==0){
            swap(v[mid],v[low]);
            low++;
            mid++;
        }else if(v[mid]==1){
            mid++;
        }else{
            swap(v[mid],v[high]);
            high--;
        }

    }

    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;

}

int main(){

    vector<int> v={0, 2, 1, 2, 0, 1};

    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<endl;

    bsortA(v);
    gsortA(v);
    osortA(v);

    return 0;
}