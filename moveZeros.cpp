void moveZeroes(vector<int>& nums) {
        //move zero to last 
        int n=nums.size();
        int zero=0;
        
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }
        }
        if(zero>=1){
        vector<int>ans(n);
        ans=nums;
        int j=0;
        for(int i=0;i<n;i++){
            if(ans[i]!=0){
                nums[j]=ans[i];
                j++;
            }
        }
        
        for(int i=n-1;i>=n-zero;i--){
            nums[i]=0;
        }
        }

        for(auto i:nums){
            cout<<i<<" ";
        }
    }

int main(){
vector<int>nums={0,1,2,0,3};
movezeros(nums);

}    