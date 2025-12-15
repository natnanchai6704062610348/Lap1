#include<stdio.h>
int main(){
	int hour,minute,second,n;
	scanf("%d%d%d",&hour,&minute,&second);
	printf("Next minute:");
	scanf("%d",&n);
	if (n != 0){
		minute += n;
		if (minute <= 120){
			hour += minute / 60;
			minute %= 60;
			hour %= 24;
		}
	}
	printf("Hour: %d\n",hour);
	printf("Minute: %d\n",minute);
	printf("Second: %d\n",second);
return 0;
}
