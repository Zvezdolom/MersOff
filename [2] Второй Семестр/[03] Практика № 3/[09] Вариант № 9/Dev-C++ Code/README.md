```c++
#include <iostream>
#include <windows.h>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	FILE *in;
	FILE *out;
	in=fopen("file09a.txt","r");
	out=fopen("file09b.txt","w+");
	char c;
	char letters[5];
	for (int i = 0; i < 5; i++) {
		letters[i] = '\0';
	}
	cin.getline(letters, 6);
	cin.clear();
	_flushall();
	fread(&c, 1, 1, in);
	while (!feof(in)) {
		if (c != letters[0] && c != letters[1] && c != letters[2] && c != letters[3] && c != letters[4]) {
			fwrite(&c, 1, 1, out);
		}
		fread(&c, 1, 1, in);
	}
	fclose(in);
	fclose(out);
}

```
