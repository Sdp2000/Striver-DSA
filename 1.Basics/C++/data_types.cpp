/* Datatype refers to the type of value a variable has and the way the computer interprets it.

Each data type has a different size. You’ve studied 5 different data types and the sizes of the data types:

Integer: 4 bytes
Long: 8 bytes
Float: 4 bytes
Double: 8 bytes
Character: 1 byte


You’re given a data type. Print its size in bytes. */


#include<iostream>
using namespace std;

int dsize(string s){
    if(s=="Integer")
        return 4;
    else if(s=="Long")
        return 8;
    else if(s=="Float")
        return 4;
    else if(s=="Double")
        return 8;
    else if(s=="Character")
        return 1;
    else
        return -1;
}

int main(){
    string s;
    cin>>s;

    cout<<dsize(s)<<" bytes";
    return 0;
}