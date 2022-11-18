#include <iostream>

using namespace std;
void Full_Subtractor(int A, int B, int Bin)
{
    int difference =(A ^ B) ^ Bin;
    int A1 = not(A);
    int B_out = A1 & Bin | A1 & B | B & Bin;
    cout <<"Difference = "<<difference<<endl;
    cout<<"B_out = "<<B_out<<endl;
}

int main()
{
    int A = 1;
    int B = 0;
    int Bin = 1;
    Full_Subtractor(A , B , Bin);
    
    return 0;
}
