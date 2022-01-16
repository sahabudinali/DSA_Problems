// 3 sum
// Time complexity n^3

//Approch 1
int main() {
    vector<int>a={-1,0,1,2,-1,-4};
    set<vector<int>>s;
    vector<vector<int>>l;
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==0){
                    vector<int>c;
                    c.push_back(a[i]);
                    c.push_back(a[j]);
                    c.push_back(a[k]);
                    sort(c.begin(),c.end());
                    s.insert(c);
                    
                }
            }
        }
    }
    
    for(auto j:s){
        l.push_back(j);
    }
    
    for(int i=0;i<l.size();i++){
        for(int j=0;j<l[i].size();j++){
            cout<<l[i][j]<<" ";
        }
        cout<<endl;
            
    }
}


// Approch 2;
// time Complexity n^2;


int main() {
    vector<int>a={-1,0,1,2,-1,-4};
    set<vector<int>>s;
    vector<vector<int>>l;
    int n=a.size();
    sort(a.begin(),a.end());
    for(int i=0;i<n-2;i++){
      int j=i+1;
        int k=n-1;
        while(j<k){
            int temp=a[i]+a[j]+a[k];
            if(temp==0){
                s.insert({a[i],a[j],a[k]});
                j++;
            }else if(temp<0){
                j++;
            }else{
                k--;
            }
        }
        
    }
    
    for(auto j:s){
        l.push_back(j);
    }
    
    for(int i=0;i<l.size();i++){
        for(int j=0;j<l[i].size();j++){
            cout<<l[i][j]<<" ";
        }
        cout<<endl;
            
    }
    
  
}