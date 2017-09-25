#include "stdafx.h"
#include<iostream>
#include<string>
#include"headerns.h"
using namespace std;

namespace Parser
{         
	string str2;                                       //declearation of namespace
	void expr(bool);                             // returntype namespace_name::function_name(parameter list)
	string str(string s);                         // { /**********************************/ }
	class A;
}

/****************************************************/

class Parser::A
{
	/* class definition of A and it's function......*/
public:
	void fun()
	{
		cout << "enter string of class A";
		cin >> Parser::str2;
		cout << "your enter string is" <<Parser::str2<<endl;
	}
};
/****************************************************/
string Parser::str(string s)
{
	if (s == "yes")
	{
		cout << "String for namespace is yes" << endl;
		return "sucess";
	}
	else
	{
		cout << "String for namespace is no" << endl;
		return "unsucess";
	}
}
/****************************************************/
void Parser::expr(bool t)
{
	if (t == true)
	{
		cout << "given expression is true\n"<<endl;
	}
	else
	{
		cout << "given expression is false\n"<<endl;
	}
}
/***************************************************/
void fact::shyam()
{
	/*this is function name as shyam() define in fact namespace headerns.h file*/
	cout << "fact::shyam() define function in fact namespace"<<endl;
}
void fact::MyClass::shyam_fun()
{
	/*definition of function shyam_fun() declared in fact namespace  in headerns.h*/
	cout << "fact::MyClass::shyam_fun() "<< endl;
}
void fact::MyClass::shyam_fun1()
{
	/*definition of function shyam_fun1() declared in fact namespace  in headerns.h*/
	cout<<"fact::MyClass::shyam_fun1() "<< endl;
}
int main()
{
	int n;
	string str1;
	system("cls");           //#ifdef  _WIN32
	cout << "enter your number\n";
	cin >> n;
	cout << "number is =" << n <<endl;
	Parser::expr(true);
	/*********************************************/
	cout << "enter a string for (yes/no) namespace of given string is" << endl;
	cin>>str1;
	cout<<Parser::str(str1)<<"\t Thank you\n"<<endl;
	/*********************************************/

	Parser::A obj;
	obj.fun();                             // namespace class function..........
	/*********************************************/
	fact::shyam();
	fact::MyClass::shyam_fun();
	fact::MyClass::shyam_fun1();

	/*********************************************/

	system("pause");  //#ifdef  _WIN32
    return 0;
}

