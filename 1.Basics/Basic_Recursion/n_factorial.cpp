/* You are given an integer ’n’.

Your task is to return a sorted array (in increasing order) containing all the factorial numbers which are less than or equal to ‘n’.
The factorial number is a factorial of a positive integer, like 24 is a factorial number, as it is a factorial of 4. */

#include<iostream>
using namespace std;

int factPN(int res,int n){
    if(n<=1){
        return res;
    }

    return factPN(res*n,n-1);
}

int factFN(int n){
    if(n<=1){
        return n;
    }

    return n*factFN(n-1);
}

int main(){
    int n;
    cin>>n;

    int res;
    res=factPN(1,n);
    cout<<factFN(n)<<endl;
    cout<<res;
    return 0;
}