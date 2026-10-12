class Solution {
public:
    int minPartitions(string n) {
        int maxi=0;
        for(int i=0;i<n.size();i++){
            int digit=n[i]-'0';
            if(digit>maxi) maxi=digit;
        }
        return maxi;
    }
};