#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &v,int n){
    if(n==1)
        return;

    int flag=0;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            int temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;
            flag=1;
        }
    }

    if(flag==0)
        return;
    bubbleSort(v,n-1);
}

int main(){
    vector<int> v={4,1,9,1,12,6,0};
    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;

    bubbleSort(v,v.size());
    for(auto i:v)
        cout<<i<<" ";
    
    return 0;
}