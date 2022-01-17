
// approch 1
// TC : n^2
int main() {
    
    vector<int>nums={2,0,2,1,1,0};
    
    for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
    }
    for(auto i:nums){
    std::cout <<i;
    }
}


//Approch 2
//TC: n

int main() {
    
    vector<int>nums={2,0,2,1,1,0};
    int z=0,f=0,s=0;
    for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                z++;
            }
            if(nums[i]==1){
                f++;
    }
            if(nums[i]==2){
                s++;
            }
    }
    nums.clear();
    for(int k=0;k<z;k++){
        nums.push_back(0);
    }
    for(int j=0;j<f;j++){
        nums.push_back(1);
    }
    for(int l=0;l<s;l++){
        nums.push_back(2);
    }
    for(auto i:nums){
    std::cout <<i;
    }
}