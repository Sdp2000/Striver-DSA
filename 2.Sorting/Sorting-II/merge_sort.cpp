#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &v,int l,int mid,int r){
    int i=l;
    int j=mid+1;
    vector<int> temp;

    while(i<=mid&&j<=r){
        if(v[i]<=v[j]){
            temp.emplace_back(v[i]);
            i++;
        }else{
            temp.emplace_back(v[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.emplace_back(v[i]);
        i++;
    }

    while(j<=r){
        temp.emplace_back(v[j]);
        j++;
    }

    for(int k=l;k<=r;k++){
        v[k]=temp[k-l];
    }
}

void mergeSort(vector<int> &v,int l,int r){
    if(l>=r)
        return;
    
    int mid=(l+r)/2;
    mergeSort(v,l,mid);
    mergeSort(v,mid+1,r);
    merge(v,l,mid,r);
}


int main(){
    vector<int> v={6,3,9,6,1,2,4};
    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;

    mergeSort(v,0,v.size()-1);
    for(auto i:v)
        cout<<i<<" ";
    
    return 0;
}