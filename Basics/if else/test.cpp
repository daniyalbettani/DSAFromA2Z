#include <iostream>
using namespace std;

int main()
{
    int marks;
    cin >> marks;
    if (marks <= 40)
    {
        cout << "Fail";
    }
    else if (marks <= 60)
    {
        cout << "Grade C";
    }
    else if (marks <= 80)
    {
        cout << "Grade B";
    }
    else if (marks <= 100)
    {
        cout << "Grade A";
    }
    else
    {
        cout << "Invalid Marks!";
    }
    return 0;
}