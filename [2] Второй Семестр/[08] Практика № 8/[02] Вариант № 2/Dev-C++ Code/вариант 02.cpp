#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

class task2 {
private: 
	double *x;
	double *y;
	double *z;
	double *u;
public:
	task2() {
		x = new double;
		y = new double;
		z = new double;
		u = new double;
	}
	~task2() {
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
		*u = ((pow((8.0+pow((fabs(*x-*y)),2.0)+1.0),1.0/3.0))/((*x**x)+(*y**y)+2.0))-((pow(M_E,(fabs(*x-*y)))))*(pow((pow(tan(*z),2.0))+1.0,*x));
	}
};

float protection () {
	float value;
	while(!(cin>>value)) {
		cout<<"�� ������ ������! ���������� ������� ������ �����! \n";
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
	
	cout << "������� �������� x: ";
	*x = protection();
	cout << "������� �������� y: ";
	*y = protection();
	cout << "������� �������� z: ";
	*z = protection();
	
	cout << "1. ������ �����" << endl;
	task2 obj1; 							
	obj1.set(*x, *y, *z); 					
	obj1.run(); 							
	obj1.print(); 							
	
	cout << "2. ��������� �����" << endl;
	task2 obj2;								
	task2 *pointer2 = &obj2;				
	pointer2->set(*x, *y, *z); 				
	pointer2->run();						
	pointer2->print();						
	
	cout << "3. ������ ������������ �����" << endl;
	task2 *pointer3 = new task2;			
	(*pointer3).set(*x, *y, *z); 			
	(*pointer3).run();						
	(*pointer3).print();					
	
	cout << "4. ��������� ������������ �����" << endl;
	task2 *pointer4 = new task2;			
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
