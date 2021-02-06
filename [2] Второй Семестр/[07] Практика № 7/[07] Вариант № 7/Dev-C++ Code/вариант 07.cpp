#include <iostream>
#include <windows.h>

using namespace std;

class task7{
public:
	float *pointers[3] = {
		&var1, &var2, &var3
	};
	
	task7() {
		cout << "{class task7} - [constructor]\n";
		print();
		get();
		set();
		end();
	}
	
	void print () {
		for (int i = 0; i < 3; i++) {
			cout << *this->pointers[i] << "\t"; 
		}
		cout << endl;
	}
	
	void print_1 () {
		cout << "&pvar1 = " << &pvar1 << endl;
		cout << "&pvar2 = " << &pvar2 << endl;
		cout << "&pvar3 = " << &pvar3 << endl;
	}
	
	void print_2 () {
		cout << "pvar1 = " << pvar1 << endl;
		cout << "pvar2 = " << pvar2 << endl;
		cout << "pvar3 = " << pvar3 << endl;
	}
protected:
	void end () {
		cout << "end" << endl;
	}
	float *pvar1 = &task7::var1;
	float *pvar2 = &task7::var2;
	float *pvar3 = &task7::var3;
private:
	void get () {
		cout << "var1 = " << var1 << endl;
		cout << "var2 = " << var2 << endl;
		cout << "var3 = " << var3 << endl;
	}
	
	void set () {
		cout << "var1 = ";
		cin >> var1;
		cout << "var2 = ";
		cin >> var2;
		cout << "var3 = ";
		cin >> var3;
	}
	static float var1;
	static float var2;
	static float var3;
};
float task7::var1 = 1;
float task7::var2 = 1;
float task7::var3 = 1;

int main () {
	task7 *object = new task7;
	object->print();
	
	delete object;
}
