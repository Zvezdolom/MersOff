#include <iostream>
#include <windows.h>

using namespace std;

class task6{
public:
	task6() {
		cout << "{class task6} - [constructor]\n";
	}
	void(task6::*f[6])(void) =
	{   
 		set,
		get,
		print_text, 
		set_static_float_value, 
		print, 
		end
	};
	void get(void) {
        cout << "char c1 = " << c1 << endl;
        cout << "char c2 = " << c2 << endl;
        cout << "char c3 = " << c3 << endl;
    }
        
    void set(void) {
        cout << "enter c1 (char): ";
        cin >> c1;
        cout << "enter c2 (char): ";
        cin >> c2;
        cout << "enter c3 (char): ";
        cin >> c3;
    }
protected:
	char c1 = '\0';
	char c2 = '\0';
	char c3 = '\0';
	
	void print_text(void) {
		cout << "task6() \n";
    }
        
    void set_static_float_value(void) {
    	float x4, x5, x6;
    	cout << "enter c4 (float): ";
        cin >> x4;
        cout << "enter c5 (float): ";
        cin >> x5;
        cout << "enter c6 (float): ";
        cin >> x6;
        
        task6::c4 = x4;
        task6::c5 = x5;
        task6::c6 = x6;
    }    
    
    void end(void) {
        cout << "End\n";
    }  
    
private:
	static float c4;
	static float c5;
	static float c6;
	
	void print(void) {
        cout << "c4 = " << c4 << endl;
        cout << "c5 = " << c5 << endl;
        cout << "c6 = " << c6 << endl;
    }
};
float task6::c4 = 0;
float task6::c5 = 0;
float task6::c6 = 0;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	task6 object;
	
    for(int i = 0; i < 6; i++) {
        (object.*object.f[i])();
    }
    
    for(int i = 0; i < 6; i++) {
        cout << "Address: " << &object.f[i] << endl;
    }
    
	return 0;
}
