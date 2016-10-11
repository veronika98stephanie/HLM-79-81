#include <iostream>

using namespace std;

int main()
{
    int gallons = 15,
        distance = 375,
        milesPerGallons;

    milesPerGallons = distance / gallons;
    cout << "The MPG is " << milesPerGallons << endl;

    return 0;
}
