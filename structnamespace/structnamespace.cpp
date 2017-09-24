// structnamespace.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.h"
#include<iostream>
using namespace std;

namespace strike
{
	struct MyStruct2;
    struct MyStruct {
		static void fun(int l)
		{
			int k = l;
			cout << "structured function....." << k << endl;
		}
	};
	struct MyStruct1
	{
		static void fun1()
		{
			cout << "strike::MyStruct1::fun1" << endl;
		}
	};
}


struct strike::MyStruct2
{
	int z;
	char p;
	float f;
};

int main()
{
	system("cls");

	/*this first structure define in namespace strike....*/
	int i;
	cout << "enter stucture strike::MyStruct function pass parameter" << endl;
	strike::MyStruct *t;
	cin >> i;
	t->fun(i);

	/*this second structure define in namespace strike*/
	strike::MyStruct1 *ptr;
	ptr->fun1();
	/*this third structure define in namespace strike*/

	struct strike::MyStruct2 ptr1; 
	cout << "enter number z integer /f float/p as character" << endl;
	cin >> ptr1.z>>ptr1.f>>ptr1.p;
	cout << "your entered value for strike::MyStruct2 : " << ptr1.z <<"\t"<<ptr1.f << "\t"<<ptr1.p << endl;

	/*this first structure define in namespace shyphonic declare in Header.h */

	using namespace shyphonic;
	shyphonic::MyStruct3 *ptr3;
	ptr3->shyfun();

	/* this second structure define in namespace shyphonic declare in Header.h */

	shyphonic::MyStruct4 *ptr4;
	ptr4->shyfun2();

    system("pause");
    return 0;
}

