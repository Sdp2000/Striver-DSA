/* 
   A
  ABA
 ABCBA
ABCDCBA */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        char c='A';
        
        for(int j=i;j<n;j++){
            cout<<" ";
        }

        for(int k=0;k<(2*i)+1;k++){
            if(k<=i){
            cout<<c;
            
            if(k<i){
                c++;
            }
        }else{
            c--;
            cout<<c;
        }
        }

        for(int j=i;j<n;j++){
            cout<<" ";
        }

        cout<<endl;

    }

    return 0;
}