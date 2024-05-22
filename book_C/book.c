#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int ArrayInit(){
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr3[5] = { 1,2 };
	int ar1Len, ar2Len, ar3Len, i;

	printf("배열 arr1의 크기 : %d \n", sizeof(arr1));
	printf("배열 arr2의 크기 : %d \n", sizeof(arr2));
	printf("배열 arr3의 크기 : %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1Len; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	for (i = 0; i < ar2Len; i++)
		printf("%d ", arr2[i]);
	printf("\n");
	for (i = 0; i < ar3Len; i++)
		printf("%d ", arr3[i]);
	printf("\n");

	return 0;
}

int book_260_1() {

	int arr[5] = { 0 };
	int max, min, sum, i;

	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	max = min = sum = arr[0];
	for (i = 0; i < 5; i++) {

		if (max < arr[i])max = arr[i];
		if (min > arr[i])min = arr[i];
		sum += arr[i];
	}
	printf("최대값 :: %d\n", max);
	printf("최소값 :: %d\n", min);
	printf("총 합 :: %d\n", sum);
	
		return 0;
}

int book_260_2() {
	
	//char str[] = { 'G','o','o','d',' ','t','i','m','e'};
	char str[] = { "Good time"};
	int arrLen = sizeof(str) / sizeof(char);
	for (int i = 0; i < arrLen; i++) {
		printf("%c", str[i]);
	}

	return 0;
}

int book_074_1() {

	int result1, result2;
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	result1 = num1 - num2;
	result2 = num1 * num2;
	printf("뺄셈 :: %d", result1);
	printf("곱셈 :: %d", result2);

	return 0;
}

int book_074_2() {

	int num1, num2, num3;
	printf("3개의 정수를 입력하시오 :: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d x %d + %d = %d", num1, num2, num3, num1 * num2 + num3);
}

int book_074_3() {
	
	int num;
	scanf("%d", &num);

	printf("%d", num * num);
}

int book_074_4() {

	int num1, num2;
	scanf("%d %d", &num1, &num2);

	printf("몫 :: %d\n", num1 / num2);
	printf("나머지 :: %d\n", num1 % num2);
}

int book_074_5() {

	int num1, num2, num3;
	int result;
	scanf("%d %d %d", &num1, &num2, &num3);

	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("(%d - %d) x (%d + %d) x (%d %% %d)=%d", num1, num2, num2, num3, num3, num1,result);
}

int main() {
	//ArrayInit();
	//book_260_1();
	//book_260_2();
	//book_074_1();
	//book_074_2();
	//book_074_3();
	//book_074_4();
	//book_074_5();
	//업로드 연습 중
}