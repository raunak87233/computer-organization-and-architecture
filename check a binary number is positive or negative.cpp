#include <iostream>
using namespace std;

int main()
{
    signed long num1 = 0;
 
	cout << " enter a binary number: ";
    cin >> num1;
    if(num1 >> 31 & 1){
        cout<<"negative";
    }
    else {
        cout<<"positive";
    }
    return 0;
}
