#include<bits/stdc++.h>
using namespace std;

int bmissingN(vector<int> v,int n){

    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<v.size();j++){
            if(i==v[j]){
                flag=1;
                break;
            }
        }

        if(flag==0)
            return i;
    }

    return -1;
}

int gmissingN(vector<int> v,int n){

    vector<int> hash_map(n+1,0);

    for(int i=0;i<v.size();i++){
        hash_map[v[i]]++;
    }

    for(int i=1;i<hash_map.size();i++){
        if(hash_map[i]==0)
            return i;
    }

    return -1;
}


//using sum of n natural numbers
int o1missingN(vector<int> v,int n){
    int s1=(n*(n+1))/2;

    int s2=0;

    for(int i=0;i<v.size();i++){
        s2+=v[i];
    }

    return s1-s2;
}

//xor principle
int o2missingN(vector<int> v,int n){
    int xor1=0,xor2=0;

    for(int i=0;i<v.size();i++){
        xor1=xor1^v[i];
    }

    for(int i=1;i<=n;i++){
        xor2=xor2^i;
    }

    return xor1^xor2;
}



int main(){

    vector<int> v={1,2,4,5};
    int n=5;

    auto start1=chrono::high_resolution_clock::now();
    cout<<bmissingN(v,n)<<endl;
    auto end1=chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took : "<<dur1.count()<<endl;

    
    auto start2=chrono::high_resolution_clock::now();
    cout<<gmissingN(v,n)<<endl;
    auto end2=chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Better took : "<<dur2.count()<<endl;

    auto start3=chrono::high_resolution_clock::now();
    cout<<o1missingN(v,n)<<endl;
    auto end3=chrono::high_resolution_clock::now();
    auto dur3=chrono::duration_cast<chrono::microseconds>(end3-start3);
    cout<<"Sum optimized took : "<<dur3.count()<<endl;

    auto start4=chrono::high_resolution_clock::now();
    cout<<o2missingN(v,n)<<endl;
    auto end4=chrono::high_resolution_clock::now();
    auto dur4=chrono::duration_cast<chrono::microseconds>(end4-start4);
    cout<<"XOR Optimized took : "<<dur4.count()<<endl;


    return 0;

}