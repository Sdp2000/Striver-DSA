#include<bits/stdc++.h>
using namespace std;

int bEO(vector<int> v){

    for(int i=0;i<v.size();i++){

        int cnt=0;
        int num=v[i];

        for(int j=0;j<v.size();j++){
            if(num==v[j])
                cnt++; 
        }

        if(cnt==1)
            return num;
    }

    return -1;
}

int gEO(vector<int> v){

    unordered_map<int,int> mpp;

    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }

    for(auto i:mpp){
        if(i.second==1)
            return i.first;
    }

    return -1;
}

int oEO(vector<int> v){
    int xr=0;

    for(int i=0;i<v.size();i++){
        xr=xr^v[i];
    }

    return xr;
}


int main(){
    vector<int> v={4, 4, 2, 1, 2};

    auto start1=chrono::high_resolution_clock::now();
    cout<<bEO(v)<<endl;
    auto end1=chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took : "<<dur1.count()<<endl;

    
    auto start2=chrono::high_resolution_clock::now();
    cout<<gEO(v)<<endl;
    auto end2=chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Better took : "<<dur2.count()<<endl;

    auto start3=chrono::high_resolution_clock::now();
    cout<<oEO(v)<<endl;
    auto end3=chrono::high_resolution_clock::now();
    auto dur3=chrono::duration_cast<chrono::microseconds>(end3-start3);
    cout<<"Optimized took : "<<dur3.count()<<endl;

    return 0;
}