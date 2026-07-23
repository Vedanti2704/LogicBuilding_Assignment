//Write generic program which accepts one value and one number from user. Print that value that number of times.

#include<iostream>
using namespace std;

template<class T>
void Display(T value, int iSize)
{
    for(int i = 1; i <= iSize; i++)
    {
        cout << value << "\t";
    }
    cout << endl;
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7f,6);

    return 0;
}