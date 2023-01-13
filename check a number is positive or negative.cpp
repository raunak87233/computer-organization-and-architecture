#include <iostream>
using namespace std;

int main()
{
    signed long num1 = 0;
 
	cout << " Input a number : ";
    cin >> num1;
    if(num1 > 0)
    {
        cout << " The entered number is positive.\n\n";
    }
    else if(num1 < 0)
    {
        cout << " The entered number is negative.\n\n";
    }
    else
    {
        std::cout << " The number is zero.\n\n";
    }
    return 0;
}
