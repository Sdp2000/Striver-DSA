#include<bits/stdc++.h>
#include<chrono>
using namespace std;

int blargest(vector<int> v){
    sort(v.begin(),v.end());
    return v[v.size()-1];
}

void rlargest(vector<int> v,int& max,int n){
    if(n==1)
        return;
    
    if(v[n-1]>max)
        max=v[n-1];

    rlargest(v,max,n-1);
}

int ilargest(vector<int> v,int n){
    int max=INT_MIN;

    for(int i=0;i<n;i++){
        if(v[i]>max)
            max=v[i];
    }

    return max;
}



int main(){
    vector<int> v={3,7,1,9,11};

    auto start1=chrono::high_resolution_clock::now();
    cout<<blargest(v)<<endl;
    auto end1=chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took : "<<dur1.count()<<endl;

    auto start2=chrono::high_resolution_clock::now();
    int max=INT_MIN;
    rlargest(v,max,v.size());
    cout<<max<<endl;
    auto end2=chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Recursive took : "<<dur2.count()<<endl;
    
    auto start3=chrono::high_resolution_clock::now();
    cout<<ilargest(v,v.size())<<endl;
    auto end3=chrono::high_resolution_clock::now();
    auto dur3=chrono::duration_cast<chrono::microseconds>(end3-start3);
    cout<<"Optimized took : "<<dur3.count()<<endl;

    return 0;
}