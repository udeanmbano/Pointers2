#include <iostream>
#include<string>
using namespace std;
/*
Press Alt+F7 or right click solution explorer and select properties
Congiurations: All Configurations
Click on the Preprocessor Definitions line to invoke its editor
Choose Editor
Copy "_CRT_SECURE_NO_WARNINGS"
into the Preprocessor Definitions white box on top
*/
int main(){

	int x = 20;

	// memory address of x
	cout << "memory address of x : " << &x << endl;

	// pointer ptr
	int *ptr;

	ptr = &x;
	cout << "value of ptr : " << ptr << endl;

	// dereference
	cout << "dereferenced ptr : " << &ptr << endl;


	x = x + 5;
	//x = 20 + 5
	//x = 25

	x = *ptr + 5;
	// x = 25 + 5
	// x = 30

	*ptr = *ptr + 5;
	// *p = 30 + 5
	// *p = 35


	cout << *ptr << endl;

	// A dereferenced operator has an address of operator and ampersand
	cout << &*ptr << endl;
	cout << endl;
	cout<<"========================================"<< endl;

	system("pause");
	cout << endl;
	cout << endl;
	system("pause");
	cout << "========================================" << endl;
	string *str;//str is a pointer of type string
	str = new string[3];//allocates memory for an array of
//three components of type char and
//stores the base address of the array
//in str
	
	str[0]="John"; //stores John in name
	str[1] = "Bill";
	str[2] = "Tom";
	cout << endl;
	cout << "Displaying the names" << endl;
	for (int x = 0; x < 3; x++)
	{
		cout << x + 1  <<":"<< str[x] << endl;
	}
	system("pause");
//using strcpy p.794
	
		char *str2;//str is a pointer of type string
	str2 = new char[6];//allocates memory for an array of
					//six components of type char and
				    //stores the base address of the array
					//in name
	cout << endl;
	cout << "Great C++ using strcpy function Udean========================================" << endl;
    strcpy(str2, "Rooney");//stores Rooney in str2
	cout << endl;
	cout << "Displaying the names" << endl;
	for (int x = 0; x < 6; x++)
	{
		// Loops one character at a time to proveits an array of char
		cout << x + 1 << ":" << str2[x] << endl;
	}
	cout << " The name stored is :" <<str2<< endl;
	cout << endl;
	system("pause");
	return 0;
}