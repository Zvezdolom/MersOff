```
#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

class task7 {
private: 
	double *x;
	double *y;
	double *z;
	double *u;
public:
	task7() {
		x = new double; 
		y = new double; 
		z = new double; 
		u = new double; 
	}
	~task7() {
		delete x; 
		delete y; 
		delete z; 
		delete u; 
	}
	void set (double &_x, double &_y, double &_z) { 
		*x = _x;
		*y = _y;
		*z = _z;
	}
	void print () { 
		cout << *x << " | " << *y << " | " << *z << " | " << *u << endl;
	}
	void run () { 
		*u = (5.0*atan(*x))-(0.25*acos(*x))*((*x+3.0*abs(*x-*y)+*x**x)/(abs(*x-*y)**z+*x**x));
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
	task7 obj1; 							
	obj1.set(*x, *y, *z); 					
	obj1.run(); 							
	obj1.print(); 							
	
	cout << "2. Косвенный Вызов" << endl;
	task7 obj2;								
	task7 *pointer2 = &obj2;				
	pointer2->set(*x, *y, *z); 				
	pointer2->run();						
	pointer2->print();						
	
	cout << "3. Прямой Динамический Вызов" << endl;
	task7 *pointer3 = new task7;			
	(*pointer3).set(*x, *y, *z); 			
	(*pointer3).run();						
	(*pointer3).print();					
	
	cout << "4. Косвенный Динамический Вызов" << endl;
	task7 *pointer4 = new task7;			
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
