#include <iostream>

using namespace std;

int main()
{
    int shares = 750;
    double  price = 35,
            commission = 2,
            total = shares*price,
            totalCommission = total*commission/100;

    cout << "The amount paid for the stock alone $" << total <<endl;
    cout << "The amount of the commission $" << totalCommission << endl;
    cout << "The total amount paid $" << total+totalCommission << endl;

    return 0;
}
