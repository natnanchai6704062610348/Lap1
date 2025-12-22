#include<stdio.h>

int main(){
	
	int h,s;
	float tax;
	scanf("%d %d",&h,&s);
	float m = s*h;
	if(m>10000){
		if(m<20000){
			tax = (m-10000)*0.08;
			printf("%.1f",m-tax);
		}else{
			tax = (10000*0.08)+(m-20000)*0.10;
			printf("%.1f",m-tax); 
		}
	}else{
		printf("%.1f",m);
	}
	
	
	
	
	
}
