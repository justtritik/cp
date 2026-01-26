#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool ok(string &s){
    int a=0;
    if(s.size()<=1){
        return true;
    }
    for(auto c:){
        if(c=='Y'){
            a++;
        }
    }
    return a<2;
}

int main(){
    
    ios_base::sync_with_stdio(false)
    cin.tie(NULL);
    
    int n;
    if(!(cin>>n)){
        return 0;
    }
    
    
    while(n--){
        string s;
        cin>>s;
        if(ok(s)){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    
    return 0;
    
}
