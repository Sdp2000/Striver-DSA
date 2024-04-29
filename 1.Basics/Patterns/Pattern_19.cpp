/* 
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
********** */

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<2*n;i++){
        if(i<n){
            for(int j=i;j<n;j++){
                cout<<"*";
            }

            for(int k=0;k<2*i;k++){
                cout<<" ";
            }

            for(int l=i;l<n;l++){
                cout<<"*";
            }

            cout<<endl;
        }else{
            for(int m=i%n;m>=0;m--){
                cout<<"*";
            }

            for(int o=0;o<(2*(n-(i-n)-1));o++){
                cout<<" ";
            }

            for(int p=i%n;p>=0;p--){
                cout<<"*";
            }

            cout<<endl;
        }
    }
}