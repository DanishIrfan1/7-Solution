#include<iostream>
using namespace std;
void triveseArray(int arr[]){
    for(int i=0;i<6;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
void insertarrat(int arr[],int index,int element,int size){
 for(int i=size-1;i>=index;i--){
     arr[i+1]=arr[i];
 }
 arr[index]=element;
}
int main(){
    int arr[50]={1,2,3,4,5};
     triveseArray(arr);
    insertarrat(arr,1,78,5);
     triveseArray(arr);
     

}