#include<cmath>
#include<iostream>
#include<math.h>
#include<windows.h>
#include <sstream>
using namespace std;


class Number {
public:
	float full;
	double last;


	Number() {
		full = 0;
		last = 0;
	}

	Number(float f) {
		full = f;
		last = 0;
	}
	Number(float f, double l) {
		full = f;
		last = l;
	}
	Number(const Number& other) {
		full = other.full;
		last = other.last;
	}
	void Read();
	void Read() {
		cout << "Ввести цілу частину: ";
		cin >> full;
		cout << "Ввести дробову частину: ";
		cin >> last;
	}
	void Display();
	void Display()
	{
		cout << "Ціла частина: " << full
			<< " | Дробова частина: " << last << endl;
	}
	string toString();
	string toString() {
		stringstream ss;
		ss << "Full: " << full << ", Last: " << last;
		return ss.str();
	}

};



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c, j;
	int i;
	Number n;
	cout << "Ввести цілу частину " << endl;
	cin >> n.full;
	cout << "Ввести дробову частину " << endl;
	cin >> n.last;


	cout << "Додавання: " << n.full + n.last << endl;
	cout << "Віднімання: " << n.full - n.last << endl;
	cout << "Множення " << n.full * n.last << endl;
	if (n.full == n.last)
		cout << "Рівнні " << endl;
	else
		cout << "Не рівнні " << endl;


	Number n1;
	Number n2(5, 3.14);
	Number n3(n2);

	cout << "Об'єкт n1: ";
	n1.Display();

	cout << "Об'єкт n2: ";
	n2.Display();

	cout << "Об'єкт n3 (копія n2): ";
	n3.Display();


	return 0;
}
