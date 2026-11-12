#include <iostream>
using namespace std;

void printName(string name)
{
    cout << "Hey" << " " << name;
}

int twoNosum(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    // string name;
    // cin >> name;
    // printName(name);
    int a;
    int b;
    cin >> a;
    cin >> b;
    int res = twoNosum(a, b);
    cout << res;
    return 0;
}