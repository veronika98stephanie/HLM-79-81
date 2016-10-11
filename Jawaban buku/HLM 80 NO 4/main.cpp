#include <iostream>

using namespace std;

int main()
{
    double  charge = 88.67,
            tax = 6.75,
            Tip = 20, //tip after adding tax
            totalTax1 = charge*tax/100, //tax
            totalValue1 = charge+totalTax1, //charge + tax
            totalTip = totalValue1 * Tip / 100, // total tip
            totalValue2 = totalTip + totalValue1;

            cout << "the total is $ " << totalValue2 <<endl;

    return 0;
}
