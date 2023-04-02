class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);

        vector<int>init = spells;
        sort(spells.begin(), spells.end());
        sort(potions.begin(), potions.end());
        long long value = 0, i = 0, j = potions.size()-1;
        vector<int>vec;
        map<int, int>mapp;

        while(i < spells.size()){
            while(j >= 0){
                if((long long)spells[i] * potions[j] < success) break;
                else{
                    value++;
                    j--;
                }
            }
            mapp.insert({spells[i], value});
            i++;
        }
        for(int i=0; i<init.size(); i++) vec.push_back(mapp[init[i]]);
        return vec;
    }
};
