//David Chou and John "Not a Weeb" Alde
//9/8/2017
//This program illustrates some uses of pointers in C

#include <stdio.h>

char linString[] = "Linux!";
int  linSize = 6;

char *winString = "Windows!";
int  winSize = 8;

int main ( int argc, char* argv[] ){
	printf("%s\n", linString);
	printf("%s\n", winString);
	
	int i;
	//#4
	for(i = 0; i < linSize; i++){
		printf("%c\n", linString[i]);
	}
	//#8
	for(i = 0; i < winSize; i++){
		printf("%c", *(winString + i));
	} 
	
	//#9
	for(i = 0; i < winSize; i++){
		printf("%s", (winString + i));
	}
	//#10
	linString[0] = 'M';
	*(linString + 3) = 'i';
	printf("\n%s\n", linString);
	//#11
	/*
	winString[0] = 'N';
	*(winString) = 'M';
	printf("%s\n", winString);
	*/ //segfaulted
	
	return 0;
}
