#include<stdio.h>



int main(){
	int score;
	scanf("%d",&score);
	
	if(score>39){
		printf("pass\n");

	}else{
		if(score>=30){
			printf("You Can Test Again\n");
		}else{
			printf("FALSE %d to pass\n",30-score);
		}
	}
	
	
	
}
