// namesptemplatecpp.cpp : Defines the entry point for the console application.
//

#include"stdafx.h"
#include<iostream>
#include"tempclass.h"
#include"tempfun.h"
#include<string>
using namespace std;
/* local namespace */
namespace temp
{
	template<class T>class String1;
	template<typename T>T shyam_fun(T num,T num1);
	template<typename T>void shyam_fun1(T num, T num1);
}
template<typename T>void temp::shyam_fun1(T n, T n1)
{
	string concatestr=n+n1;
	cout << "template<typename T>void temp::shyam_fun1(T n, T n1) and concate string is = " << concatestr << endl;
}
template<typename T>T temp::shyam_fun(T n,T n1)
{
	if (n > n1)
	{
		cout << "greater number is :" << n << endl;
		return n;
	}
	else
	{
		cout << "greater number is:" << n1 << endl;
		return n1;
	}
}
template<class T>class temp::String1
{
private:
	T a;
	
public:
	String1(T e1)
	{
		a = e1;
		cout << "constructor call of  parameter" << a << endl;
	}
	T add(T e2)
	{
		T sum;
		sum = a + e2;
		return sum;
	}
	static void fun1(int n);
};
void temp::String1<string>::fun1(int n)
{
	cout << "string temp::String1<int>::fun1(int n) and pass parameter is  =" << n << endl;
}
int main()
{
	system("cls");
	using namespace temp;//everything from temp;
	using temp::String1;  //resolve potential clash in favor of temp;

						  /*******************************************************/
	int e1, e2;
	cout << "enter two number for sum:" << endl;
	cin >> e1 >> e2;
	String1<int> buf(e1);
	cout << "sum of two number by template class :" << buf.add(e2) << endl;
	/******************************************************/
	using namespace temp1;
	using temp1::tempclass;
	cout << "enter two number for subatraction:" << endl;
	cin >> e1 >> e2;
	tempclass<int> buf1(e1);
	cout << "substraction of two number by template class :" << buf1.subtract(e2) << endl;

	/********************************************************/
	int el;
	String1<string> buf3("shyam");
	cout << "enter pass parameter to fun1 : " << endl;
	cin >> el;
	buf3.fun1(el);

	/*                   Advantage of template function          */
	double n, n1;  int t, t1;
	cout << "enter to decimal number(double) for checking which number is greater: " << endl;
	cin >> n >> n1;
	temp::shyam_fun(n, n1);                                            // same function for both double and integer value;
	cout << "enter to integer number(int) for checking which number is greater: " << endl;
	cin >> t >> t1;
	temp::shyam_fun(t, t1);

	/********************************************************/

	string s, s1;
	cout << "enter two string for concatenation " << endl;
	cin >> s >> s1;
	temp::shyam_fun1(s, s1);

	/*    stack1 namespace which is gloabally declare in tempfun.h    */
	using namespace stack1;
	int f;
	cout << " Enter Number For Define 'template<typename T>void stack1::temp_fun1()' Function" << endl;
	cin >> f;
	using stack1::myclass;
	myclass<int> ob;
	ob.temp_fun1(f);
	system("pause");
	return 0;
}