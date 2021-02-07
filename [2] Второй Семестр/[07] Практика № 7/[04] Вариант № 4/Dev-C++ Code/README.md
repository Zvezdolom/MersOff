```
#include <iostream>
#include <windows.h>

using namespace std;

class temp {
public:
	temp() {
		cout << "{class temp} - [constructor]\n";
	}
	void print() {
		cout << "void print() \n";
	}
};

class task4{
public:
	task4() {
		cout << "[constructor] class task4\n";
		test();
		set();
		set2();
		get2();
		end();
	}

	temp obj[3];
	void test () {
		temp *T = new temp;
		T->print();
		delete T;
	}
	void end () {
		cout << "end" << endl;
	}
	void set () {
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
protected:
	void get () {
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
	char val1[1][1];
	char val2[1][1];
	char val3[1][1];
private:
	void set2 () {
		cout << "enter val4: ";
        cin >> val4;
        cout << "enter val5: ";
        cin >> val5;
        cout << "enter val6: ";
        cin >> val6;
	}
	void get2 () {
		cout << "static int val4 = " << val4 << endl;
        cout << "static int val5 = " << val5 << endl;
        cout << "static int val6 = " << val6 << endl;
	}
	static int val4;
	static int val5;
	static int val6;
};
int task4::val4 = 1;
int task4::val5 = 1;
int task4::val6 = 1;

int main () {
	task4 object;
	
	temp x1, x2, x3;
	
	object.obj[0] = x1;
	object.obj[1] = x2;
	object.obj[2] = x3;
	
	for (int i = 0; i < 3; i++) {
		object.obj[i].print();
	}
}

```
