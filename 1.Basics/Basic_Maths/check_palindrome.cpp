/* Given a number check if it is a palindrome.
An integer is considered a palindrome when it reads the same backward as forward. */

#include<iostream>
#include<chrono>
#include<algorithm>
using namespace std;

bool brute_isPalindrome(int n){

    int val=n;
    int ans=0;

    while(n>0){
        int num=n%10;
        ans=ans*10+num;

        n/=10;
    }

    return val==ans;
}

bool optimal_isPalindrome(int n){
    string s=to_string(n);
    reverse(s.begin(),s.end());

    int ans;
    ans=stoi(s);

    return n==ans;
}

int main(){
    int n;
    cin>>n;

    auto start1 = chrono::high_resolution_clock::now();
    cout<<brute_isPalindrome(n)<<endl;
    auto end1 = chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took "<<dur1.count()<<" milliseconds"<<endl;

    auto start2 = chrono::high_resolution_clock::now();
    cout<<optimal_isPalindrome(n)<<endl;
    auto end2 = chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Optimal took "<<dur2.count()<<" milliseconds";

    return 0;
}