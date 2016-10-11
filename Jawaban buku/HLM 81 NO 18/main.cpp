#include <iostream>

using namespace std;

int main()
{
    int totalCustomer = 16500,
        energyDrinkPercentage = 15,
        citrusFlavored = 58,
        energyDrinkBuyer = totalCustomer*energyDrinkPercentage/100,
        citrusFlavoredBuyer = energyDrinkBuyer*citrusFlavored/100;

        cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week "
             << energyDrinkBuyer << endl;
        cout << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks "
             << citrusFlavoredBuyer << endl;

    return 0;
}
