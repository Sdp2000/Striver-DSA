/* The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -

    F(n) = F(n - 1) + F(n - 2), 
    Where, F(1) = 1, F(2) = 1


Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.

"Indexing starts from 1" */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n==1||n==2){
        cout<<1;
        return 0;
    }

    int sum0=1;
    int sum1=1;
    int ans=0;
    
    for(int i=2;i<n;i++){
        ans=sum0+sum1;
        sum0=sum1;
        sum1=ans;
    }

    cout<<ans;
    return 0;
}