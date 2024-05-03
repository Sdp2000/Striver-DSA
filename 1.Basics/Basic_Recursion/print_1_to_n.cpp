/* You are given an integer ‘n’.

Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops. */

#include<iostream>
using namespace std;

void printN(int n){
    if(n==0)
        return;

    printN(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;

    printN(n);
    return 0;
}