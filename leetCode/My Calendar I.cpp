class MyCalendar {
public:
    vector<pair<int, int>>vec;
    MyCalendar() {}
    
    bool book(int start, int end) {
        
        vec.push_back({start, end});
        return check(vec, start, end);
    }
    
    bool check(vector<pair<int, int>>&vec, int start, int end){
        
        if(vec.size() == 1) return true;
        
        int n = vec.size();
        for(int i=0; i<n-1; i++){
            if(start < vec[i].first and end <= vec[i].first) continue;
            if((start < vec[i].second and vec[i].first <= start) or (end >= vec[i].first and end <= vec[i].second) or (start < vec[i].second and vec[i].second < end)){
                vec.pop_back();
                return false;
            }
        }
        
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */


class MyCalendar {
public:
    vector<pair<int, int>>vec;
    MyCalendar() {}
    
    bool book(int start, int end) {
        
        vec.push_back({start, end});
        return check(vec, start, end);
    }
    
    bool check(vector<pair<int, int>>&vec, int start, int end){
        
        if(vec.size() == 1) return true;
        
        int n = vec.size();
        for(int i=0; i<n-1; i++){
            if(start < vec[i].second and vec[i].first < end){
                vec.pop_back();
                return false;
            }
        }
        
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
