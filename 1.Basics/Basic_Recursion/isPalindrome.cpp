/* Determine if a given string ‘S’ is a palindrome using recursion. Return a Boolean value of true if it is a palindrome and false if it is not. */

#include<iostream>
using namespace std;

bool isP(int l,string s){
    if(l>=s.size()/2)
        return true;
    
    if(s[l]!=s[s.size()-1-l])
        return false;
    
    return isP(l+1,s);
}

int main(){
    string s;
    cin>>s;

    cout<<isP(0,s);
    return 0;
}