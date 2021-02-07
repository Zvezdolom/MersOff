```c++
#include <iostream>
#include <windows.h>

using namespace std;

class task2{
public:
	task2() {
		cout << "{class task2} - [constructor]\n";
		set();
		get();
		test_print();
		set2();
		get2();
		d();
	}
	int test_print () {
		cout << "test_print\n";
	}
	
	float *pvar1 = &task2::var1;
	float *pvar2 = &task2::var2;
	float *pvar3 = &task2::var3;
	float task2:: *pvar4 = &task2::var4;
	float task2:: *pvar5 = &task2::var5;
	float task2:: *pvar6 = &task2::var6;
protected:
	void get () {
		cout << "static float var1 = " << var1 << endl;
        cout << "static float var2 = " << var2 << endl;
        cout << "static float var3 = " << var3 << endl;
	}
	void set () {
		cout << "enter var1: ";
        cin >> var1;
        cout << "enter var2: ";
        cin >> var2;
        cout << "enter var3: ";
        cin >> var3;
	}
	static float var1;
	static float var2;
	static float var3;
private:
	void get2 () {
		cout << "float var4 = " << var4 << endl;
        cout << "float var5 = " << var5 << endl;
        cout << "float var6 = " << var6 << endl;
	}
	void set2 () {
		cout << "enter var4: ";
        cin >> var4;
        cout << "enter var5: ";
        cin >> var5;
        cout << "enter var6: ";
        cin >> var6;
	}
	void d () {
		cout << "*pvar1 = " << *pvar1 << endl;
		cout << "*pvar2 = " << *pvar2 << endl;
		cout << "*pvar3 = " << *pvar3 << endl;
		cout << "pvar4 = " << pvar4 << endl;
		cout << "pvar5 = " << pvar5 << endl;
		cout << "pvar6 = " << pvar6 << endl;
	}
	float var4;
	float var5;
	float var6;
};
float task2::var1 = 1;
float task2::var2 = 1;
float task2::var3 = 1;

int main () {
	task2 object;
	
	int (task2::*pointer_test_print) (void) = &task2::test_print;
	int val_2 = (&object->*pointer_test_print)();
}

```
