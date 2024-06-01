//unqiue elements union
#include<bits/stdc++.h>
using namespace std;

vector<int> bunionArr(vector<int> v1,vector<int> v2){
    set<int> s;

    for(int i=0;i<v1.size();i++){
        s.insert(v1[i]);
    }

    for(int i=0;i<v2.size();i++){
        s.insert(v2[i]);
    }

    vector<int> ans;

    for(auto i:s)
        ans.push_back(i);

    return ans;
}

vector<int> ounionArr(vector<int> v1,vector<int> v2){

    vector<int> ans;
    int i=0,j=0;



    while(i<v1.size()&&j<v2.size()){
        if(v1[i]>=v2[j]){
            
            if(ans.size()==0||ans.back()!=v2[j])
                ans.push_back(v2[j]);
            
            j++;

        }else{

            if(ans.size()==0||ans.back()!=v1[i])
                ans.push_back(v1[i]);

            i++;
        }
    }

    while(i<v1.size()&&ans.back()!=v1[i]){
        ans.push_back(v1[i]);
        i++;
    }

    while(j<v2.size()&&ans.back()!=v2[j]){
        ans.push_back(v2[j]);
        j++;
    }

    return ans;
}



int main(){
    vector<int> v1={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v2={2, 3, 4, 4, 5, 11, 12};


    auto start1=chrono::high_resolution_clock::now();
    auto ans1=bunionArr(v1,v2);
    for(auto i:ans1)
        cout<<i<<" ";
    cout<<endl;
    auto end1=chrono::high_resolution_clock::now();
    auto dur1=chrono::duration_cast<chrono::microseconds>(end1-start1);
    cout<<"Brute took : "<<dur1.count()<<endl;

    auto start2=chrono::high_resolution_clock::now();
    auto ans2=ounionArr(v1,v2);
    for(auto i:ans2)
        cout<<i<<" ";
    cout<<endl;
    auto end2=chrono::high_resolution_clock::now();
    auto dur2=chrono::duration_cast<chrono::microseconds>(end2-start2);
    cout<<"Optimized took : "<<dur2.count()<<endl;

    return 0;
}