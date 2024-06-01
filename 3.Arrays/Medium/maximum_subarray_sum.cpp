#include<bits/stdc++.h>
using namespace std;

int bmaxSA(vector<int> v){

    int maxS=INT_MIN;

    for(int i=0;i<v.size();i++){
        int sum=0;
        for(int j=i;j<v.size();j++){
            sum+=v[j];
            maxS=max(maxS,sum);
        }
    }

    return maxS;
}


int omaxSA(vector<int> v){
    int sum=0;
    int maxl=INT_MIN;

    for(int i=0;i<v.size();i++){

        sum+=v[i];

        if(sum<0)
            sum=0;

        maxl=max(sum,maxl);
    }

    return maxl;
}

void pmaxSA(vector<int> v){


    int sum=0;
    int maxl=INT_MIN;

    int start = 0;
    int ansStart = -1, ansEnd = -1;

    for(int i=0;i<v.size();i++){

        if(sum==0)
            start=i;

        sum+=v[i];

        if(sum<0)
            sum=0;

        if(sum>maxl){
            maxl=sum;
            ansStart=start;
            ansEnd=i;
        }
    }

    for(int i=ansStart;i<=ansEnd;i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
}

int main(){

    vector<int> v={ -2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout<<bmaxSA(v)<<endl;
    cout<<omaxSA(v)<<endl;
    pmaxSA(v);

    return 0;
}


