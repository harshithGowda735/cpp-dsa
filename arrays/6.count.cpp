 void count(vector<int>&arr){
    int n = arr.size();
    int count = 0;
    for(int i=0;i<n;i++){
        count+=1;
    }
    cout<<count;
 }
int main(){
 vector<int> arr = {5, 3, 8, 4, 2 ,7 ,8 ,9};
     count(arr);
    return 0;

}