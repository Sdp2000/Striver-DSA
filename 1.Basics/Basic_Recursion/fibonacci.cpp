/* Given an integer ‘n’, return first n Fibonacci numbers using a generator function. */

#include<iostream>
using namespace std;

int fibN(int n){
    if(n<=1)    
        return n;

    return fibN(n-2)+fibN(n-1);
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<fibN(i)<<" ";
    }
    return 0;
}