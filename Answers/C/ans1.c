#include<stdio.h> //header file for standard input and output

void main(){
	int sum=0, i=0;
	while(i<1000){
		if(i%3==0||i%5==0){
			sum=sum+i;
		}
		i++;
	}
	printf("The sum of multiples of 3 or 5 below 1000 is: %d",sum);
}
