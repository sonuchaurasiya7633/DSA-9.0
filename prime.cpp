#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  for(int i=2; i<=n-1; i++){
    if(n%i==0){
      cout<<"Not a prime number"<<endl;
      break;
    }
    else{
      cout<<"Prime number"<<endl;
      break;
    }
  }
 return 0;
}
