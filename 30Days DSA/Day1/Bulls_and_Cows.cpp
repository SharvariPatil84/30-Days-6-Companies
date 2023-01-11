class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0,n,i;
        n=guess.size();
        unordered_map<char,int>mp;
        for(i=0;i<n;i++)
        {
            if(secret[i]==guess[i])
            {
                bull++;
            }
            mp[secret[i]]++;
        }
        int cows=0;
       for(i=0;i<n;i++)
       {
           if(mp.find(guess[i])!=mp.end())
           {
               cows++;
               mp[guess[i]]--;
           }
           if(mp[guess[i]]==0)
           {
               mp.erase(guess[i]);
           }
       }
        string ans="";
        cows-=bull;
        string A="",B="";
        while(bull>0)
        {
            A+=(char)(bull%10)+'0';
            bull/=10;
        }
        while(cows>0)
        {
           
            B+=(char)(cows%10)+'0';
            cows/=10;
        }
        reverse(A.begin(),A.end());
        reverse(B.begin(),B.end());
        if(A=="")
        {
            ans+='0';
        }
        ans+=A;
        ans+='A';
        if(B=="")
        {
            ans+='0';
       }
        ans+=B;
        
        ans+='B';
        return ans;
    }
};