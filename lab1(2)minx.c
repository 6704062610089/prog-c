#include <stdio.h>
int main(){
	int num1;
	int num2;
	printf("enter number1 = ");
	scanf("%d",&num1);
	printf("enter number2 = ");
	scanf("%d",&num2);
	if (num1 > num2) {
	printf("number1 is greater than number2 = ");
	printf("%d",num1-num2);
	}else{
	printf("number2 is greater than number1 = ");
	printf("%d",num2-num1);
	}
}
