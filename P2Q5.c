#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter a number : ");
	scanf("%d",&a);
	
	
	if(a>= 0 && a<= 50){
		b=a*0.5;
	}
	
	else if(a> 50 && a<= 150){
		b=a-50*0.75;
	}
	
	else if(a> 150 && a<= 250){
		b=a-150*1.2;
	}
	
	else{
		b=a-250*1.5;
	}
	
	c=b+b*0.2;
	printf("Total bill=  %d",c);
	
}
