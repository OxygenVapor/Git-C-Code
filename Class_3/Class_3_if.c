#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if(a != 0)
//        if(a % 2 == 0)
//            printf("%d 是偶数\n", a);
//        else
//            printf("%d 是奇数\n", a);
//    else
//        printf("0 既不是奇数也不是偶数\n");
//
//    return 0;
//}

//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age > 0)
//    {
//        if (age >= 18)
//            printf("成年\n");
//        else
//            printf("未成年\n");
//    }
//    else
//        printf("非法输入\n");
//
//    return 0;
//}

//输入一个人的年龄
//如果年龄小于18岁，打印 少年
//如果年龄18岁至45岁，打印 青年
//如果年龄45岁至59岁，打印 中老年
//如果年龄60岁至89岁，打印 老年
//如果年龄大于等于90岁，打印 老寿星
//int main()
//{
//	int age = 0;
//    scanf("%d", &age);
//	if (age <= 0)
//		printf("非法输入\n");
//		else if(age < 18)
//			printf("少年\n");
//		else if(age <= 45)
//			printf("青年\n");
//		else if(age <= 59)
//			printf("中老年\n");
//		else if(age <= 89)
//			printf("老年\n");
//	else
//        printf("老寿星\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >0)
//		if (age >= 18 && age <= 36)
//		printf("青年\n");
//		else
//        printf("非青年\n");
//	else
//        printf("非法输入\n");	
//	return 0;
//}

//int main()
//{
//	int year = 0;
//    scanf("%d", &year);
//	if (year > 0)
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//			printf("闰年\n");
//		else
//			printf("非闰年\n");
//    else
//        printf("非法输入\n");
//	return 0;
//}

//int main()
//{
//	int day = 0;
//    scanf("%d", &day);
//	if(day >= 1 && day <= 7)
//		switch (day)
//        {
//        case 1:
//            printf("周一\n");
//            break;
//        case 2:
//            printf("周二\n");
//            break;
//        case 3:
//            printf("周三\n");
//            break;
//        case 4:
//            printf("周四\n");
//            break;
//        case 5:
//            printf("周五\n");
//            break;
//        case 6:
//            printf("周六\n");
//            break;
//        case 7:
//            printf("周日\n");
//            break;
//        }
//    else
//        printf("非法输入\n");
//	return 0;
//}


//while(条件)
//{
//    循环体
//}

//int main()
//{
//    int i = 1;
//	scanf("%d", &i);
//	while (i >=1 && i <= 10)
//		printf("%d\n", i++);
//        
//	return 0;
//}

//输入一个正的整数，逆序打印这个整数的每一位数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	while (a > 0)
//	{
//		printf("%d", a % 10);
//		a = a / 10;
//	}
//	return 0;
//}


//写一个代码打印1-100之间所有3的倍数的数字
//int main() {
//    int a = 0;
//    for (a = 1; a <= 100; a++)
//    {
//        if (a % 3 == 0)
//            printf("%d\n", a);
//    }
//    return 0;
//}

//写代码将三个整数数按从大到小输出
//例如：
//
//输入：2 3 1
//
//输出：3 2 1

#include <stdio.h>
int main()
{
    int a = 2;
    int b = 3;
    int c = 1;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (a < c)
    {
        int tmp = a;
        a = c;
        c = tmp;
    }
    if (b < c)
    {
        int tmp = b;
        b = c;
        c = tmp;
    }
    printf("a=%d b=%d c=%d\n", a, b, c);
    return 0;
}