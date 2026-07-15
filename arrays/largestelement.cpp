#include<iostream>
#include<vector>
using namespace std;

 void largest(vector<int>&arr){
    int n = arr.size();
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
 }
 
int main(){
 vector<int> arr = {5, 3, 8, 4, 2 ,7 ,8 ,9};
     largest(arr);
    return 0;

}