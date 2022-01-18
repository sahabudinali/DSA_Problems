#include<bits/stdc++.h>
int main() {
    // brute force approch
    vector<vector<int>>a={{1,2,3},{4,5,6},{7,8,9}};
    int r=a.size();
    int col=a[0].size();
    vector<vector<int>>b;
    for(int i=0;i<a.size();i++){
        vector<int>c;
        for(int j=0;j<a[i].size();j++){
            c.push_back(a[i][j]);
        }
        b.push_back(c);
    }
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            b[j][i]=a[i][j];
        }
    }
    a=b;
    
    vector<vector<int>>ans;
   // here appending the value into row of the matrix 
    for(int i=a[0].size()-1;i>=0;i--){
        vector<int>d;
        for(int j=0;j<a.size();j++){
            d.push_back(a[j][i]);
        }
        ans.push_back(d);
    } 

    a=ans;
    //again make the row int col.
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            b[j][i]=a[i][j];
        }
    }
    for(int i=0;i<b.size();i++){
        for(int j=0;j<b[i].size();j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}