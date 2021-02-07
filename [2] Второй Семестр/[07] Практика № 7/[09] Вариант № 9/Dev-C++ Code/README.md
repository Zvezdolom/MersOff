```c++
#include <iostream>
#include <windows.h>

using namespace std;

class task9{
public:
	char *pointers[3] = {
		&var4, &var5, &var6
	};
	
	task9() {

		cout << "{class task9} - [constructor]\n";
		print();
		set();
		get();
		print_1();
		print_2();
		end();
	}
	
	void print () {
		for (int i = 0; i < 3; i++) {
			cout << *this->pointers[i] << "\t";
		}
		cout << endl;
	}
	void end () {
		cout << "end"<< endl;
	}
protected:
	
	char task9:: *pvar4 = &task9::var4;
	char task9:: *pvar5 = &task9::var5;
	char task9:: *pvar6 = &task9::var6;
	void get () {
		cout << "var4 = " << var4 << endl;
		cout << "var5 = " << var5 << endl;
		cout << "var6 = " << var6 << endl;
	}
	
	void set () {
		cout << "var4 = ";
		cin >> var4;
		cout << "var5 = ";
		cin >> var5;
		cout << "var6 = ";
		cin >> var6;
	}
	
	void print_1() {
		cout << "&pvar4 = " << &pvar4 << endl;
		cout << "&pvar5 = " << &pvar5 << endl;
		cout << "&pvar6 = " << &pvar6 << endl;
	}
private:
	char var4 = 'a';
	char var5 = 'b';
	char var6 = 'c';
	
	void print_2() {
		cout << "pvar4 = " << pvar4 << endl;
		cout << "pvar5 = " << pvar5 << endl;
		cout << "pvar6 = " << pvar6 << endl;
	} 
};

int main () {
	task9 *object = new task9;
	object->print();
	
	delete object;
}

```
