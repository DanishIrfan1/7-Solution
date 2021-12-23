#include <iostream>
using namespace std;
void findLarge(int *ptr,int size){
    int greatestVal;
for (int i = 0; i < size; i++)
    {
        *(ptr + i) = rand() % 100;
    }
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << ",\t";
    }
    cout<<endl;
    greatestVal=*ptr;
    for (int i = 0; i < size; i++)
    {
        if(greatestVal<(*(ptr+i))){
            greatestVal=(*(ptr + i));
        }
    }
    cout<<"Greatest value in array is : "<<greatestVal;

}
int main()
{
    int *ptr, size;
    cout << "Enter array size(size should be B/W (1 to 15):  ";
    cin >> size;
    ptr = new int[size];
    if(size<16){
        findLarge(ptr,size);
    }
    else{
        cout<<"You Enter size Greater than 15!";
    }
     delete [] ptr;
    return 0;
}
