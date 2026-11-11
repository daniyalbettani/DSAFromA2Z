#include <iostream>
using namespace std;

int main()
{
    string name = "Daniyal Aziz ";
    for (int i = 1; i <= 10; i = i + 1)
    {
        cout << name << i << endl;
    }

    for (int j = 10; j > 0; j--)
    {
        cout << name << j << endl;
    }

    for (int k = 1; k < 50; k = k + 5)
    {
        cout << k << " " << endl;
    }

    return 0;
}