```c++
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

class task3{
public:
	task3() {
		cout << "{class task3} - [constructor]\n";
		test();
		set();
		get();
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
protected:
	void set () {
		cout << "enter val1: ";
        cin >> val1;
        cout << "enter val2: ";
        cin >> val2;
        cout << "enter val3: ";
        cin >> val3;
	}
	void get () {
		cout << "fstatic loat val1 = " << val1 << endl;
        cout << "static float val2 = " << val2 << endl;
        cout << "static float val3 = " << val3 << endl;
	}
	void set2 () {
		cout << "enter val4: ";
        cin >> val4;
        cout << "enter val5: ";
        cin >> val5;
        cout << "enter val6: ";
        cin >> val6;
	}
	static float val1;
	static float val2;
	static float val3;
private:
	void get2 () {
		cout << "char val4 = " << val4 << endl;
        cout << "char val5 = " << val5 << endl;
        cout << "char val6 = " << val6 << endl;
	}
	char val4;
	char val5;
	char val6;
};
float task3::val1 = 1;
float task3::val2 = 1;
float task3::val3 = 1;

int main () {
	task3 *object = new task3;
	
	temp x1, x2, x3;
	
	object->obj[0] = x1;
	object->obj[1] = x2;
	object->obj[2] = x3;
	
	for (int i = 0; i < 3; i++) {
		object->obj[i].print();
	}
	
	delete object;
}

```
