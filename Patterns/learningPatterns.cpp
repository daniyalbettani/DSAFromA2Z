#include <iostream>
using namespace std;

// void print1(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void print2(int x)
// {
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void print3(int y)
// {
//     for (int i = 1; i <= y; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void print4(int z)
// {
//     for (int i = 1; i <= z; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
// }

// void print5(int a)
// {
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= a - i + 1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
void print6(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
int main()
{
    // int n;
    // cin >> n;
    // print1(n);
    // int x;
    // cin >> x;
    // print2(x);

    // int y;
    // cin >> y;
    // print3(y);

    // int z;
    // cin >> z;
    // print4(z);

    // int a;
    // cin >> a;
    // print5(a);

    int a;
    cin >> a;
    print6(a);
}