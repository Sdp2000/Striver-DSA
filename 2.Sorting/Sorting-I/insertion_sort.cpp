#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v={4,1,9,1,12,6,0};
    int n=v.size();

    for(auto i:v)
        cout<<i<<" ";
    
    cout<<endl;

    for(int i=0;i<n;i++){
        int j=i;
        while(j>0&&v[j]<v[j-1]){
            int temp=v[j];
            v[j]=v[j-1];
            v[j-1]=temp;
            j--;
        }
    }

    for(auto i:v)
        cout<<i<<" ";

    return 0;
}

