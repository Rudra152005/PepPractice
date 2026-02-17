// Triplet Sum in Array



// (nm - 1 + sz) %10, (nm + 1) % 10
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());  // Step 1: Sort array

        // Step 2: Fix one element and use two pointers
        for(int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            int newTarget = target - arr[i];

            while(left < right) {
                int sum = arr[left] + arr[right];

                if(sum == newTarget) {
                    return true;  // Triplet found
                }
                else if(sum < newTarget) {
                    left++;   // Need bigger sum
                }
                else {
                    right--;  // Need smaller sum
                }
            }
        }

        return false;  // No triplet found
    }
};
