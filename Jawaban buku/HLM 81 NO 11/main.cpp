#include <iostream>

using namespace std;

int main()
{
    int gallon = 20;

    double MPG1 = 23.5,
           MPG2 = 28.9,
           MPGavg = (MPG1 + MPG2)/2;

    cout << " Distance that can be reach " << gallon * MPGavg << endl;
    return 0;
}
