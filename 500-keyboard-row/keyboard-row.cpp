class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string r1="qwertyuiop";
        string r2="asdfghjkl";
        string r3="zxcvbnm";
        vector<string> a;
        for(int i=0;i<words.size();i++){
            string g=words[i];
            string s="";
            for(auto f:g){
                f=tolower(f);
                s+=f;
            }
            cout<<s;
            int c=0;
            int k=0;
            int l=0;
            for(int j=0;j<s.size();j++){
                if(r1.find(s[j])!=std::string::npos){
                        c+=1;
                }
                if(r2.find(s[j])!=std::string::npos){
                        k+=1;
                }
                if(r3.find(s[j])!=std::string::npos){
                        l+=1;
                }
            }
            cout<<l<<" "<<c<<" "<<k<<"---";
            if(l==s.size() ||c==s.size() || k==s.size()){
                a.push_back(g);
            }
        }
        return a;
    }
};