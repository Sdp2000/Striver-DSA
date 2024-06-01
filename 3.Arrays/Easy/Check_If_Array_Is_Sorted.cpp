#include<bits/stdc++.h>
using namespace std;

bool biSorted(vector<int> v){

    int n=v.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j])
                return false;
        }
    }

    return true;
}


bool oiSorted(vector<int> v){

    int n=v.size();

    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1])
            return false;
    }

    return true;
}


int main(){
    vector<int> v={1,2,3,4,5,0};

    auto start1=chrono::high_resolution_clock::now();
    cout<<biSorted(v)<<endl;
    auto end1=chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took : "<<dur1.count()<<endl;

    
    auto start2=chrono::high_resolution_clock::now();
    cout<<biSorted(v)<<endl;
    auto end2=chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Optimized took : "<<dur2.count()<<endl;

    return 0;
}