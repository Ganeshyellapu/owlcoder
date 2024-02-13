class Solution {
public:
    bool ispal(string s){
        string k=s;
        reverse(k.begin(),k.end());
        if(k==s){
            return true;
        }
        return false;
    }
    string firstPalindrome(vector<string>& words) {
        string s="";
        for(int i=0;i<words.size();i++){
            if(ispal(words[i])){
                return words[i];
                break;
            }
        }
        return s;
    }
};