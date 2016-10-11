#include <iostream>

using namespace std;

int main()
{
    string  name,
            address,
            city,
            state,
            zipCode,
            telephoneNumber,
            collegeMajor;

    cout << "Please input your name " << endl;
    cin >> name;

    cout << "Please input your address " << endl;
    cin >> address;

    cout << "Please input your city " << endl;
    cin >> city;

    cout << "Please input your state " << endl;
    cin >> state;

    cout << "Please input your zip code " << endl;
    cin >> zipCode;

    cout << "Please input your telephone number " << endl;
    cin >> telephoneNumber;

    cout << "Please input your college major " << endl;
    cin >> collegeMajor;

    cout << "Name : " << name << endl << "Addres : " << address << ", " << city << ", "
         << state << ", " << zipCode << endl
         << "Telephone number : " << telephoneNumber << endl
         << "Major : " << collegeMajor << endl;


    return 0;
}
