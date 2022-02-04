//Plus One
// example if array is given [1, 2 ,4] then  add 1 into 124 number it will become 124+1=125
//now append this number again into the array.[1,2,5]
//now suppose if example is [1, 2, 9] then 129+1=130 [1, 3, 0] 
// 
vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        
        int i=n-1;
        int carry=1;
        while(i>=0){
            int add=digits[i]+carry;
            int num=add%10;
            add=add/10;
            carry=add;
            digits[i]=num;
            i--;
            
        }
        // this code work when carry variable is carry a value of 1 
        // and this will happed only when array contain only one number which 9 then
        // array will become 10 and after the addition of one zero number append in the array but carry will remain hole the value of 1.
        if(carry){
            // here we are adding a carray in front of the array.
            digits.insert(digits.begin(),carry);
        }
        
        return digits;
    }

int main(){
    vector<int>a={1,2 ,9};
    vector<int>b;
    b=plusOne(a);
    for(auto i:b){
        cout<<i;
    }
}    