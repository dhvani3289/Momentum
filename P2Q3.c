#include<stdio.h>
main(){
	int a,b,c,d;

		printf("Enter A number : ");
		scanf("%d",&a);
		
		printf("Enter B number : ");
		scanf("%d",&b);	
		
		printf("Enter C number : ");
		scanf("%d",&c);	
		
		printf("Enter D number : ");
		scanf("%d",&d);
		
		if(a<b){
			if(b<c){
				if(c<d){
					printf("D is max");
				}
				else{
					printf("C is max");
	
				}
				
			}
			else{
				if(b<d){
				printf("D is max");
				}
				
				else{
				printf("B is max");
				}
			}
		}
		
		else{
			if(a<c){
				if(c<d){
					printf("D is max");
				}
				else{
					printf("C is max");
	
				}
				
			}
			else{
				if(a<d){
				printf("D is max");
				}
				
				else{
				printf("A is max");
				}
			}
		}		
			
		

}
