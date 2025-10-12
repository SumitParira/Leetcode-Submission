class MyCalendar {
public:
vector<pair<int,int>> bookings;
    MyCalendar() {
        
    }

    bool isOverlap(int start,int end1,int startTime,int endTime){
        return max(start,startTime)<min(end1,endTime);
    }
    
    bool book(int startTime, int endTime) {
        for(auto books:bookings){
            if(isOverlap(books.first,books.second,startTime,endTime)){
                return false;
            }
        }
        bookings.push_back({startTime,endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */