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
        int flag=0;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                flag=1;
            }
        }

        if(flag==0)
            break;
    }

    for(auto i:v)
        cout<<i<<" ";

    return 0;
}