#include <iostream>
using namespace std;

int main()
{
    // int arr[5];
    // cin >> arr[0], cin >> arr[1], cin >> arr[2], cin >> arr[3], cin >> arr[4];
    // cout << arr[4];

    int arr1[3][3];
    cin >> arr1[0][0], cin >> arr1[0][1], cin >> arr1[0][2], cin >> arr1[1][0], cin >> arr1[1][1], cin >> arr1[1][2];
    cout << arr1[0][0], cout << arr1[0][1], cout << arr1[0][2], cout << arr1[1][0], cout << arr1[1][1], cout << arr1[1][2];
    return 0;
}