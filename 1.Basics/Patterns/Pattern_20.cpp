/* 
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        * */

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<(2*n)-1;i++){
        if(i<n){

            for(int j=i;j>=0;j--){
                cout<<"*";
            }

            for(int k=0;k<2*(n-i-1);k++){
                cout<<" ";
            }

            for(int l=i;l>=0;l--){
                cout<<"*";
            }

            cout<<endl;

        }else{

            for(int m=0;m<(n-(i%n))-1;m++){
                cout<<"*";
            }

            for(int o=0;o<2*(i-n+1);o++){
                cout<<" ";
            }

            for(int p=0;p<(n-(i%n))-1;p++){
                cout<<"*";
            }

            cout<<endl;

        }
    }
}