#include<iostream>
using namespace std;
 void pattern3(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
 }
 void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
 }
 void pattern5(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //columns
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
 }
 void pattern6(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //columns
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
 }
 void pattern7(int n){
    //outer loop 
    for(int i=0;i<n;i++){
        int start =1;
        if(i%2==0) start =1;
        else start=0;
        // inner loop 
        for(int j=0;j<=i;j++){
            cout<<start;
            // for alternating printing
            start = 1-start;
        }
        cout<<endl;
    }
 }
void pattern8(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j = i; j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}
void pattern9(int n){
    int num =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}
 int main(){
    int n = 3;
    pattern9(n);
    return 0;
 }