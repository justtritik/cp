#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    bool fond=false;


    size_t posi=s.find("AB");

    if(posi!=string::npos){
        if(s.find("BA",posi+2)!=string::npos){
            fond=true;
        }
    }

    if(!fond){
        posi=s.find("BA");
        if(posi!=string::npos){
        if(s.find("AB",posi+2)!=string::npos){
            fond=true;
        }
    }
    }

    


    if(fond==false){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    return 0;
}
