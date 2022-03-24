class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = people.size();
        sort(people.begin(), people.end());
        int i = 0, j = n-1, count = 0;
        
        while(i <= j){
            if(people[i] + people[j] <= limit){
                count++;
                i++;
                j--;
            }
            else if(people[i] + people[j] > limit){
                count++;
                j--;
            }
        }
        return count;
    }
};
