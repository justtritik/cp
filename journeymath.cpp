#include<iostream>
#include<vector>
#include<string>

using namespace std;


int ok(long long n,long long a,long long b,long long c){

    long long aa=n/(a+b+c);
    aa=aa*3;
    long long bb=n%(a+b+c);

    if(bb==0){
        return aa;
    }else if(bb-a<=0){
        return aa+1;
    }else if(bb-a-b<=0){
        return aa+2;
    }else{
        return aa+3;
    }

    return -1;
    

}



int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    
    
    if(!(cin>>n)){
        return 0;
    }
    while(n--){
        
        long long an;
        cin>>an;
        long long a,b,c;
        cin>>a>>b>>c;
        int ans=ok(an,a,b,c);
        cout<<ans<<'\n';
        
    }

    return 0;
}
