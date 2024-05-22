#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int PointerOperation(){
	int num1 = 100, num2 = 100;
	int* pnum = &num1;
	(*pnum)+=30;
	
	pnum = &num2;
	(*pnum) -= 30;
	
	printf("num1 : %d, num2 : %d\n", num1, num2);

	return 0;
}

int book284_1() {

	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n",num);

		return 0;
}

int book284_2() {
	
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("ptr1 :: %d\n", *ptr1);
	printf("ptr2 :: %d\n", *ptr2);

	return 0;

}

int 

int main() {

	//PointerOperation();
	//book284_1();
	book284_2();
}