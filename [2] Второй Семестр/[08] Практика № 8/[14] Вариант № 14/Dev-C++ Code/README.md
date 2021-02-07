```c++
#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

class task14 {
private: 
	double *x;
	double *y;
	double *z;
	double *h;
public:
	task14() {
		x = new double; 
		y = new double; 
		z = new double; 
		h = new double; 
	}
	~task14() {
		delete x; 
		delete y; 
		delete z; 
		delete h; 
	}
	void set (double &_x, double &_y, double &_z) { 
		*x = _x;
		*y = _y;
		*z = _z;
	}
	void print () { 
		cout << *x << " | " << *y << " | " << *z << " | " << *h << endl;
	}
	void run () { 
		*h = (((pow(*x,*y+1.0)+pow(M_E,*y-1.0))/(1.0+*x*fabs(*y-tan(*z))))*(1.0+fabs(*y-*x)))+((pow(fabs(*y-*x),2.0))/2.0)-((pow(fabs(*y-*x),3.0))/3.0);
	}	
};

float protection () {
	float value;
	while(!(cin>>value)) {
		cout<<"Не верные данные! Пожалуйста вводите только цифры! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	double *x = new double; 
	double *y = new double; 
	double *z = new double; 
	
	cout << "Введите значение x: ";
	*x = protection();
	cout << "Введите значение y: ";
	*y = protection();
	cout << "Введите значение z: ";
	*z = protection();
	
	cout << "1. Прямой Вызов" << endl;
	task14 obj1; 							
	obj1.set(*x, *y, *z); 					
	obj1.run(); 							
	obj1.print(); 							
	
	cout << "2. Косвенный Вызов" << endl;
	task14 obj2;								
	task14 *pointer2 = &obj2;				
	pointer2->set(*x, *y, *z); 				
	pointer2->run();						
	pointer2->print();						
	
	cout << "3. Прямой Динамический Вызов" << endl;
	task14 *pointer3 = new task14;			
	(*pointer3).set(*x, *y, *z); 			
	(*pointer3).run();						
	(*pointer3).print();					
	
	cout << "4. Косвенный Динамический Вызов" << endl;
	task14 *pointer4 = new task14;			
	pointer4->set(*x, *y, *z); 				
	pointer4->run();						
	pointer4->print();						
	
	delete pointer2;
	delete pointer3;
	delete pointer4;
	delete x;
	delete y;
	delete z;	
}

```
