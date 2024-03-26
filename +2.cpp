#include<iostream>
#include<cstring>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)

class Strings {//定义字符串类
public:
	Strings(char* s);//构造函数
	~Strings();//析构函数
	void Print();//输出字符串
	void Set(char* s);//设置字符串
private:
	int length;//字符串长度
	char* str;//字符串
};

Strings::Strings(char* s) {//构造函数
	length = strlen(s);//计算字符串的长度
	str = new char[length + 1];//为字符串开辟堆区空间
	strcpy(str, s);//将字符串拷贝到新开辟的空间
}

Strings::~Strings() {//析构函数
	delete[]str;//释放堆区空间
}

void Strings::Print() {//输出字符串
	cout << "String: " << str << endl;//输出字符串内容
	cout << "Length: " << length << endl;//输出字符串长度
}

void Strings::Set(char* s) {//设置字符串内容
	delete[]str;//先初始化原来的内容
	length = strlen(s);//计算长度
	str = new char[length + 1];//开辟空间
	strcpy(str, s);//拷贝
}

int main() {
	char s1[] = "Hello";//设置字符串内容
	char s2[] = "Tsinghua";//设置新字符串内容

	Strings string1(s1);//创建两个对象
	Strings string2(s2);

	string1.Print();//输出两个对象内容
	string2.Print();

	return 0;
	system("pause");
}