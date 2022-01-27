#include <iostream>
using namespace std;
void bubbleSort(int array[], int size) {
  for (int step = 0; step < size; ++step) {
    for (int i = 0; i < size - step; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

int FindLarge(int array[], int size){
    int x; 
    do{
        cout<<"\nEnter a non-negative number: ";
        cin>>x;
    }while(x < 0);
    bubbleSort(array,size);
    for(int i = 0; i < size; i++){
        if(x<array[i]){
            return array[i];
        }
    }
    return 0;
}
int main(){
    int size;
    do{
    cout<<"Enter size (between 0 and 15): ";
    cin>>size;
    }while(size > 15 || size < 0);
    int *array;
    array = new int[size];
    cout<<"Items intered automatically"<<endl;
    for(int i = 0; i < size; i++){
         array[i]=rand()%100;
    }
    cout<<"Items in array"<<endl;
    for(int i = 0; i < size; i++){
         cout<<array[i]<<"-->";
    }
    int large_then = FindLarge(array, size);
    if (large_then==0){
        cout<<"Not found any greater number"<<endl;
    }
    else
       cout<<"Next largest number than the input number is: "<<large_then<<endl;
    delete []array;
    return 0;
}