#include<iostream>
#include<string>
using namespace std;

//����λ����
class Location {
private:
	int L_x;//������
	int L_y;//������
public:
	void setX(int x) {//���ú�����
		L_x = x;
	}
	void setY(int y) {//����������
		L_y = y;
	}
	int getX() {//��ȡ������
		return L_x;
	}
	int getY() {//��ȡ������
		return L_y;
	}
};

//����������
class chessBoard {
private:
	Location L;//λ����
	int boardSize;//���̴�С
public:
	void setLocation(int x, int y) {//����λ��
		L.setX(x);
		L.setY(y);
	}

	void getLocation() {//��ȡλ��
		cout << "x = " << L.getX() << "  " << "y=" << L.getY() << endl;
	}

	//��ʼ��
	chessBoard(int size) {
		boardSize = size;
		cout << "���̴�СΪ��" << boardSize << "*" << boardSize << endl;
	}

	~chessBoard() {
	}
};

//����ѡ����
class chessPlayer {
private:
	string userName;
	int chessType;//��������
	int P_x;
	int P_y;
public:
	void setChessType(int type) {//������������
		chessType = type;
	}

	void setChessLocation(int x, int y) {//��������λ��
		P_x = x;
		P_y = y;
	}

	chessPlayer(string name) {//�����û���
		userName = name;
		cout << "�û���Ϊ��" << userName << endl;
	}

	~chessPlayer() {
	}

	void getUserName() {//��ȡ�û���
		cout << "userName = " << userName << endl;
	}

	void getChessType() {//��ȡ��������
		cout << "chessType = " << chessType << endl;
	}

	void getChessLocation() {//��ȡ����λ��
		cout << "chessLocation:" << "x = " << P_x << "  " << "y=" << P_y << endl;
	}
};

int main() {
	chessBoard cb(19);
	chessPlayer cp("Tom");

	cb.setLocation(1, 1);
	cb.getLocation();
	cp.setChessType(1);
	cp.setChessLocation(3, 2);
	cp.getChessType();
	cp.getChessLocation();
	return 0;
	system("pause");
}