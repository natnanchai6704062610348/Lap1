#include<stdio.h>

int main(){
	
	int year;
	float gread;
	char CH;
	
	scanf("%d %f %c",&year,&gread,CH);
	
	if(gread>=3){
		printf("approved\n");		
	}else if(year>=2){
		if(gread>=2.50){
			if(CH='Y'){
				printf("approved\n");		
			}else{
				printf("not approved\n");		
				printf("no help\n");	
			}
		}else{
			printf("not approved\n");		
			printf("gread < 2.50\n");	
		}
	}else{
		if(year==1){
			printf("not approved\n");		
			printf("year < 2\n");	
		}else{
			printf("not approved\n");		
			printf("year < 3\n");	
		}
	}
}
