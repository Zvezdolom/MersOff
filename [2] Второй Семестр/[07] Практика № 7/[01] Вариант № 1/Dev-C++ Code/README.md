```c++
#include <iostream>
#include <windows.h>

using namespace std;

class task1{
public:
	task1 () {
		cout << "{class task1} - [constructor]\n";
	}
	int test_print () {
		cout << "test_print\n";
	}
	int get () {
		cout << "var1 = " << var1 << endl;
		cout << "var2 = " << var2 << endl;
		cout << "var3 = " << var3 << endl;
	}
	int set () {
		cout << "enter var1: ";
		cin >> var1;
		cout << "enter var2: ";
		cin >> var2;
		cout << "enter var3: ";
		cin >> var3;
	}
	v1 () {
		set_other();
	}
	v2 () {
		print_other();
	}
	v3 () {
		end();
	}
	static float var1;
	static float var2;
	static float var3;
protected:	
	int set_other () {
		cout << "enter var4: ";
		cin >> var4;
		cout << "enter var5: ";
		cin >> var5;
		cout << "enter var6: ";
		cin >> var6;
	}
	float *pvar1 = &task1::var1;
	float *pvar2 = &task1::var2;
	float *pvar3 = &task1::var3;
	
	int task1:: *pvar4 = &task1::var4;
	int task1:: *pvar5 = &task1::var5;
	int task1:: *pvar6 = &task1::var6;
private:
	int print_other() {
		cout << "var4 = " << var4 << endl;
		cout << "var5 = " << var5 << endl;
		cout << "var6 = " << var6 << endl;
	}
	int end () {
		cout << "end" << endl;
	}
	int var4;
	int var5;
	int var6;
};
float task1::var1 = 1;
float task1::var2 = 1;
float task1::var3 = 1;

int main () {
	task1 *object = new task1;
	
	int (task1::*_n1) (void) = &task1::test_print;
	int n1 = (object->*_n1)();
	
	int (task1::*_n2) (void) = &task1::set;
	int n2 = (object->*_n2)();
	
	int (task1::*_n3) (void) = &task1::get;
	int n3 = (object->*_n3)();
	
	int (task1::*_n4) (void) = &task1::v1;
	int n4 = (object->*_n4)();
	
	int (task1::*_n5) (void) = &task1::v2;
	int n5 = (object->*_n5)();
	
	int (task1::*_n6) (void) = &task1::v3;
	int n6 = (object->*_n6)();
	
	delete object;
}

```
