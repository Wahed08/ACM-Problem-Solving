class Solution {
public:
    bool squareIsWhite(string coordinates) {
        map<char, int> first = {
            {'a', 1},
            {'b', 2},
            {'c', 3},
            {'d', 4},
            {'e', 5},
            {'f', 6},
            {'g', 7},
            {'h', 8},
        };
         map<char, int> second = {
             {'1', 1},
             {'2', 2},
             {'3', 3},
             {'4', 4},
             {'5', 5},
             {'6', 6},
             {'7', 7},
             {'8', 8},
        };
        
        if((first[coordinates[0]] + second[coordinates[1]]) % 2 == 0)
            return false;
        return true;
    }
};
