int main() {
        string s="a-bC-dEf-ghIj";
        string a="";
        //reverse the string with every albhatical letter not any special characters.   
        //output->j-Ih-gfE-dCba
    
    
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])){
                a.push_back(s[i]);
            }else if(islower(s[i])){
                a.push_back(s[i]);
            }
        }
        //now a will become abCdEfghIj
        reverse(a.begin(),a.end());
        //after the reverse will become jIhgfEdCba
        int j=0;
        for(int i=0;i<s.size();i++){
            //here we assigning the character one by one 
            // if string s contain special character then it will not go to if condition
            // and j will remain on the same position until i is not enter in if condition.
            if(isupper(s[i]) || islower(s[i])){
            s[i]=a[j];
            j++;
            }
        }
    cout<<s;
    
    
}