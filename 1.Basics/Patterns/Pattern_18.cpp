/* 
E
D E
C D E
B C D E */

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;


    for(int i=0;i<n;i++){

        char c=char('A'+(n-i));

        for(int j=0;j<=i;j++){
            cout<<c;
            c++;
        }

        cout<<endl;
    }
}


