int main() {
    vector<vector<int>>interval={{1,3},{2,6},{8,10},{15,18}};
    //merge only if the element of second interval of first element is less than
    //the first interval of second element.
    vector<vector<int>>ans;
    sort(interval.begin(),interval.end());
    ans.push_back(interval[0]);
    int j=0;
    for(int i=1;i<interval.size();i++){
        if(ans[j][1]>=interval[i][0]){
            //condition is true and again check which element is greater 
            // first interval of last element or second interval of last element
            // after finding the number replace with the first interval of last element. 
            ans[j][1]=max(ans[j][1],interval[i][1]);   
        }
        else{
            //if interval is not merger than simply push that interval 
            j++;
            ans.push_back(interval[i]);
        }
    }
    
    // print the interval
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<  ans[i][j]<<" ";
        }
        cout<<endl;
    }
}