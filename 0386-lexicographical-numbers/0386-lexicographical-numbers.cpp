class Solution {
public:
    void solve(int n,int num,vector<int> &ans){
        if(num>n) return;

        ans.push_back(num); 

        for(int i=0;i<=9;i++){            
            solve(n,num*10+i,ans);                        
        }
    }

    vector<int> lexicalOrder(int n) {
        vector<int> ans; 

        int i=1;
        while(i<=9 && i<=n){
            solve(n,i++,ans);
        }

        return ans;        
    }
};