#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int first = 0, sec = 1, third;

    cout << "Fibonacci Series: " << first << " " << sec << " ";

    for (int i = 2; i < n; i++) {
        third = first + sec;
        cout << third << " ";
        first = sec;
        sec = third;
    }

    return 0;
}
