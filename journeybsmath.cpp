#include<iostream>
#include<vector>
#include<string>

using namespace std;


int op(int n,int mul,vector<long long>&haha,vector<long long>&ha){

    long long l=1;
    long long r=n;
    while(l<=r){
        long long mid=l + (r-l)/2;
        long long ans=0;
        long long a=mid/3;
        long long b=mid%3;
        ans= a*mul ;
        if(b>0){
            ans+=haha[b-1];
        }
        int c=(b==0?ha[2]:ha[b-1]);
    
        
        if(ans==n || (ans>n && mid==1) ||   (ans>n && n>ans-c)     ){
            return (int)mid;
        }else if((ans)>n){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }

    return l;

}



int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    
    
    if(!(cin>>n)){
        return 0;
    }
    while(n--){
        
        int an;
        cin>>an;

        vector<long long>ok(3);
        vector<long long>ha(3);
        cin>>ok[0];
        ha[0]=ok[0];
        cin>>ok[1];
        ha[1]=ok[1];
        cin>>ok[2];
        ha[2]=ok[2];
        int rev=0;
        for(int i=0;i<3;i++){
            rev+=ok[i];
            ok[i]=rev;

        }
        int ans=op(an,rev,ok,ha);
        cout<<ans<<"\n";

        
    }

    return 0;
}
