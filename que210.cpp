//Write generic program to accept N values and reverse the contents.

#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;

    while(iStart < iEnd)
    {
        T temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    cout<<"Array before reverse:"<<endl;
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }

    Reverse(arr,9);

    cout<<"\nArray after reverse:"<<endl;
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}