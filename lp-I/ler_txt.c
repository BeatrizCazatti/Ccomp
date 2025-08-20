#include <stdio.h>

int main (){
	FILE * pfile;
	pfile = fopen('palavra.txt', 'w');
	char palavra[20];
	
	scanf("%s", &palavra);
	//fflush(pfile);
		

	return 0;
}

