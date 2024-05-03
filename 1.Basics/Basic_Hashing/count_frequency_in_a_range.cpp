/* You are given an array 'arr' of length 'n' containing integers within the range '1' to 'x'.
Your task is to count the frequency of all elements from 1 to n.

Note:
You do not need to print anything. Return a frequency array as an array in the function such that index 0
represents the frequency of 1, index 1 represents the frequency of 2, and so on. 
Input: ‘n’ = 6 ‘x’ = 9 ‘arr’ = [1, 3, 1, 9, 2, 7]    
Output: [2, 1, 1, 0, 0, 0]
*/

#include<bits/stdc++.h>
using namespace std;

void aHash(int x,int n,vector<int> v){

    vector<int> ans;
    vector<int> hash(x);

    for(int i=0;i<v.size();i++){
        hash[v[i]]++;
    }

    for(int i=1;i<=n;i++){
        ans.emplace_back(hash[i]);
    }

    for(auto i:ans)
        cout<<i<<" ";
}

void mHash(int x,int n,vector<int> v){
    unordered_map<int,int> hash_map;

    for(int i=0;i<v.size();i++){
        hash_map[v[i]]++;
    }

    vector<int> ans;

    for(int i=1;i<=n;i++){
        ans.push_back(hash_map[i]);
    }

    for(auto i:ans)
        cout<<i<<" ";

}

int main(){
    vector<int> v={1, 3, 1, 9, 2, 7};
    int n=6;
    int x=9;

    auto start1 = chrono::high_resolution_clock::now();
    aHash(x,n,v);
    cout<<endl;
    auto end1 = chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Array Hash took "<<dur1.count()<<" milliseconds"<<endl;

    auto start2 = chrono::high_resolution_clock::now();
    mHash(x,n,v);
    cout<<endl;
    auto end2 = chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Hash Map took "<<dur2.count()<<" milliseconds";

    return 0;
}