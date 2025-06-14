// LinkedIn : www.linkedin.com/in/souvik-chowdhury444411

class Solution {
  public:
    int circularSubarraySum(vector<int> &arr) {
    int n = arr.size();
    int totalSum = arr[0];
    int maxKadane = arr[0], currMax = arr[0];
    int minKadane = arr[0], currMin = arr[0];
    for(int i = 1; i < n; i++){
        currMax = max(arr[i], currMax + arr[i]);
        maxKadane = max(maxKadane,currMax);
        
        currMin = min(arr[i], currMin + arr[i]);
        minKadane = min(minKadane, currMin);
        
        totalSum += arr[i];
    }
    if (maxKadane < 0) return maxKadane;
    
    return max(maxKadane, totalSum - minKadane);
    }
};
