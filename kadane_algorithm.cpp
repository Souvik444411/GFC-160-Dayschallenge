// LinkedIn : www.linkedin.com/in/souvik-chowdhury444411

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
    
        int maxsofar = arr[0];
        int maxEndingHere = arr[0];
        for(int i=1;i<arr.size();i++){
            maxEndingHere = max(arr[i],maxEndingHere+arr[i]);
            maxsofar = max(maxsofar,maxEndingHere);
        }
        return maxsofar;
    }
};
