#include<bits/stdc++.h>
using namespace std;

void reverseA(vector<int>& v,int start,int end){
    while(start<end){
        int temp=v[start];
        v[start]=v[end];
        v[end]=temp;
        start++;
        end--;
    }
}

void blrotate(vector<int> v,int k){
    
    int n=v.size();
    k=k%n;

    if(k==0)
        return;

    vector<int> temp(k);

    for(int i=0;i<k;i++){
        temp[i]=v[i];
    }

    for(int i=0;i<n-k;i++){
        v[i]=v[k+i];
    }

    for(int i=0;i<temp.size();i++){
        v[n-k+i]=temp[i];
    }

    for(auto i:v)
        cout<<i<<" ";

}

void brrotate(vector<int> v,int k){
    
    int n=v.size();
    k=k%n;

    if(k==0)
        return;

    vector<int> temp(k);

    for(int i=0;i<k;i++){
        temp[i]=v[n-k+i];
    }

    for(int i=n-1;i>=k;i--){
        v[i]=v[i-k];
    }

   for(int i=0;i<temp.size();i++){
        v[i]=temp[i];
    }
  

    for(auto i:v)
        cout<<i<<" ";

}


void olrotate(vector<int> v,int k){
    int n=v.size();
    k=k%n;

    reverseA(v,0,k-1);
    reverseA(v,k,n-1);
    reverseA(v,0,n-1);

    for(auto i:v)
        cout<<i<<" ";    
}

void orrotate(vector<int> v,int k){
    int n=v.size();
    k=k%n;

    reverseA(v,0,n-k-1);
    reverseA(v,n-k,n-1);
    reverseA(v,0,n-1);

    for(auto i:v)
        cout<<i<<" ";    
}



int main(){
    vector<int> v={1,2,3,4,5,6};
    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;
    cout<<"Left Rotate "<<endl;
    blrotate(v,3);
    cout<<endl;
    cout<<"Right Rotate "<<endl;
    brrotate(v,5);
    cout<<endl;
    

    
    cout<<endl;
    cout<<"Left Rotate "<<endl;
    olrotate(v,3);
    cout<<endl;
    cout<<"Right Rotate "<<endl;
    orrotate(v,5);
    cout<<endl;


    return 0;

}
