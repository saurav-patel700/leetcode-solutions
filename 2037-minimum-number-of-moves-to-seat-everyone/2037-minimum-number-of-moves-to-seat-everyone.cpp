class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int m=0;
        for(int i=0;i<seats.size();i++){
            m+=abs(seats[i]-students[i]);
        }
        return m;
    }
};