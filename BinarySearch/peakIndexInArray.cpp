
// Peak Index in a Mountain Array
// without binary search approach.
int main(){
    vector<int>arr={0,1,0};
int maxVal=*max_element(arr.begin(), arr.end());
        int a;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==maxVal){
                a= i;
            }
        }
  cout<<a;


}

// binary search approach
int main(){

        vector<int>arr={0,1,0};
        int end=arr.size()-1;
        int start=0;
        int middle;
        int peakVal;
        while(start<=end){
            middle=(start+end)/2;
            if(arr[middle]>arr[middle+1]){
                
                peakVal=middle;
                end=middle-1;
            }
            else if(arr[middle]<arr[middle+1]){
                start=middle+1;
            }
            else if(arr[middle]>arr[middle-1]){
                
                peakVal=middle;
                start=middle+1;
            }else if(arr[middle]<arr[middle-1]){
                end=middle-1;
            }
            
        }
        cout<< peakVal; 
}       