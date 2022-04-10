#include <iostream>
#include <string>
#include "MyString.h"
using namespace std;
int main()
{
	MyString A("Step IT");
	MyString B("abb abb abb ab vvv");

	//MyString C = A + B;
	//cout<<B[1];
	
	//cout<<B.count('T');

	cout<<B.countStr("ab");
}

