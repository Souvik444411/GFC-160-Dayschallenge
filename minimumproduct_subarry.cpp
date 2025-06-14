// LinkedIn : www.linkedin.com/in/souvik-chowdhury444411

class Solution {
  public:
    int maxProduct(vector<int> &arr) {
    
    int n = arr.size();
    int currMax = arr[0], currMin = arr[0], maxPod = arr[0];
    for(int i=1;i<n;i++){
        if(arr [i]<0)
        swap(currMax,currMin);
        currMax = max(arr[i],currMax*arr[i]);
        currMin = min(arr[i],currMin*arr[i]);
        maxPod = max(maxPod,currMax);
        }
    
        return maxPod;
    }
};
