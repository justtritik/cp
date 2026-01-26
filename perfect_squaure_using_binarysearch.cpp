#include<iostream>
#include<vector>
#include<string>

using namespace std;


int ok(int n){

    long long l=1;
    long long r=n;
    while(l<=r){
        long long mid=l + (r-l)/2;
        long long sq=mid*mid;
        if(sq==n){
            return (int)mid;
        }else if((mid*mid)>n){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }

    return -1;

}

long long stringtoint(string &s){
      long long rev=0;
      for(auto c:s){
            rev=rev*10+(c-'0');
      }
      return rev;

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    
    
    if(!(cin>>n)){
        return 0;
    }
    while(n--){
        string s;
        cin>>s;

        if(s.size()!=4){
            cout<<-1<<"\n";
        }else {
            int num=(int)stringtoint(s);
            if(num==0){ 
                cout<<"0 0\n";
                continue;
            }
            int bs=ok(num);
            if(bs!=-1){
                
                cout<<"0 "<<bs<<"\n";
            }else{
                cout<<"-1"<<'\n';
            }
        }

        
    }

    return 0;
}
