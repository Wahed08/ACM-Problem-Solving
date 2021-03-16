typedef long long int lli;
class Solution {
public:
     int ans = 0;
   void merge(vector <int> &a, lli low, lli mid, lli high){
    
      lli k = high - low + 1;
      vector <lli> temp(k);
      lli i = low, j = mid + 1;
      k = 0;
      lli first = mid + 1;
      while(i <= mid){
         while(first <= high && (lli)a[first] * 2 < (lli)a[i]) {
            first++;
         }
         while(j <= high && a[j] <= a[i])
         {
            temp[k] = a[j];
            j++;
            k++;
         }
         ans += first - (mid + 1);
         temp[k] = a[i];
         i++;
         k++;
      }
      while(j <= high){
         temp[k] = a[j];
         k++;
         j++;
      }
      k = 0;
      for(lli i = low; i <= high; i++){
         a[i] = temp[k];
         k++;
      }
   }
   void calc(vector <int> &a, lli low, lli high){
      if(low >= high)return;
      lli mid = low + (high - low)/2;
      calc(a, low, mid);
      calc(a, mid + 1, high);
      merge(a, low, mid, high);
   }
   lli solve(vector<int> &A) {
      ans = 0;
      lli n = A.size();
      calc(A, 0, n - 1);
      return ans;
   }
   int reversePairs(vector<int>& nums) {
      return solve(nums);
    }
   
};
