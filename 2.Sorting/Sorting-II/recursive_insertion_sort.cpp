#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& v,int n){
    if(n==1)
        return;

    insertionSort(v,n-1);

    int j=n;
    while(j>0&&v[j]<v[j-1]){
        int temp=v[j];
        v[j]=v[j-1];
        v[j-1]=temp;
        j--;
    }
}

int main(){

    vector<int> v={4,1,9,1,12,6,0};
    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;

    insertionSort(v,v.size());
    for(auto i:v)
        cout<<i<<" ";
    
    return 0;

}