int main() {
     vector<int>nums={1,2,3};
    int k=3;
        int count=0;
        int sum=0;
        //1, 2, 3
        // k=3
        unordered_map<int,int>ans;
        for(auto i :nums){
            sum=sum+i;
            // first time sum will become 1 
            // second time sum beome 3 and enter the if condition, count become 1.
            // third time sum will become 6.
            if(sum==k){
                count++;
            }
            //first time ans.find(1-3)!=ans.end() which is true
            // second time ans.find(3-3)!=ans.end which is true.
            // third time ans.find(6-3)!=ans.end which is true.
            if(ans.find(sum-k)!=ans.end()){
        // 1. enter first time and ans[1-3] which is ans[2] this means it will create key in 
        // map and for this value is 0 now count is 0. 
        //2. second time ans[3-3] that mean ans[0] and their value is 0 in map.       
        // count still 1.
        //3. third time ans[6-3] which is ans[3] and we know when loop is iterate in 2 time 
        // we have already created a map for key 3 and their value is 1 now ans[3] here give
         // value 1 which is count =1+1 which become count =2.       .
                count=count+ans[sum-k];
        }
            // here first time when ++ is given it means gives sum 1 and value 1 into the map. 
            // here second time sum is 3 and their value is 1 in map.
            // and here third time ans[6] and their value is 1 in map.
            ans[sum]++;
        }
        cout<<count;
   
}