#include<iostream>
#include<string>
using namespace std;

//创建对象
class Student {
public:
	void setStudentInformation(int n, string name) {
		m_Num = n;
		m_Name = name;
	}

	int getNum() {
		return m_Num;
	}

	string getName() {
		return m_Name;
	}

private:
	int m_Num;
	string m_Name;
};

int main() {
	//初始化数据
	Student stu[5];
	string nameSeed = "ABCDE";

	for (int i = 0; i < 5; i++) {
		string name = "Student";
		name += nameSeed[i];
		stu[i].setStudentInformation(10000 + i + 1, name);
	}
	Student* p = stu;
	for (int i = 0; i < 5; i++) {
		if (i == 1 || i == 3) {
			p++;
			continue;
		}
		cout << "Student Num:" << p->getNum() << "Student Name:" << p->getName() << endl;
		p++;
	}

	return 0;
}