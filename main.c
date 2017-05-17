//Program for function pointer
//Modified
#include<stdio.h>

enum function{ADD=1,SUB=2,MUL=3};

int add(int *i, int *j)
{
	printf("Addition = ");
	return(*i + *j);
}

int sub(int *i, int *j)
{
	printf("Sub = ");
	return(*i - *j);
}

int mul(int *i, int *j)
{
	printf("MUL = ");
	return(*i * *j);
}

int main(int argc, char *argv[])
{
	int index;
	int z;
	int a =10, b = 5, sum;
	int (*funP[4])(int*, int*) = {add,sub,mul};
	while(1)
	{
		printf("\n1:ADD\n2:SUB\n3:MUL\n");
		scanf("%d",&index);
		switch (index)
		{
			case ADD:
			case SUB:
			case MUL:
				sum = funP[index-1](&a,&b);
				printf("%d",sum);	
				break;
			
			default:
				printf("Not valid option");
				break;
		}
	}
	return 0;
}
