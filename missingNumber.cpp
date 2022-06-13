int main() {
    
    vector<int>arr={0,1,2,4};
    int n=arr.size();
    int total=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    std::cout << total-sum;
}