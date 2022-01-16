int main() {
    vector<int>a={3,2,3,2,2};
    int vote=0;
    int cand;
    for(int i=0;i<a.size();i++){
        
        if(vote==0)
            cand=a[i];
        if(cand==a[i])
            vote++;
        else{
            vote--;
        }
    }
    std::cout << cand;
}