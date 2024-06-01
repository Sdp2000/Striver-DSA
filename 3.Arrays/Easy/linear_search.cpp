#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> v,int val){
    int n=v.size();

    for(int i=0;i<n;i++){
        if(val==v[i])
            return i;
    }

    return -1;
}

int main(){
    vector<int> v={9,2,3,7,0,1};
    int ans=linearSearch(v,7);

    cout<<ans;
    return 0;
}