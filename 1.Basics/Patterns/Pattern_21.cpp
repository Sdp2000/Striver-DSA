/* 
****
*  *
*  *
**** */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int space=ceil(n/2);

    for(int i=0;i<n;i++){
        if(i==0||i==n-1){
            for(int j=0;j<n;j++){
                cout<<"*";
            }
            cout<<endl;
        }else{

            cout<<"*";
            for(int k=0;k<space;k++){
                cout<<" ";
            }
            cout<<"*";
            cout<<endl;
        }
    }
}