int main() {
    // find number in a sorted matrix.
    vector<vector<int>>matrix={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24}};
    int target = 5;
    //return true if number is found.
    
    int row=matrix.size();
    int col=matrix[0].size()-1;
    int i=0;
    int j=col;
    int c=0;
    while(i<=row-1 && j>=0){
        if(matrix[i][j]==target){
            c++;
            break;
        }else if(matrix[i][j]>target){
            j--;
        }else{
            i++;
        }
    }
    if(c==1){
        cout<<"true";
    }else{
        cout<<"false";
    }
}