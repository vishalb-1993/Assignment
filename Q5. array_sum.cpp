#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter values in array \n";
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    cout << "Sum= " << sum << endl;

    return 0;
}
