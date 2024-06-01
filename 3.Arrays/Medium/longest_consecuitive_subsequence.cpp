#include<bits/stdc++.h>
using namespace std;

bool ls(vector<int> v,int elm){

    for(int i=0;i<v.size();i++){

        if(elm==v[i])
            return true;
    }

    return false;
}


int blsc(vector<int> v){

    int cnt=0;
    int lmax=1;

    for(int i=0;i<v.size();i++){

        int x=v[i];
        cnt=1;

        while(ls(v,x+1)==true){
            x++;
            cnt++;
        }

        lmax=max(lmax,cnt);

    }

    return lmax;
}


int glsc(vector<int> v){

    sort(v.begin(),v.end());

    int last_smaller=INT_MIN;
    int cnt=0;
    int lmax=1;

    for(int i=0;i<v.size();i++){

        if(v[i]-1==last_smaller){
            cnt++;
            last_smaller=v[i];
        }else if(v[i]!=last_smaller){
            cnt=1;
            last_smaller=v[i];
        }

        lmax=max(lmax,cnt);
    }

    return lmax;
}


int olsc(vector<int> v){

    unordered_set<int> s;
    int lmax=1;

    for(int i=0;i<v.size();i++){

        s.insert(v[i]);
    }


    for(auto it:s){

        if(s.find(it-1)==s.end()){

            int cnt=1;

            while(s.find(it+1)!=s.end()){
                it++;
                cnt++;
            }

            lmax=max(lmax,cnt);
        }
    }

    return lmax;
}


int main(){

    vector<int> v={100, 200, 1, 2, 3, 4};
    cout<<blsc(v)<<endl;
    cout<<glsc(v)<<endl;
    cout<<olsc(v)<<endl;

    return 0;
}