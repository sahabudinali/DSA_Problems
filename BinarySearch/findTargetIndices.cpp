//Find Target Indices After Sorting Array

void show(vector<int>&nums, int target){
    sort(nums.begin(),nums.end());
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
    for(auto i : ans){
        cout<<i;
    }
}

int main() {
    vector<int>a={1,2,5,2,3};
    int b=2;
    show(a,b);
}