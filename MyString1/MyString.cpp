#include "MyString.h"
MyString::MyString(const char* str) {
	this->size = strlen(str);
	this->str = new char[size+1];
	for (int i = 0; i < size; i++)
	{
		this->str[i] = str[i];
	}
	this->str[size] = '\0';//тернінюючий нуль
	//std::cout << this->str;
}
MyString::MyString(void) {};

MyString::~MyString() {
	delete[]str;
}


MyString::MyString(const MyString& other) {
	this->size = other.size;
	this->str = new char[this->size+1];
	for (int i = 0; i < this->size; i++)
	{
		this->str[i] = other.str[i];
	}
	this->str[this->size] = '\0';
	//std::cout << this->str;
}


MyString MyString::operator +(const MyString& other) {
	MyString Temp;
	Temp.size = this->size + other.size;
	Temp.str = new char[this->size + other.size + 1];
	int i = 0;
	for (; i < this->size; i++)
	{
		Temp.str[i] = this->str[i];
	}
	for (int j = 0; j < other.size;i++, j++)
	{
		Temp.str[i] = other.str[j];
	}
	Temp.str[Temp.size] = '\0';
	std::cout << Temp.str;
	//foo();
	return Temp;
}

char MyString::operator [](int index) {
	return this->str[index];
}

int MyString::count(char ch) {
	int count=0;
	for (int i = 0; i < this->size; i++)
	{
		if (this->str[i] == ch) {
			count++;
		}
	}
	return count;
}

int MyString::countStr(const char* ch) {
	int newSize = strlen(ch);
	int s = 0;
	int res = 0;//повернемо
	for (int i = 0; i < newSize; i++)
	{
		for (int j = 0; j < this->size; j++)
		{
			if (ch[i] == this->str[j]) {
				i++;
				s++;
				if (s == newSize) {
					res++; 
					s = 0; 
					i = 0;
				}
			}		
		}
		//i += res;
	}
	return res;
}