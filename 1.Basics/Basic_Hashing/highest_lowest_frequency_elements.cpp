/* Given an array 'v' of 'n' numbers.

Your task is to find and return the highest and lowest frequency elements.
If there are multiple elements that have the highest frequency or lowest frequency, pick the smallest element. */

#include<bits/stdc++.h>
using namespace std;

void a_min_max(vector<int> v){

    int max=INT_MIN;
    int min=INT_MAX;

    int tmax=INT_MIN;

    for(int i=0;i<v.size();i++){
        if(tmax<v[i])
            tmax=v[i];
    }

    vector<int> hash_map(tmax+1);
    for(int i=0;i<v.size();i++){
        hash_map[v[i]]++;
    }

    int amax=0,amin=tmax+1;

    for(int i=1;i<=tmax;i++){
        if(max<hash_map[i]&&hash_map[i]!=0){
            max=hash_map[i];
            amax=i;
        }

        if(min>hash_map[i]&&hash_map[i]!=0){
            min=hash_map[i];
            amin=i;
        }
    }
    cout<<amax<<" "<<amin;
}

void h_min_max(vector<int> v){

     unordered_map<int,int> hash_map;

    int max=INT_MIN;
    int min=INT_MAX;

    int tmax=INT_MIN;

    for(int i=0;i<v.size();i++){
        if(tmax<v[i])
            tmax=v[i];
    }

    for(int i=0;i<v.size();i++){
        hash_map[v[i]]++;
    }

    for(auto i:hash_map){
        if(i.second>max)
            max=i.second;
        
        if(i.second<min)
            min=i.second;
    }

    //to tackle unordered nature

    int amax=tmax+1,amin=tmax+1;

    for(auto i:hash_map){
        if(i.first<amax && i.second==max)
            amax=i.first;
        
        if(i.first<amin && i.second==min)
            amin=i.first;
    }

    cout<<amax<<" "<<amin;

}

int main(){
    vector<int> v={10,5,10,15,10,5};

    auto start1 = chrono::high_resolution_clock::now();
    a_min_max(v);
    cout<<endl;
    auto end1 = chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Array Hash took "<<dur1.count()<<" milliseconds"<<endl;

    auto start2 = chrono::high_resolution_clock::now();
    h_min_max(v);
    cout<<endl;
    auto end2 = chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Hash Map took "<<dur2.count()<<" milliseconds";



    a_min_max(v);
    cout<<endl;
    h_min_max(v);

    return 0;
}