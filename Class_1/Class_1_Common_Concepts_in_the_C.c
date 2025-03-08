#include <stdio.h>
#include <string.h>
//std: standard 标准 的缩写
//IO: 输入输出

//main函数的多种写法

//1.基本写法
//int main()
//{
//
//printf("你好，Bit\n");
//	return 0;
//}


//2.古老的写法
// 不推荐使用
//void main()
//{
//	printf("你好\n");
//}


//3.带参数的写法
//int main(int argc, char* argv[])
//{
//	printf("你好\n");
//	return 0;
//}

//int main()
//{
//	printf("你好，Bit\n");
//	printf("%c\n", 'q');
//	printf("%d\n", 100);
//	printf("%f\n", 3.15);
//	return 0;
//}

//int main()
//{
//	'j';
//	'g';
//	'h';
//	'%';
//}


//打印对应的ASCII码表字符
//int main()
//{
//	int i = 1;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c ", i);
//	}
//
//	return 0;
//}


//字符与字符串
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f'};//不包含\0, 输出结果会乱码
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%zd\n", strlen(arr1));
//	printf("%zd\n", strlen(arr2));
//	//strlen的返回值是size_t类型的，应该使用%zd
//	return 0;
//}



//转义字符
//    d = 十进制字符
//   \ddd = 八进制字符
//   \xdd = 十六进制字符
int main()
{
	//printf("abcdef\n");
	//printf("%s\n", "\130\x52"); //输出XR
	printf("%zd\n", strlen("\114"));
	return 0;
}