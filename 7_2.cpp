#include <iostream>
using namespace std;
int main()
{
    int *ptr, size, swaper, largeVal;
    cout << "Enter array size:  ";
    cin >> size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        *(ptr + i) = rand() % 100;
    }
    cout << "Before changing" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << ",\t";
    }
    swaper = *ptr;
    for (int i = 0; i < size; i++)
    {
        if (swaper < *(ptr + i))
        {
            largeVal = *(ptr + i);
        }
    }
    *ptr = largeVal;
    *(ptr + (size-1)) = swaper;
    cout << "\nAfter changing" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) <<",\t";
    }
     delete [] ptr;
    return 0;
}
