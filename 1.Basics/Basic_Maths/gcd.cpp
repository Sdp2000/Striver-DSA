/* Find the gcd of two numbers. */

#include<bits/stdc++.h>
using namespace std;

//brute approach by finding out all divisors of the smaller number

int brute_gcd(int a,int b){

    int gcd=1;
    
    int min_val=min(a,b);
    int ans;

    for(int i=1;i<=min_val;i++){
        if(a%i==0&&b%i==0){
            ans=i;
        }
    }

    return ans;
    
}


/* 
optimal approach -- using euclidean algorithm that states that 
If a>b gcd(a,b)=gcd(a-b,b)

Until one of the numbers become zero then other number is gcd

We can cut short the process by taking greater=greater%smaller,smaller until one of them becomes zero
*/

int optimal_gcd(int a,int b){
    
    while(a>0&&b>0){
        if(a>b)
            a=a%b;
        else
            b=b%a;
    }

    if(a==0)
        return b;
    
    return b;
}

int main(){
    int a,b;
    cin>>a>>b;

    auto start1 = chrono::high_resolution_clock::now();
    cout<<brute_gcd(a,b)<<endl;
    auto end1 = chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took "<<dur1.count()<<" milliseconds"<<endl;

    auto start2 = chrono::high_resolution_clock::now();
    cout<<optimal_gcd(a,b)<<endl;
    auto end2 = chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Optimal took "<<dur2.count()<<" milliseconds";

    return 0;
}