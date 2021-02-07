```
#include <iostream>
#include <windows.h>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	FILE *in;
	char c;
	int count = 0;
	int sum = 0;
	in=fopen("file03.txt","r");
	fread(&c, 1, 1, in);
	while (!feof(in)) {
		if (c >= 48 && c <= 57) {
			sum = sum + (c-48);
			count++;
		}
		fread(&c, 1, 1, in);
	}
	cout << "Сумма = " << sum << " количество цифр = " << count;
	fclose(in);
}

```
