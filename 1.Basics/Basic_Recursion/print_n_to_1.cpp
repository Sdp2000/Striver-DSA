/* You are given an integer ‘n’.

Your task is to return an array containing integers from n to ‘1’ (in decreasing order) without using loops. */

#include<iostream>
using namespace std;

void printN(int n){
    if(n==0)
        return;

    cout<<n<<" ";
    printN(n-1);
}

int main(){
    int n;
    cin>>n;

    printN(n);
    return 0;
}