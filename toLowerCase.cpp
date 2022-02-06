int main(){
    string s="HELLO";

    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i<='Z']){
            // suppose if first letter comes Capital A then A Ascii code is 1000001 and 32 bit is 100000
            // after adding this two will become the 1100001 and this is small a.
            s[i]=s[i]+32;
        }
    }

    cout<<s;
}

// if you want to convert lowerCase to upperCase 

int main(){
    string s="hello";

    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i<='z']){
            // suppose if first letter comes Capital A then A Ascii code is 1000001 and 32 bit is 100000
            // after subtracting this two will become the 1000001 and this is capital A.
            s[i]=s[i]-32;
        }
    }

    cout<<s;
}