class Solution {
public:
    int days(string date){
        vector<int> daysinmonths={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int month=stoi(date.substr(0,2));
        int day=stoi(date.substr(3,2));
        int totaldays=0;
        for(int i=0;i<month-1;i++){
            totaldays+=daysinmonths[i];
        }
        return day+totaldays;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int starta=days(arriveAlice);
        int enda=days(leaveAlice);
        int startb=days(arriveBob);
        int endb=days(leaveBob);

        int arrive=max(starta,startb);
        int leave=min(enda,endb);
        if(arrive<=leave){
            return leave-arrive+1;
        }
        return 0;
    }
};