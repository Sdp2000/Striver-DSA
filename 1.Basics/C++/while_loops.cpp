/* Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.

Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.

Constraints
0<= 'n' <=10000 */


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int esum=0,osum=0;

    while(n>0){
        int num=n%10;
        if(num%2==0)
            esum+=num;
        else
            osum+=num;

        n/=10;
    }

    cout<<esum<<" "<<osum;
    return 0;
}