#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& v,int i,int n){
    if(i==n-1)
        return;
    
    int min=i;
    for(int j=i+1;j<n;j++){
        if(v[min]>v[j])
            min=j;
    }

    int temp=v[min];
    v[min]=v[i];
    v[i]=temp;

    selectionSort(v,i+1,n);
}

int main(){
    vector<int> v={4,1,9,1,12,6,0};
    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;

    selectionSort(v,0,v.size());
    for(auto i:v)
        cout<<i<<" ";
    
    return 0;
}