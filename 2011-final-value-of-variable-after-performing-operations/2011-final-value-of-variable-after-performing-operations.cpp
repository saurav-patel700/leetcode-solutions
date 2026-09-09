class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int count=0;
        for(string s : operations){
            if(s[1]=='+') count++;
            else count--;
        }
        return count;
    }
};