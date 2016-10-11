#include <iostream>

using namespace std;

int main()
{
    double  value = 95,
            stateSalesTax = 4,
            countySalesTax = 2,
            totalTax,
            nState = value * stateSalesTax /100, //state tax
            nCounty= value * countySalesTax/100; //county tax

            totalTax = nState + nCounty + value;

    cout<<"Total tax is "<<totalTax<<endl;
    return 0;
}
