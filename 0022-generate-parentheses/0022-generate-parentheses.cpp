class Solution {
public:
void generate(string &temp,vector<string>&ans,int open,int close,int n){
    if(temp.size()==2*n){
        ans.push_back(temp);
    }
    if(open<n){
        temp.push_back('(');
        generate(temp,ans,open+1,close,n);
        temp.pop_back();
    }
    if(close<open){
        temp.push_back(')');
        generate(temp,ans,open,close+1,n);
        temp.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        string temp = "";
        vector<string>ans;
        generate(temp,ans,0,0,n);
        return ans;
        
    }
};