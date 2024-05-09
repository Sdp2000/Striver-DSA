#include<iostream>
#include<vector>
using namespace std;

int partititon(vector<int>& v,int l,int r){
    int i=l;
    int j=r;
    int pivot=v[l];

    while(i<j){
        while(v[i]<=pivot&&i<=r-1)
            i++;
        while(v[j]>pivot&&j>=l+1)
            j--;

        if(i<j){
            int temp=v[i];  
            v[i]=v[j];
            v[j]=temp;
        }
    }

    int temp=v[l];
    v[l]=v[j];
    v[j]=temp;
    return j;
}

void quickSort(vector<int>& v,int l,int r){
    if(l<r){
        int p=partititon(v,l,r);
        quickSort(v,l,p-1);
        quickSort(v,p+1,r);
    }
}

int main(){
    vector<int> v={4,1,9,1,12,6,0};
    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;

    quickSort(v,0,v.size()-1);
    for(auto i:v)
        cout<<i<<" ";
    
    return 0;
}