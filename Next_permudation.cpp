LinkedIn : www.linkedin.com/in/souvik-chowdhury444411

  
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    vector<int>nextPermutation(vector<int>& arr) {
    int n = arr.size();
    int i = n - 2;
     while (i>=0 && arr[i] >=arr[i+1])  {
         i--;
     } 
     if(i>=0){
         int j = n - 1;
         while (arr[j] <= arr[i]){
             j--;
         }
         swap(arr[i],arr[j]);
     }
     reverse(arr.begin() + i + 1,arr.end());
     return arr;
    }
};
    
    void printArray(const vector<int>&arr){
        for (int num : arr){
            cout <<  num << " ";
            
        }
        cout << endl;
    }
