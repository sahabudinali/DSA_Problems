vector<int> getRow(int rowIndex) {
     
        vector<vector<int>>a;
        for(int i=1;i<=rowIndex+1;i++){
            long pas=1;
            vector<int>arr;
            for(int j=1;j<=i;j++){
                arr.push_back(pas);
                pas=pas*(i-j)/j;
            }
            a.push_back(arr);
        }
        vector<int>ans;
           for(int j=0;j<rowIndex+1;j++){
               ans.push_back(a[rowIndex][j]);
           }
        return ans;
    }
int main() {
    int a=3;
    vector<int>ans;
    ans=getRow(a);
    for(auto i: ans){
    std::cout << i<<" ";
    }
}