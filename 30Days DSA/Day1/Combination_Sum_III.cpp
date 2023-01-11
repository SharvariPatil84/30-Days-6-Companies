class Solution {
public:
void sum(int k,int n,int ind,vector<vector<int>>&ans,vector<int>temp)
    {
       if(k==0&&n==0)
       {
           ans.push_back(temp);
           return;
       }
        
        for(int i=ind;i<=9;i++)
        {
            temp.push_back(i);
            sum(k-1,n-i,i+1,ans,temp);
            temp.pop_back();
        } 
       
    }
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<vector<int>>ans;
        vector<int>temp;
        sum(k,n,1,ans,temp);
        return ans;
    }
};
   