class Solution {
public:
    int dayOfYear(string date) {
     vector<int>mon={31,28,31,30,31,30,31,31,30,31,30,31};

    int days=0;
   
         string y = date.substr(0, 4);
        string s = date.substr(5, 2);
        string d = date.substr(8, 2);

        int yr = stoi(y);
        int n = stoi(s);
        int day = stoi(d);

        for (int i = 0; i < n - 1; i++) {
            days += mon[i];
        }

         days += day;

         if(yr%100!=0 && yr%4==0 && n>2) days++;


         return days;

    }
};