#include <iostream>
#include <windows.h>

using namespace std;

class A {
public:
	A() {
		cout << "{class A} - [constructor]\n";
	}
	test() {
		cout << "{class A} - [test()]\n";
	}
};

class B {
public:
	B() {
		cout << "{class B} - [constructor]\n";
	}
	test() {
		cout << "{class B} - [test()]\n";
	}
};

class task8{
public:
	task8() {
		cout << "{class task8} - [constructor]\n";
		print_other_1();
		print_other_2();
		set();
		print();
	}
	void print() {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "val1[" << i << "][" << j << "] = " << val1[i][j] << endl;
			}
		}
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "val2[" << i << "][" << j << "] = " << val2[i][j] << endl;
			}
		}
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "val3[" << i << "][" << j << "] = " << val3[i][j] << endl;
			}
		}
	}
	char *obj[3] = { *val1, *val2, *val3 };
	
protected:
	void print_other_1() {
		obj2.test();
	}
	void print_other_2() {
		obj2.test();
	}
	char val1[2][2] = { {'1', '2'}, {'3', '4'} };
	char val2[2][2] = { {'5', '6'}, {'7', '8'} };
	char val3[2][2] = { {'9', '0'}, {'a', 'b'} };
private:
	void print_1() {
		A x1;
		cout << x1.test();
	}
	void print_2() {
		B x2;
		cout << x2.test();
	}
	void set() {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "val1[" << i << "][" << j << "] = ";
				cin >> val1[i][j];
			}
		}
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "val2[" << i << "][" << j << "] = ";
				cin >> val2[i][j];
			}
		}
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "val3[" << i << "][" << j << "] = ";
				cin >> val3[i][j];
			}
		}
	}
	A obj1;
	B obj2;
	
};

int main () {
	task8 object;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << object.obj[i][j];
		}
		cout << endl;
	}
	
	object.print();
}
