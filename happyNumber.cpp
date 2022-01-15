int square(int n){
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum +=pow(rem,2);
            n=n/10;
            
        }
        return sum;
    }
int main() {
    
        int n=2;     
        unordered_set<int>a;
        while(n!=1 && (a.count(n)==false)){
             a.insert(n);
             n=square(n);
             a.erase(0);
         } 
      if(n==1)cout<< true;      

}