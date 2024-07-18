class Solution {
public:
    bool check(char c) {
    if(c =='a' || c=='e' || c=='i' || c=='o' || c=='u'||c =='A' || c=='E' || c=='I' || c=='O' || c=='U') return 1;
    else return 0;
  }
    string reverseVowels(string s) {
        int p=0;
        int q = s.length()-1;
       while(p<q){
        if(check(s[p]) && check(s[q])){
            char temp = s[p];
            s[p] = s[q];
            s[q] = temp;
            p++;
            q--;
        }else if(!check(s[p]) && check(s[q])){
            p++;
        }else if(check(s[p]) && !check(s[q])){
            q--;
        }else{
            p++;
            q--;
        }
       }
       return s;
    }
};