```c++
#include <iostream>
#include <windows.h>

using namespace std;

class task10{
public:
	char *pointers[12] = {
		&val1, &val2, &val3,
		&d[0].val4, &d[0].val5, &d[0].val6,
		&d[1].val4, &d[1].val5, &d[1].val6,
		&d[2].val4, &d[2].val6, &d[2].val6
	};
	
	task10() {
		cout << "{class task10} - [constructor]\n";
		print();
		print_2();
		set();
		print();
		set_2();
		print_2();
		end();
	}
	
	void print () {
		for (int i = 0; i < 3; i++) {
			cout << *pointers[i] << "\t";
		}
	}
	void print_2 () {
		for (int i = 3; i < 12; i++) {
			cout << *pointers[i] << "\t";
			if (i % 3 == 2) { 
				cout << endl;
			} 
		}
	}
protected:
	char val1 = '\0';
	char val2 = '\0';
	char val3 = '\0';
	void set () {
		cout << "data 0 val4 = ";
		cin >> d[0].val4;
		cout << "data 0 val5 = ";
		cin >> d[0].val5;
		cout << "data 0 val6 = ";
		cin >> d[0].val6;
		cout << "data 1 val4 = ";
		cin >> d[1].val4;
		cout << "data 1 val5 = ";
		cin >> d[1].val5;
		cout << "data 1 val6 = ";
		cin >> d[1].val6;
		cout << "data 2 val4 = ";
		cin >> d[2].val4;
		cout << "data 2 val5 = ";
		cin >> d[2].val5;
		cout << "data 2 val6 = ";
		cin >> d[2].val6;
	}
private:
	struct data {
		char val4 = '\0';
		char val5 = '\0';
		char val6 = '\0';
	};
	data d[3];
	void set_2 () {
		cout << "val1 = ";
		cin >> val1;
		cout << "val2 = ";
		cin >> val2;
		cout << "val3 = ";
		cin >> val3;
	}
	
	void end () {
		cout << "End" << endl;
	}
};

int main () {
	task10 object;
	object.print();
	
	return 0;
}

```
