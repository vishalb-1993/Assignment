#include <iostream>
using namespace std;
int main() 
{
    int units;
    float bill = 0;
    cout << "Enter the number of units: ";
    cin >> units;
    if(units<0)
    {
      bill=0;
}
     else if (units <= 50) 
    {
        bill = units * 1;
    } else if (units > 50 && units <= 150) 
    {
        bill = 50 * 1 + (units - 50) * 2;
    } else
    {
        bill = 50 * 1 + 100 * 2 + (units - 150) * 5;
    }
    bill += 50;
    cout << "Total Electricity Bill: $" << bill << endl;
    return 0;
}
