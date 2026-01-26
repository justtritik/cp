long long stringtoint(string &s){
      long long rev=0;
      for(auto c:s){
            rev=rev*10+(c-'0');
      }
      return rev;

}
