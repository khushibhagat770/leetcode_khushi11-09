class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int sn = s.size();
        int tn = t.size();
        for(int i=0;i<sn;i++){
            if(s[i]=='#'){
                if(i>0){ 
                s.erase(i-1,2);
                i -= 2;
                sn -= 2; 
            }
            else{
                s.erase(i,1);
                i--;
                sn--;
            }
        }
        }
         for(int i=0;i<tn;i++){
            if(t[i]=='#'){
                if(i>0){
                t.erase(i-1,2);
                i -= 2;
                tn -= 2;
            }
             else{
                t.erase(i,1);
                i--;
                tn--;
            }
        }
         }
        return s==t;
    }
};