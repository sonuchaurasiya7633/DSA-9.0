#include<iostream>
#define PI 3.14
using namespace std;

int main()
{
    int radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    float area = PI*radius*radius;
    cout<<"Area of the circle is: "<<area<<endl;
    return 0;
}