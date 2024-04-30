/* Given a number, check whether it is prime or not. A prime number is a natural number that is only divisible by 1 and by itself. */


#include<iostream>
#include<cmath>
#include<chrono>
using namespace std;

bool brute_isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

//optimal -- running loop till sqrt num

bool optimal_isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int main(){

     int n;
    cin>>n;

    auto start1 = chrono::high_resolution_clock::now();
    cout<<brute_isPrime(n)<<endl;
    auto end1 = chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took "<<dur1.count()<<" milliseconds"<<endl;

    auto start2 = chrono::high_resolution_clock::now();
    cout<<optimal_isPrime(n)<<endl;
    auto end2 = chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Optimal took "<<dur2.count()<<" milliseconds";

    return 0;
    
}