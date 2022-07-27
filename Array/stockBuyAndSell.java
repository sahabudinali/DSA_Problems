class stockBuyAndSell {
    public static void main(String[] args) {
       int prices[] = {7,1 ,5 ,3,6,4 };
       int n=prices.length;
    
	
    Used the auxalary extra space o(n) and time complexity is o(n); 
	int ne[]=new int[n];
       int a=prices[n-1];
       ne[n-1]=a;
    
    for(int i=n-2;i>=0;i--){
           if(prices[i]>a){
               ne[i]=prices[i];
               a=prices[i];
           }
           if(prices[i]<a){
               ne[i]=a;
           }
       }
       int maxVal=0;
    //   int k=0;
    //     for(int j=0;j<n;j++){
    //         if(ne[j]>prices[k]){
    //             if(maxVal<ne[j]-prices[k]){
    //             maxVal=ne[j]-prices[k];
    //             }
    //         }
    //         if(ne[j]<prices[k]){
    //             if(maxVal<prices[k]-ne[j]){
    //              maxVal=prices[k]-ne[j];
    //             }
    //         }
    //         k++;
    //     }
    //     System.out.print(maxVal);
        int minVal=prices[0];
        for(int i=0;i<n;i++){
            if(minVal>prices[i]){
                minVal=prices[i];
            }
            if(maxVal<prices[i]-minVal){
                maxVal=prices[i]-minVal;
            }
        }
 
        
        System.out.print(maxVal);
    }
}