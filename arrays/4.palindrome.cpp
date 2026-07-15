/*Example 1:
Input:N = 4554
Output:Palindrome Number
Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number */
#include<iostream>
using namespace std;
 bool palindrome( int N){int rev =0;
int dup=N;
while(N>0){
     int lastdigit = N%10;
    rev = rev*10 + lastdigit;
    N=N/10;
}
  if (rev==dup) return true;
  return false;}
 int main(){
    int N= 4554;
    if(palindrome(N)){
        cout<<" true";
    }
    else cout<<"false";
    return 0;
 }