//repeating elements are allowed

#include<bits/stdc++.h>
using namespace std;

vector<int> bintersectArr(vector<int> v1,vector<int> v2){

    vector<int> ans;
    vector<int> vis(v2.size(),0);

    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            if(v1[i]==v2[j]&&vis[j]==0){
                ans.push_back(v2[j]);
                vis[j]=1;
                break;
            }

            if(v2[j]>v1[i])
                break;
        }
    }

    return ans;
}


vector<int> ointersectArr(vector<int> v1,vector<int> v2){

    vector<int> ans;
    
    int i=0,j=0;

    while(i<v1.size()&&j<v2.size()){
        if(v1[i]<v2[j]){
            i++;
        }
        else if(v1[i]>v2[j]){
            j++;
        }
        else{
            ans.emplace_back(v1[i]);
            i++;j++;
        }
    }

    return ans;
}

int main(){

    vector<int> v1={1,2,3,5,5,6,7};
    vector<int> v2={2,3,4,4,5,5};

    auto start1=chrono::high_resolution_clock::now();
    auto ans1=bintersectArr(v1,v2);;
    for(auto i:ans1)
        cout<<i<<" ";
    cout<<endl;
    auto end1=chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took : "<<dur1.count()<<endl;

    auto start2=chrono::high_resolution_clock::now();
    auto ans2=ointersectArr(v1,v2);
    for(auto i:ans2)
        cout<<i<<" ";
    cout<<endl;
    auto end2=chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Optimized took : "<<dur2.count()<<endl;

    return 0;
}