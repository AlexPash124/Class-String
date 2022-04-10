#pragma once
#include <iostream>
class MyString
{
private:
	int size;
	char* str;
public:
	MyString(void);
	MyString(const char *);
	~MyString();
	MyString(const MyString&);

	MyString operator +(const MyString&);
	char operator [](int);
	//MyString operator =(const MyString&);

	int count(char);
	int countStr(const char*);
	MyString& replace(char a, char b);
	MyString& remove(char a);
	MyString& insert(char, int);
};

