// #include<iostream>
// using namespace std;

// int main()
//  {
//   int n = 1082899;
//    int res = 0;
//   while(n>0){
//    int lastDigit = n%10;
//     res = res*10+lastDigit;
//    n = n/10;
  
//   }
//   cout<<res <<" ";
// return 0;
// }

// second method 
#include<iostream>
using namespace std;

int main(){
  int n ;
  cout<<"Enter a number: ";
  cin>>n;
  while(n>0){
   int lastDigit = n%10;
    cout<<lastDigit<<" ";
   n = n/10;
  }
return 0;
}