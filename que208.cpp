//Write generic program to search first occurrence of any specific value.

#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == iNo)
        {
            return i + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchFirst(arr,9,40);

    if(iRet == -1)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"First occurrence is : "<<iRet<<endl;
    }

    return 0;
}