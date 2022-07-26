
class charReverse {
    static void swap(int start, int end, char[] s){
        if(start>=end){
            return;
        }
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        swap(start+1, end-1,s);
        
    }
    
    static void reverseChar(char[] s){
        int n=s.length-1;
        swap(0, n, s);
        for(char c:s){
            System.out.print(c+" ");
        }
    }
    
    public static void main(String[] args) {
        char[] s={'a','b','c','d','e','f'};
        reverseChar(s);
    }
}