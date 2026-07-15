//Check if an Array is Sorted
 #include<iostream>
 using namespace std;
  #include<vector>
  void check(vector<int>&arr){
    int n = arr.size(); 
    for(int i=0;i<n;i++)
        {if(arr[i]>arr[i+1]){
            cout<<"array is not sorted";
            return;
        } 
}  cout<<"sorted";
    }
 int main(){
 vector<int> arr = {10,6 };
 check(arr);
    return 0;
 }