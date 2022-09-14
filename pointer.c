#include<stdio.h>

int swap(int a, int b)
{
	int c;
	c = a;
	a = b;
	b = c;
	printf("\nIn Function Block");
	printf("\na = %d and b = %d",a,b);

	return 0;
}

int main()
{
	// Main Block
	int num1 = 10,num2 = 20;
	printf("\nNumber before swaping a = %d and b = %i ",num1,num2);
	swap(num1,num2);
	printf("\nIn Main Block");
	printf("\nNumber after swapping a = %i and b = %i ",num1,num2);
	return 0;

}
