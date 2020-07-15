class Solution {
public:
    double angleClock(int hour, int minutes)
    {
        if(hour == 12)
        {
            hour = 0;
        }
        if(minutes == 60)
        {
            minutes = 0;
            hour++;
            if(hour>12)
            {
                hour = hour-12;
            }
        }
        double ha = (hour*60+minutes)*0.5;
        double ma = minutes*6;
        double ans = abs(ha-ma);
        ans = min(360-ans,ans);
        return ans;        
    }
};
