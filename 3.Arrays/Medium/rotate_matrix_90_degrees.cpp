#include<bits/stdc++.h>
using namespace std;

void bmR(vector<vector<int>> v){

    vector<vector<int>> ans(v.size(),vector<int> (v[0].size(),0));

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){

            ans[j][v.size()-1-i]=v[i][j];
        }
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }

        cout<<endl;
    }

    cout<<endl;
}


void omR(vector<vector<int>> v){


    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < i; j++) {
            swap(v[i][j], v[j][i]);
        }
    }
    
    for (int i = 0; i < v.size(); i++) {
        reverse(v[i].begin(), v[i].end());
    }

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }

        cout<<endl;
    }

    cout<<endl;
}


int main(){

    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }

        cout<<endl;
    }

    cout<<endl;

    bmR(v);
    omR(v);

}