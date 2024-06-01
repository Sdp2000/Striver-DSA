#include<bits/stdc++.h>
using namespace std;

void makeRow(vector<vector<int>> &v,int m,int n,int r){

    for(int i=0;i<m;i++){

        if(v[r][i]!=0)
            v[r][i]=-1;

    }
}

void makeCol(vector<vector<int>> &v,int m,int n,int c){

    for(int i=0;i<n;i++){

        if(v[i][c]!=0)
            v[i][c]=-1;

    }
}

void bsetMatrix(vector<vector<int>> v){

        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j]==0){
                    makeRow(v,v.size(),v[0].size(),i);
                    makeCol(v,v.size(),v[0].size(),j);
                }
            }
        }

        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j]==-1){
                    v[i][j]=0;
                }
            }
        }


        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                cout<<v[i][j]<<" ";
            }

            cout<<endl;
        }

        cout<<endl;
}


void gsetMatrix(vector<vector<int>> v){

    vector<int> row(v.size(),0);
    vector<int> col(v[0].size(),0);

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(v[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(row[i]==1||col[j]==1){
                v[i][j]=0;
            }
        }
    }


    for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                cout<<v[i][j]<<" ";
            }

            cout<<endl;
        }

    cout<<endl;

}

void osetMatrix(vector<vector<int>> v){

    int col0=1;

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(v[i][j]==0){

                v[i][0]=0;

                if(j!=0){
                    v[0][j]=0;
                }else{
                    col0=0;
                }
            }
        }
    }


    for(int i=1;i<v.size();i++){
        for(int j=1;j<v[0].size();j++){
            if(v[i][j]==1){
                if(v[i][0]==0||v[0][j]==0)
                    v[i][j]=0;
            }
        }
    }

    if(v[0][0]==0){
        for(int j=0;j<v[0].size();j++)
            v[0][j]=0;
    }

    if(col0==0){
        for(int i=0;i<v.size();i++)
            v[i][0]=0;
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

    vector<vector<int>> v = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }

        cout<<endl;
    }

    cout<<endl;

    bsetMatrix(v);
    gsetMatrix(v);
    osetMatrix(v);

    return 0;
}