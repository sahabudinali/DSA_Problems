int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
int main(){

    string haystack = "hello"; 
    string needle = "ll";
    cout<<strStr(haystack, needle);
}    