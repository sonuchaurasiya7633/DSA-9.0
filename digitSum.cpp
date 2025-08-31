#include<iostream>
using namespace std;

int main(){
  int n = 1082899;
  int digitSum = 0;
  while(n>0){
   int lastDigit = n%10;
   digitSum = digitSum + lastDigit;
   n = n/10;
  }
  cout<<"Sum of digits: "<<digitSum<<endl;
return 0;
}