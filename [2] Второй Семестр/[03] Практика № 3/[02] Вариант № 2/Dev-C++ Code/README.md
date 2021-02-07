```
#include <iostream>
#include <windows.h>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	FILE *in;
	char c;
	int count = -1;
	in=fopen("file02.txt","r");
	while (!feof(in)) {
		fread(&c, 1, 1, in);
		count++;
	}
	fclose(in);
	char array[count];
	in=fopen("file02.txt","r");
	for (int i = 0; i < count; i++) {
		fread(&array[i], 1, 1, in);
	}
	fclose(in);
	in=fopen("file02.txt","w");
	for (int i = 0; i < count; i++) {
		fwrite(&array[i], 1, 1, in);
		fwrite(&array[i], 1, 1, in);
	}
	fclose(in);
}

```
