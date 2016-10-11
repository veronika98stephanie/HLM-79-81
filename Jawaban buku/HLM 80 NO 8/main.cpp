#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int size = 5;
    double  Price [size] = {15.95, 24.95, 6.95, 12.59, 3.95},
            tax = 0.07,
            subTotal = 0,
            salesTax,
            total;

    for (int i = 0; i < size; i++)
    {
        cout <<"Item "<< i+1 <<" "<< Price [i] << endl;
    }


    for (int i = 0; i < size; i++)
    {
        subTotal += Price [i];
    }
    cout << "The subtotal is $ " << fixed << setprecision(2) << subTotal << endl;

    salesTax = subTotal * tax;

    cout << "The Sales tax is $ " << fixed << setprecision(2) << salesTax << endl;

    total = subTotal + salesTax;

    cout << "The total is $ " << fixed << setprecision(2) << total <<endl;


    return 0;
}
