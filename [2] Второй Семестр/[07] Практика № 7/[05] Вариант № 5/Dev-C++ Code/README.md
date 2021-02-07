```
#include <iostream>
#include <windows.h>

using namespace std;

class task5{
public:
	int *pointers[12] = {
		&d[0].val1, &d[0].val2, &d[0].val3,
		&d[1].val1, &d[1].val2, &d[1].val3,
		&d[2].val1, &d[2].val2, &d[2].val3,
		&val4, &val5, &val6
	};
		
	task5() {
		cout << "{class task5} - [constructor]\n";	
		pr();
		set();
		print();
		set_other();
		get_other();
		end();
	}
	void print () {
		for (int i = 0; i < 9; i++) {
			cout << *this->pointers[i] << "\t";
			if (i % 3 == 2) {
				cout << endl;
			} 
		}
	}
	
protected:
	struct data {
		int val1 = 0;
		int val2 = 0;
		int val3 = 0;
	};
	data d[3];
	void set () {
		cout << "data 0 val1 = ";
		cin >> d[0].val1;
		cout << "data 0 val2 = ";
		cin >> d[0].val2;
		cout << "data 0 val3 = ";
		cin >> d[0].val3;
		cout << "data 1 val1 = ";
		cin >> d[1].val1;
		cout << "data 1 val2 = ";
		cin >> d[1].val2;
		cout << "data 1 val3 = ";
		cin >> d[1].val3;
		cout << "data 2 val1 = ";
		cin >> d[2].val1;
		cout << "data 2 val2 = ";
		cin >> d[2].val2;
		cout << "data 2 val3 = ";
		cin >> d[2].val3;
	}
	
	void end () {
		cout << "End" << endl;
	}
private:
	int val4 = 0;
	int val5 = 0;
	int val6 = 0;
	get_other () {
		cout << "val4 = " << val4 << endl;
		cout << "val5 = " << val5 << endl;
		cout << "val6 = " << val6 << endl;
	}
	void pr () {
		cout << "class task5";
	}
	void set_other () {
		cout << "val4 = ";
		cin >> val4;
		cout << "val5 = ";
		cin >> val5;
		cout << "val6 = ";
		cin >> val6;
	}
};

int main () {
	
	task5 *object = new task5;
	
	delete object;
}

```
