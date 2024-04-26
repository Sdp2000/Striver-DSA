
/* Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.


1, if the character is an uppercase alphabet (A - Z).
0, if the character is a lowercase alphabet (a - z).
-1, if the character is not an alphabet. */


#include<iostream>
using namespace std;

int charCheck(char s){

    if(s>=97&&s<=122)
        return 0;
    else if(s>=65&&s<=90)
        return 1;
    else
        return -1;

}

int main(){
    
    char s;
    cin>>s;

    cout<<charCheck(s);
    return 0;
}