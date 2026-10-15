class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string ans="";
        while(i>=0 || j>=0 || carry){
            int a=0,b=0;
            if(i>=0){
            a=num1[i]-'0';
            i--;
            }
            if(j>=0){
            b=num2[j]-'0';
            j--;
            }
            // sum % 10 gives the current digit.
            int sum=a+b+carry;
            // sum / 10 gives the carry.
            ans+=(sum%10)+'0';
            // +'0' converts the digit back into a character.
            carry=sum/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;    
    }
};