#include <stdio.h>
#include <stdlib.h>
void reverse(char str[]);
int main(int argc, char *argv[])
{

  char str[50];
  
  printf("�п�J�@�Ӧr��: "); 
  gets(str);
  reverse(str);
  system("PAUSE");	 
  return 0;
}
void reverse(char str[]){
	int a=0,b=0;
	while(str[a]!='\0'){
		a++;
	}
	printf("�ഫ�᪺�r��: ");
	for(b=a-1;b>=0;b--){
		printf("%c",str[b]);
	}
	printf("\n");
}
