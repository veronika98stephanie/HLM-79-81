#include <iostream>

using namespace std;

int main()
{
    double  oceanLevelIncrease = 1.5,
            fifthYears = 5,
            seventhYears = 7,
            tenthYears = 10;

    cout << "The ocean level in five years will increase by "
         << oceanLevelIncrease*fifthYears <<endl;
    cout << "The ocean level in seven years will increase by "
         << oceanLevelIncrease*seventhYears <<endl;
    cout << "The ocean level in ten years will increase by "
         << oceanLevelIncrease*tenthYears <<endl;

    return 0;
}
