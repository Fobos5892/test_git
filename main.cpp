#include <iostream>

using namespace std;

int sum (int a, int b) { return a + b; }

int split(int a, int b) { return a / b; }

int main()
{
    cout << sum (2, 3) << endl;
    cout << split(6 , 3) << endl;
}