/* You are given an integer ‘n’.

Print “Coding Ninjas ” ‘n’ times, without using a loop. */

#include<iostream>
using namespace std;

void pName(int n){
    if(n==0)
        return;

    cout<<"Ninjas"<<endl;  
    pName(n-1);
}

int main(){
    int n;
    cin>>n;

    pName(n);
    return 0;
}