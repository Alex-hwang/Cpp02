#include<iostream>
#include<cstring>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)

class Strings {//�����ַ�����
public:
	Strings(char* s);//���캯��
	~Strings();//��������
	void Print();//����ַ���
	void Set(char* s);//�����ַ���
private:
	int length;//�ַ�������
	char* str;//�ַ���
};

Strings::Strings(char* s) {//���캯��
	length = strlen(s);//�����ַ����ĳ���
	str = new char[length + 1];//Ϊ�ַ������ٶ����ռ�
	strcpy(str, s);//���ַ����������¿��ٵĿռ�
}

Strings::~Strings() {//��������
	delete[]str;//�ͷŶ����ռ�
}

void Strings::Print() {//����ַ���
	cout << "String: " << str << endl;//����ַ�������
	cout << "Length: " << length << endl;//����ַ�������
}

void Strings::Set(char* s) {//�����ַ�������
	delete[]str;//�ȳ�ʼ��ԭ��������
	length = strlen(s);//���㳤��
	str = new char[length + 1];//���ٿռ�
	strcpy(str, s);//����
}

int main() {
	char s1[] = "Hello";//�����ַ�������
	char s2[] = "Tsinghua";//�������ַ�������

	Strings string1(s1);//������������
	Strings string2(s2);

	string1.Print();//���������������
	string2.Print();

	return 0;
	system("pause");
}