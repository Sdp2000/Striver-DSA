#include<bits/stdc++.h>
using namespace std;

void psMAtrix(vector<vector<int>> v){

    int left=0,top=0,right=v[0].size()-1,bottom=v.size()-1;

    vector<int> ans;

    while(top<=bottom&&left<=right){

        for(int i=left;i<=right;i++){
            ans.push_back(v[top][i]);
    }

    top++;

    for(int i=top;i<=bottom;i++){
            ans.push_back(v[i][right]);
    }

    right--;

    if(top<=bottom){
         for(int i=right;i>=left;i--){
            ans.push_back(v[bottom][i]);
        }

        bottom--;
    }

    if(left<=right){

        for(int i=bottom;i>=top;i--){

            ans.push_back(v[i][left]);
        }

        left++;

    }

    
}

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}


int main(){

     vector<vector<int>> v   {{1, 2, 3, 4},
                             {5, 6, 7, 8},
	                         {9, 10, 11, 12},
		                     {13, 14, 15, 16}};

    psMAtrix(v);
    return 0;
}