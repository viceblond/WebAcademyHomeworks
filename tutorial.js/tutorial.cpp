#include<iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int arr;

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 10;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
    
    system("pause");
}