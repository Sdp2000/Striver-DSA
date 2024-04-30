/* Given an integer N, return the number of digits in N. */

#include<iostream>
#include<cmath>
#include<chrono>
using namespace std;

//Brute Solution -- Looping through each digit

int brute_CD(int n){
    int cnt=0;
    while(n>0){
        int num=n%10;
        cnt++;

        n/=10;
    }

    return cnt;
}

//Optimal Solution -- The logarithmic base 10 of a positive integers gives the number of digits in n.
// We add 1 to the result to ensure that the count is correct even for numbers that are powers of 10.

int optimal_CD(int n){
    int cnt=(int)(log10(n)+1);
    return cnt;
}

int main(){
    int n;
    cin>>n;

    auto start1 = chrono::high_resolution_clock::now();
    cout<<brute_CD(n)<<endl;
    auto end1 = chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took "<<dur1.count()<<" milliseconds"<<endl;

    auto start2 = chrono::high_resolution_clock::now();
    cout<<optimal_CD(n)<<endl;
    auto end2 = chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Optimal took "<<dur2.count()<<" milliseconds";

    return 0;
}