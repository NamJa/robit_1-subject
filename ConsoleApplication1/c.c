///*로빛 1번과제*/
//#include <stdio.h>
//
//int square(int putnum);
//
//int main()
//{
//	int putnum;
//	int num = 0;
//
//	printf("put number : "); scanf("%d", &putnum);
//	square(putnum);
//
//	return 0;
//}
//
//int square(int putnum)
//{
//
//	int i, j, k;
//	for (i = 0; i < 1; i++)
//	{
//		switch (putnum)
//		{
//		case 1:
//			printf("*");
//			break;
//
//		case 2:
//			printf("**\n");
//
//			break;
//
//		default:
//			for (j = 0; j < putnum; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//			for (j = 0; j < putnum - 2; j++)
//			{
//				printf("*");
//				for (k = 0; k < putnum - 2; k++)
//				{
//					printf(" ");
//				}
//				printf("*\n");
//			}
//			for (j = 0; j < putnum; j++)
//			{
//				printf("*");
//			}
//			puts("");
//			break;
//		}
//	}
//
//}
/*로빛 2번*/
//#include <stdio.h>
//
//int ssangtriangle(putnum);
//
//int main()
//{
//	int i;
//	int putnum;
//
//	printf("숫자 입력: "); scanf("%d", &putnum);
//	ssangtriangle(putnum);
//	printf("\n");
//}
//
//int ssangtriangle(putnum)
//{
//	int i, j;
//	for (i = 0; i < putnum; i++)
//	{
//		for (j = 0; j < putnum - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i + 1; j++)
//		{
//			printf("*");
//		}
//		puts("");
//	}
//	for (i = 0; i < putnum; i++)
//	{
//		for (j = 0; j < putnum + 1; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = i; j < putnum; j++)
//		{
//			printf("*");
//		}
//		puts("");
//	}
//}
/*로빛 3번*/
#include <stdio.h>

int pyramid(putnum);

int main()
{
	int putnum;

	printf("숫자 입력: ");
	scanf("%d", &putnum);
	pyramid(putnum);
}

int pyramid(putnum)
{
	int i, j, k;
	int a = 0;

	for (i = 0; i < putnum; i++)
	{
		for (j = 0; j < putnum - i; j++)
		{
			printf(" ");
		}
		printf("*");
		for (k = 0; k < a; k++)
		{
			printf("*");
		}
		a = a + 2;
		puts("");
	}
}
///*4번*/
//#include <stdio.h>
//
//int caculator(double leftnum, char sign, double rightnum);
//double result = 0;
//int main()
//{
//	double leftnum = 0.0, rightnum = 0.0;
//	char sign;
//
//	printf("수식 입력: ");
//	scanf("%lf %c %lf", &leftnum, &sign, &rightnum);
//
//	caculator(leftnum, sign, rightnum);
//}
//
//int caculator(double leftnum, char sign, double rightnum)
//{
//	int i;
//	int num = 0;
//	num = rightnum;
//
//	switch (sign)
//	{
//	case 43:
//		result = leftnum + rightnum;
//		printf("%lf\n", result);
//		break;
//
//	case 45:
//		result = leftnum - rightnum;
//		printf("%lf\n", result);
//		break;
//
//	case 42:
//		result = leftnum * rightnum;
//		printf("%lf\n", result);
//		break;
//
//	case 47:
//		if (rightnum == 0)
//		{
//			printf("error");
//		} 
//		else
//		{
//			result = leftnum / rightnum;
//			printf("%lf\n", result);
//		}
//		break;
//
//	case 94:
//		if (num == 0)
//		{
//			result = 1;
//			printf("%lf\n", result);
//		}
//		else if (num > 0)
//		{
//			result = 1;
//			for (i = 0; i < num; i++)
//			{
//				result = result * leftnum;
//			}
//			printf("%lf\n", result);
//		}
//		else if (num < 0)
//		{
//			result = 1;
//			for (; rightnum < 0; rightnum++)
//			{
//				result = result / leftnum;
//			}
//			printf("%lf\n", result);
//		}
//	}
//
//	return result;
//}
