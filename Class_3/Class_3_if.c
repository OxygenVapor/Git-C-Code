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

int main()
{
	int year = 0;
    scanf("%d", &year);
	if (year > 0)
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			printf("闰年\n");
		else
			printf("非闰年\n");
    else
        printf("非法输入\n");
	return 0;
}