Лабораторная работа №19
Курс : Объектно - ориентированное программирование на C++
Встреча №19
Тема : МножесТвеННое НаследоваНие, вирТуальНый базовый класс, НаследоваНие и шаблоНы
Задания для самостоятельной работы :

Задание №1
Используя понятие множественного наследования, разработайте класс «Окружность, вписанная в квадрат».

#include <iostream>
using namespace std;

class Circle
{
protected:
	int R;
public:
	Circle() : R(0) {
		//cout << "Ya tyt byv (Circle)\n";
	}
	Circle(int R1) : R(R1) {
		//cout << "Ya tyt byv (Circle)\n";
	}
	void Print() {
		cout << "R = " << R << endl;
	}
	double AreaCircle() {
		return 4 * atan(1) * R * R;
	}
	double Length() {
		return 8 * atan(1) * R;
	}
	~Circle() { //cout << "Destruct circle\n"; 
	}
};

class Square {
protected:
	int a;
public:
	Square() :a(0) {
		//cout << "Ya tyt byv (Rectangle)\n";
	}
	Square(int h) {
		//cout << "Ya tyt byv (Rectangle)\n";
		a = h;
	}
	double AreaSquare() {
		return a * a;
	}
	void Print() {
		cout << "a = " << a << endl;
	}
	~Square() {
		//cout << "Destruct rectungle\n";
	}
};
class Figure :public Circle, public Square {

public:
	Figure(int r) :Circle(r), Square(2 * r) {	}
	double AreaFigure() { return AreaSquare() - AreaCircle(); }
	~Figure() {
		//cout << "Destruct figure\n";
	}

};

int main() {
	//cout << "Circle A(1)" << endl;
	//Circle A(2);
	//A.Print();
	//cout << "A.AreaCircle() : " << A.AreaCircle() << endl;
	//cout << "Square B(1, 2)" << endl;
	//Square B(1);
	//B.Print();
	//cout << "B.AreaSquare() : " << B.AreaSquare() << endl;

	Figure C(1);
	cout << C.AreaFigure();

}
