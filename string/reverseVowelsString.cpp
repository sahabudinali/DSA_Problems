//Reverse Vowels of a String
 
bool checkvowel(char c)
    {
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
}
int main() {
    string s="sahabudin";
    int n=s.length();
    int i=0;
    int j=n-1;
    bool a,b;
    while(i<j){
        a=checkvowel(s[i]);
        b=checkvowel(s[j]);
        if(a==b){
            if(a==true)
                swap(s[i],s[j]);
            i++;
            j--;
            
        }else if(a==true){
            j--;
        }else{
            i++;
        }
        
    }
    cout<<s;
    
}