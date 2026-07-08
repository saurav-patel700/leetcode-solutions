class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int> pre(n + 1, 0);
        vector<int> suf(n + 1, 0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i] + (customers[i]=='N');
        }
        for(int i=n-1;i>=0;i--){
            suf[i]=suf[i+1] + (customers[i]=='Y');
        }
        int minpen=INT_MAX;
        int ans=0;
        for(int i=0;i<=n;i++){
            int pen=pre[i]+suf[i];
            if(pen<minpen){
                minpen=pen;
                ans=i;
            }
        }
        return ans;    
    }
};