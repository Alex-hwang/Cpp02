#include<iostream>
#include<string>
using namespace std;

//创建位置类
class Location {
private:
	int L_x;//横坐标
	int L_y;//纵坐标
public:
	void setX(int x) {//设置横坐标
		L_x = x;
	}
	void setY(int y) {//设置纵坐标
		L_y = y;
	}
	int getX() {//获取横坐标
		return L_x;
	}
	int getY() {//获取纵坐标
		return L_y;
	}
};

//创建棋盘类
class chessBoard {
private:
	Location L;//位置类
	int boardSize;//棋盘大小
public:
	void setLocation(int x, int y) {//设置位置
		L.setX(x);
		L.setY(y);
	}

	void getLocation() {//获取位置
		cout << "x = " << L.getX() << "  " << "y=" << L.getY() << endl;
	}

	//初始化
	chessBoard(int size) {
		boardSize = size;
		cout << "棋盘大小为：" << boardSize << "*" << boardSize << endl;
	}

	~chessBoard() {
	}
};

//创建选手类
class chessPlayer {
private:
	string userName;
	int chessType;//棋子类型
	int P_x;
	int P_y;
public:
	void setChessType(int type) {//设置棋子类型
		chessType = type;
	}

	void setChessLocation(int x, int y) {//设置棋子位置
		P_x = x;
		P_y = y;
	}

	chessPlayer(string name) {//设置用户名
		userName = name;
		cout << "用户名为：" << userName << endl;
	}

	~chessPlayer() {
	}

	void getUserName() {//获取用户名
		cout << "userName = " << userName << endl;
	}

	void getChessType() {//获取棋子类型
		cout << "chessType = " << chessType << endl;
	}

	void getChessLocation() {//获取棋子位置
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