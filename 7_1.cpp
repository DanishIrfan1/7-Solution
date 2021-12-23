#include<iostream>
using namespace std;
int main() {
	int *ptr1,*ptr2;
	int a , b ,temp;
	ptr1 = &a;
	ptr2 = &b;
	a = 4;
	b = 6;
	cout << "Before swapping\na= " << a << "\nb= " << b << endl;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	cout << "After swapping\na= " << a << "\nb= " << b << endl;
	delete ptr1,ptr2;
}
