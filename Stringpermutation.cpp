class Solution{
    public:
    //Complete this function
    
 void solve(string S,vector<string>&ans,int i){
        if(i==S.size()-1){
            ans.push_back(S);
            return;
        }
        for(int j=i;j<S.size();j++){
          swap(S[i],S[j]);
          solve(S,ans,i+1);
          swap(S[i],S[j]);
        }
        
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string>ans;
        solve(S,ans,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
