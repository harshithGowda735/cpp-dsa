//Find Second Smallest and Second Largest Element in an array
 #include<iostream>
 #include<vector>
 #include <algorithm>
 using namespace std;
   void sorting(vector<int>&arr){
    int n = arr.size();
    sort(arr.begin() , arr.end());
    int small = arr[1];
    int large = arr[n-2];
    cout<<small<<" second smallest number";
    cout<<large<<" second largest number";
   }
 int main(){
     vector<int> arr = {5, 3, 8, 4, 2 ,7 ,8 ,9};
     sorting(arr);
    return 0;
 }