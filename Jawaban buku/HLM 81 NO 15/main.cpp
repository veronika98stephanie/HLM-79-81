#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string star ="*";
for (int i=0;i<5;i++){
    cout<<setw(i+5)<<star<<endl;
    star += "**";
}
}
