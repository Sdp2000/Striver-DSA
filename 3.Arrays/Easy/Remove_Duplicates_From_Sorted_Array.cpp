#include<bits/stdc++.h>
using namespace std;

int baDup(vector<int> v){
    set<int> s;
    int n=v.size();

    for(int i=0;i<n;i++){
        s.insert(v[i]);
    }

    int k=s.size();
    int j=0;

    for(auto i:s)
        v[j++]=i;
    
    return k;
}

int oaDup(vector<int> v){
    int n=v.size();
    int i=0;

    for(int j=i+1;j<n;j++){
        if(v[i]!=v[j])
            i++;
        
        v[i]=v[j];
    }

    return i+1;
}

int main(){

    vector<int> v={1,1,1,2,2,3};

    auto start1=chrono::high_resolution_clock::now();
    cout<<baDup(v)<<endl;
    auto end1=chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took : "<<dur1.count()<<endl;

    
    auto start2=chrono::high_resolution_clock::now();
    cout<<oaDup(v)<<endl;
    auto end2=chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Optimized took : "<<dur2.count()<<endl;

    return 0;
}