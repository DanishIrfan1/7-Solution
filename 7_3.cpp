#include <iostream>
using namespace std;
void RemoveVowels(char *ptr, int size)
{
    int i = 0;
    while (i < size)
    {
        if (*(ptr + i) == 'a' || *(ptr + i) == 'e' || *(ptr + i) == 'i' || *(ptr + i) == 'o' || *(ptr + i) == 'u')
        {
            *(ptr + i) = *(ptr + (i + 1));
        }
        else
        {
            cout << *(ptr + i) << ",\t";
        }
        i++;
    }
}
int main()
{
    char *ptr;
    int size;
    cout << "Enter array size:  ";
    cin >> size;
    ptr = new char[size];
    for (int i = 0; i < size; i++)
    {
        *(ptr + i) = 'a' + rand() % 26;
    }
    cout << "Before changing" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << ",\t";
    }

    cout << "\nAfter changing" << endl;
    RemoveVowels(ptr, size);
    delete [] ptr;
    return 0;
}
