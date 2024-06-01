#include<bits/stdc++.h>
using namespace std;

pair<int,int> bSlargest(vector<int> v){
    int n=v.size();

    if(n<2)
        return {-1,-1};
    
    sort(v.begin(),v.end());
    return {v[1],v[v.size()-2]};
}

pair<int,int> gSlargest(vector<int> v){


    int n=v.size();
    int max=INT_MIN,min=INT_MAX;

    if(n<2)
        return {-1,-1};

    for(int i=0;i<n;i++){
        if(v[i]>max)
            max=v[i];
        
        if(v[i]<min)
            min=v[i];
    }

    int smax=INT_MIN,smin=INT_MAX;

    for(int i=0;i<n;i++){
        if(v[i]>smax&&v[i]!=max)
            smax=v[i];

        if(v[i]<smin&&v[i]!=min)
            smin=v[i];
    }

    return {smin,smax};
}


pair<int,int> oSlargest(vector<int> v){
    int n=v.size();
    int max=INT_MIN,min=INT_MAX;
    int smax=INT_MIN,smin=INT_MAX;

    if(n<2)
        return {-1,-1};

    for(int i=0;i<n;i++){
        if(v[i]>max){
            smax=max;
            max=v[i];
        }
        
        if(v[i]<min){
            smin=min;
            min=v[i];
        }

        if(v[i]>smax&&v[i]!=max)
            smax=v[i];

        if(v[i]<smin&&v[i]!=min)
            smin=v[i];
    }


    return {smin,smax};
}

int main(){

    vector<int> v={3,5,6,7,1,0};

    auto start1=chrono::high_resolution_clock::now();
    cout<<bSlargest(v).first<<" "<<bSlargest(v).second<<endl;
    auto end1=chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took : "<<dur1.count()<<endl;

    auto start2=chrono::high_resolution_clock::now();
    cout<<gSlargest(v).first<<" "<<gSlargest(v).second<<endl;
    auto end2=chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Better took : "<<dur2.count()<<endl;

    auto start3=chrono::high_resolution_clock::now();
    cout<<oSlargest(v).first<<" "<<oSlargest(v).second<<endl;
    auto end3=chrono::high_resolution_clock::now();
    auto dur3=chrono::duration_cast<chrono::microseconds>(end3-start3);
    cout<<"Optimized took : "<<dur3.count()<<endl;

    return 0;
}