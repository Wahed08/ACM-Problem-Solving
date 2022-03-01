class MyHashMap {
public:
    map<int, int>mapp;
    MyHashMap() {
        map<int, int>mapp;
    }
    
    void put(int key, int value) {
        if(mapp.find(key) != mapp.end()){
            mapp.at(key) = value;
        }else{
            mapp.insert({key, value});
        }
    }
    
    int get(int key) {
        if(mapp.find(key) != mapp.end())
            return mapp[key];
        else
            return -1;
    }
    
    void remove(int key) {
        mapp.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
