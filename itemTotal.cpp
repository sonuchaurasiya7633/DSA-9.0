#include<iostream>
using namespace std;

int main(){
float pencil;
float pen;
float eraser;
float totalGST;
cout<<"Enter the pencil price: ";
cin>>pencil;
cout<<"Enter the pen price: ";
cin>>pen;
cout<<"Enter the eraser price: ";
cin>>eraser;
float total = pencil + pen + eraser;
cout<<"The total price of the items is: "<<total<<endl;
totalGST = total + (total * 0.18);
cout<<"The total price including GST is: "<<totalGST<<endl;

return 0;
}
