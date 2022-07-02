class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int start = 0, end = letters.size()-1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(letters[mid]==target && letters[mid+1]>target)
                return letters[mid+1];
            else if(letters[mid]==target || letters[mid] < target)
                start = mid+1;
            else 
                end = mid-1;
        }
        
        if(start >= letters.size()) return letters[0];
        return letters[start];
    }
};
