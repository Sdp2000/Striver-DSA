#include<bits/stdc++.h>
using namespace std;

int bmaxP(vector<int> v){

    int maxProfit=0;
    int n=v.size();

    for(int i=n-1;i>0;i--){
        int sell=v[i];

        for(int j=0;j<i;j++){
            if(v[j]<sell){
                maxProfit=max(maxProfit,sell-v[j]);
            }
        }
    }

    return maxProfit;
}

int omaxP(vector<int> v){

    int maxProfit=0;
    int mini=INT_MAX;
    int n=v.size();

    for(int i=0;i<n;i++){
        mini=min(mini,v[i]);
        maxProfit=max(maxProfit,v[i]-mini);
    }

    return maxProfit;
}

int main(){

    vector<int> v={7,1,5,3,6,4};

    cout<<bmaxP(v)<<endl;
    cout<<omaxP(v)<<endl;

    return 0;
} 