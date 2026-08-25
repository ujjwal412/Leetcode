class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
       
        sort(meetings.begin(),meetings.end());

        int meetingDays = 0;

        int start1=meetings[0][0];
        int end1=meetings[0][1];
        for(int i=1; i<meetings.size(); i++){
            int start2 = meetings[i][0];
            int end2 = meetings[i][1];
            if(end1>=start2-1){
                end1=max(end1, end2);
            }
            else{
                 meetingDays += end1 - start1 + 1;

                start1 = start2;
                end1 = end2;
            }
        }
       meetingDays += end1 - start1 + 1;

        return days - meetingDays;
    }
};