/*  Given a number, print all the divisors of the number. A divisor is a number that gives the remainder as zero when divided. */


//brute force -- running loop till the number

#include<iostream>
#include<cmath>
#include<chrono>
using namespace std;

void brute_pdiv(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

//optimal -- running loop till sqrt num

void optimal_pdiv(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i)
                cout<<n/i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;

    auto start1 = chrono::high_resolution_clock::now();
    brute_pdiv(n);
    cout<<endl;
    auto end1 = chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took "<<dur1.count()<<" milliseconds"<<endl;

    auto start2 = chrono::high_resolution_clock::now();
    optimal_pdiv(n);
    cout<<endl;
    auto end2 = chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Optimal took "<<dur2.count()<<" milliseconds";

    return 0;
}