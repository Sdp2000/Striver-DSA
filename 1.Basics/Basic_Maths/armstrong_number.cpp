/* Given a number, check if it is Armstrong Number or Not. */

#include<iostream>
#include<cmath>
#include<chrono>
using namespace std;

//brute force

bool brute_armstrong(int n){
    int power=(int)(log10(n)+1);
    int res=0;
    int val=n;

    while(n>0){
        int num=n%10;
        res+=pow(num,power);

        n/=10;
    }

    return val==res;
}

bool optimal_armstrong(int n){
    
    string s=to_string(n);
    int power=s.length();
    int res=0;

    for(char i:s){
        res+=pow(i-'0',power);

    }
    
    return n==res;
}

int main(){

     int n;
    cin>>n;

    auto start1 = chrono::high_resolution_clock::now();
    cout<<brute_armstrong(n)<<endl;
    auto end1 = chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took "<<dur1.count()<<" milliseconds"<<endl;

    auto start2 = chrono::high_resolution_clock::now();
    cout<<optimal_armstrong(n)<<endl;
    auto end2 = chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Optimal took "<<dur2.count()<<" milliseconds";

    return 0;
    
}