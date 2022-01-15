int singleNumber(vector<int>& nums) {
        //using the xor gate
        int n=nums[0];
        for(int i=1;i<nums.size();i++){
            n=n^nums[i];
        }
        return n;
    }
int main() {
        vector<int>a={4,1,2,1,2};
      // find the single number, whose number is not occure in
     //second time in the array or vector
      int n=singleNumber(a);
      cout<< n;      

}