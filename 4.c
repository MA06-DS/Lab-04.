#include <stdio.h>

int main(){
	float income;
	float tax,ti;
		
		printf("Enter Income:");
		scanf("%f",&income);
if(income<=250000){
	tax=0;
	printf("Tax deducted is:%.2f \n",tax);
}
else if(income>250000 && income<=500000){
	tax=income*0.05;
	printf("Tax deducted is:%.2f\n",tax);
}
else if(income>500000 && income<=1000000){
	tax=income*0.2;
	printf("Tax deducted is:%.2f\n",tax);
}
else if(income>1000000){
	tax=income*0.3;
	printf("Tax deducted is:%.2f\n",tax);
}
else{
	printf("Invalid Entry.");
}
ti=income-tax;
printf("The Total income after tax deduction is:%.2f",ti);
}