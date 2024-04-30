/* Given a number N reverse the number and print it. */

#include<iostream>
#include<chrono>
#include<algorithm>
using namespace std;

int brute_revN(int n){

    int ans=0;

    while(n>0){
        int num=n%10;
        ans=ans*10+num;

        n/=10;
    }

    return ans;
}

int optimal_revN(int n){
    string s=to_string(n);
    reverse(s.begin(),s.end());

    n=stoi(s);
    return n;
}

int main(){
    int n;
    cin>>n;

    auto start1 = chrono::high_resolution_clock::now();
    cout<<brute_revN(n)<<endl;
    auto end1 = chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took "<<dur1.count()<<" milliseconds"<<endl;

    auto start2 = chrono::high_resolution_clock::now();
    cout<<optimal_revN(n)<<endl;
    auto end2 = chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Optimal took "<<dur2.count()<<" milliseconds";

    return 0;
}