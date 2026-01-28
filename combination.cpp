#include<iostream>
#include<vector>
#include<string>

using namespace std;


bool ok(long long n,long long given,vector<long long>&ans){
    ans.push_back(n);

    if(n==given){
        return true;
    }else if( n>given){
        ans.pop_back();
        return false;
    }
     
    
    if(ok(n*2,given,ans) || ok(n*10+1,given,ans)){
        return true;
    }
    ans.pop_back();
    return false;




}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    long long given;
    cin>>n>>given;
    vector<long long>ans;
    if(ok(n,given,ans)){
        cout<<"YES\n";
        cout<<ans.size()<<"\n";
        for(auto c:ans){
            cout<<c<<" ";
        }

    }else{
        cout<<"NO";
    }
    return 0;
}
