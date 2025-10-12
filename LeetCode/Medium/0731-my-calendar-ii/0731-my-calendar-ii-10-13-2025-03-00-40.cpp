class MyCalendarTwo {
public:
    vector<pair<int,int>> bookings;
    vector<pair<int,int>> doubleBookings;
    
    MyCalendarTwo() {
        
    }

    bool isOverlap(int start1,int end1,int start2,int end2){
        return max(start1,start2)<min(end1,end2);
    }

    pair<int,int> isOverlapRegion(int start1,int end1,int start2,int end2){
        return {max(start1,start2),min(end1,end2)};
    }

    
    bool book(int startTime, int endTime) {
        for(auto books:doubleBookings){
            if(isOverlap(books.first,books.second,startTime,endTime)){
                return false;
            }
        }
        for(auto books:bookings){
            if(isOverlap(books.first,books.second,startTime,endTime)){
                doubleBookings.push_back(isOverlapRegion(books.first,books.second,startTime,endTime));
            }
        }
        bookings.push_back({startTime,endTime});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */