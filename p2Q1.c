#include<stdio.h>
main(){
	char a;
	printf("Enter a character : ");
	scanf("%c",&a);
	
	
	if(a>='a' && a<='z'){
		printf("It is an alphabet");
	}
	
	else if(a>='0' && a<='9'){
		printf("It is a digit");
	}
	else{
		printf("It is a special character");
	}
}
