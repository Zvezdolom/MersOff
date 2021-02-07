```c++
#include <iostream>
#include <windows.h>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	FILE *in;
	in=fopen("file04.txt","r");
	char c;
	int words = 1;
	fread(&c, 1, 1, in);
	while (!feof(in)) {
		if (c == ' ' || c == '\n') {
			words++;
		}
		fread(&c, 1, 1, in);
	}
	cout << "Всего слов " << words;
	fclose(in);
}

```
