/* You are given an integer ‘n’.

Your task is determining the sum of the first ‘n’ natural numbers and returning it. */

#include<iostream>
using namespace std;

int sumPN(int sum,int n){
    if(n==1)
        return sum;

    return sumPN(sum+n,n-1);
}

int sumFN(int n){
    if(n==1)
        return n;

    return n+sumFN(n-1);
}

int main(){
    int n;
    cin>>n;

    int sum=0;
    sum=sumPN(0,n);
    cout<<sumFN(n)<<endl;
    cout<<sum;
    return 0;
}