#pragma once
#include<iostream>
#include"stdafx.h"
using namespace std;
/* define as global namespace */
namespace stack1
{    
	template<class T>class  myclass {
	private:
		T f;
		int num;
	public:
		void temp_fun1(T f)
		{
			int num;
			cout << "template<typename T>void stack1::temp_fun1()  " << f << endl;
			cout << "Enter Another Number to Add to This Template Parameterized Variable " << endl;
			cin >> num;
			cout << "Addition of These Two Number are = " << num+f << endl;
		}
	};
}
/*
*  indivduals template function can not be define....
*  template declarations are only permitted at global, namespace, or class scope 
*  
*  if we want to declare template function ,we have to define this funtion inside the template class .. 
* 
*/
