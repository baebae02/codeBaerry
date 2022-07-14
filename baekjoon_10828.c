//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int number[10001];
//int count = 0;
//
//void push(int num) {
//	number[count] = num;
//	count += 1;
//}
//
//void pop() {
//	if (count != 0) {
//		count--;
//		printf("%d \n", number[count]);
//		number[count] = 0;
//	}
//	else
//		printf("%d \n", -1);
//
//}
//
//void top() {
//	if (count != 0)
//		printf("%d \n", number[count - 1]);
//	else
//		printf("%d \n", -1);
//}
//
//void size() {
//	printf("%d \n", count);
//}
//
//void empty() {
//	if (count != 0)
//		printf("0 \n");
//	else
//		printf("1 \n");
//}
//
//int main() {
//
//	int n;
//	char stack[10]; //명령어(문자열)을 받을 배열 선언
//
//	scanf("%d", &n);
//
//	char number[100];
//	
//	for (int i = 0; i < n; i++) {
//		scanf("%s", stack);
//		if (strcmp(stack, "push") == 0) {
//			int num;
//			scanf("%d", &num);
//			push(num);
//		}
//		else if (strcmp(stack, "pop") == 0)
//			pop();
//		else if (strcmp(stack, "top") == 0)
//			top();
//		else if (strcmp(stack, "size") == 0)
//			size();
//		else if (strcmp(stack, "empty") == 0)
//			empty();
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int stack[10000];
int stack_size = 0;

void push(int x)
{
	stack[stack_size] = x;
	stack_size += 1;
}

int pop()
{
	if (stack_size != 0)
	{
		stack_size -= 1;
		return stack[stack_size];
	}
	else
	{
		return -1;
	}
}

int size()
{
	return stack_size;
}

int empty()
{
	if (stack_size == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}

int top()
{
	if (stack_size != 0)
	{
		return stack[stack_size - 1];
	}	
	else
	{
		return -1;
	}	
}

int main(void)
{
	int n;
	char command[10];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", command);
		if (strcmp(command, "push") == 0)
		{
			int x;
			scanf("%d", &x);
			push(x);
		}
		else if (strcmp(command, "pop") == 0)
			pop();
		else if (strcmp(command, "size") == 0)
			size();
		else if (strcmp(command, "empty") == 0)
			empty();
		else if (strcmp(command, "top") == 0)
			top();
	}
	return 0;
}
