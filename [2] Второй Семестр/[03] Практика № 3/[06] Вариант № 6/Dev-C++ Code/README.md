```c++
#include <iostream>
#include <windows.h>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	FILE *in;
	FILE *out;
	char c;
	in=fopen("file06a.txt","r");
	out=fopen("file06b.txt","w+");
	fread(&c, 1, 1, in);
	while (!feof(in)) {
		if (c != '\n') {
			fwrite(&c, 1, 1, out);
		}
		fread(&c, 1, 1, in);
	}
	fclose(in);
	fclose(out);
}

```
