
//Remove the element.
//Input: nums = [3,2,2,3], val = 3
//Output: 2, nums = [2,2,_,_]

//Remove the element.
//Input: nums = [3,2,2,3], val = 3
//Output: 2, nums = [2,2,_,_]

int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        vector<int>a(n);
        
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                nums[i]='_';
            }
        }
        
        a=nums;

        return a;
       //count the numbers
        int count=0;
        for(int l=0;l<n;l++){
            if(a[l]!='_'){
                count++;
            }
        }
        int k=0;
        for(int j=0;j<n;j++){
            if(a[j]!='_'){
                nums[k]=a[j];
                k++;
            }
        }
        for(int i=n-1;i>=count;i--){
            nums[i]='_';
        }
        
        return count;       
}

int main(){

    vector<int>nums={0,1,2,2,3,0,4,2};
    int val=2;

    int ans=removeElement(nums,val);
    cout<<ans;
}