#include<stdio.h>



int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	
	int max1 = (a>b) ? a:b;
	int max2 = (max1>c) ? max1:c;
	int max3 = (max2>d) ? max2:d;
	
	int max4;
	max4 = (a == max3 ) ? -99:a; 
	max4 = (b == max3 ) ? max4:((b>max4)?b:max4);
	max4 = (c == max3 ) ? max4:((c>max4)?c:max4);
	max4 = (d == max3 ) ? max4:((d>max4)?d:max4);
	
	printf("%d",max4);
	
	
}
