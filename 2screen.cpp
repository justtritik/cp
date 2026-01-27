#include<iostream>
#include<vector>
#include<string>

using namespace std;


long long ok(string &a,string &b){
    long long i=0;
    long long j=0;
    long long m=a.size();
    long long n=b.size();
    bool f=false;
    while(i<m && j<n && a[i]==b[j]){
        i++;
        j++;
        f=true;
    }
    long long ans=0;
    if(f==true){
        ans+=i+1;
    }
    ans+=(m-i)+(n-j);
    return ans;
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    
    
    if(!(cin>>n)){
        return 0;
    }
    while(n--){
        
        string a;
        string b;
        cin>>a>>b;
        long long t=ok(a,b);
        cout<<t<<"\n";
        
    }

    return 0;
}
