//Given an integer array nums and an integer k, return true 
//if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //return true
        // if a[i] and a[j] are equal && absolute(i-j) is less than or euqal to the k.         
        vector<pair<int, int>>a;
        for(int i=0;i<nums.size();i++){
            a.push_back({nums[i],i+1});         
        }        
        sort(a.begin(),a.end());        
        for(int i=1;i<a.size();i++){
            if( a[i-1].first==a[i].first){
                int m=abs(a[i-1].second - a[i].second);
                if(m<=k){
                return true;
                }
            }   
        }
        return false;        
    }
int main(){

    vector<int>a= {1,2,3,1};
    int k = 3;
    if(containsNearbyDuplicate(a,k)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}    