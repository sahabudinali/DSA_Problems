int main() {
    // product of array except self.
    vector<int>nums={-1,1,0,-3,3};
    int n=nums.size();
       vector<int>left(n);
       left[0]=1;
        for(int i=1;i<n;i++){
            left[i]=left[i-1]*nums[i-1];
        }
        
        vector<int>right(n);
        right[n-1]=1;        
        for(int i=n-2;i>=0;i--){
            right[i]=right[i+1]*nums[i+1];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }
       for(auto i: ans){
    std::cout << i<<" ";
       }
}