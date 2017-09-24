#pragma once
#include<iostream>
using namespace std;
namespace shyphonic
{
	struct MyStruct3 {
		static void shyfun()
		{
			cout << "shyphonic::MyStruct3::shyfun()"  << endl;
		}
	};
	struct MyStruct4 {
		static void shyfun2();
	};
}