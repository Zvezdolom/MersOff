```
#include <iostream>
#include <windows.h>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	FILE *in;
	FILE *out;
	char array[256];
	in=fopen("file07a.txt","r");
	out=fopen("file07b.txt","w+");
	for (int i = 0; i < 256; i++) {
		fread(&array[i], 1, 1, in);
	}
	int n;
	for (n = 0; array[n] != '\0'; n++) { }
	int enter;
	int pos = 0;
	while (pos < n) {
		cin >> enter;
		if (n < enter+pos) {
			enter = n - pos;
		}
		int i;
		for (i = pos; i < pos+enter; i++) {
			fwrite(&array[i], 1, 1, out);
		}
		pos = i;
		char c = '\n';
		fwrite(&c, 1, 1, out);
	}
	fclose(in);
	fclose(out);
}

```
