/* Given an array 'arr' of size 'n'.

Return an array with all the elements placed in reverse order. */

#include<iostream>
#include<vector>
using namespace std;

void revA(int l,vector<int>& v){
    if(l>=v.size()/2) 
        return;

    int tmp=v[l];
    v[l]=v[v.size()-1-l];
    v[v.size()-1-l]=tmp;
    revA(l+1,v);
}

int main(){
    vector<int> v={1,2,4,5,6,7,8};
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;

    revA(0,v);
    for(auto i:v)
        cout<<i<<" ";

    return 0;
}