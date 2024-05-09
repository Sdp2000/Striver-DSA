#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> v={4,1,9,1,12,6};
    int n=v.size();

    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;

    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(v[min]>v[j])
                min=j;
        }

        int temp=v[min];
        v[min]=v[i];
        v[i]=temp;
    }


    for(auto i:v)
        cout<<i<<" ";
    
    return 0;
}