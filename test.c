
//计算机语言（c++）中的数据类型

//字符数据类型 char
//短整形 short
//整形 int
//长整型 long
//更长的整形 long long
//单精度浮点数 float
//双精度浮点数 double
#include "stdio.h"
//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整形
//	int age = 20;
//	//短整形
//	short num = 10;
//	//long
//	//long long
//	//单精度浮点型
//	float weight = 58.5;
//	//双精度浮点型
//	double high = 1.68;
//	printf("%d\n", num);//打印一个整数 - %d或者%lld（八进制也许要加ll），num可直接写成整数
//	return 0;
//}
//！！！！！出现问题：忘记敲';'！！
//问题2忘记引用库#include "stdio.h"
// 
// 
//class2怎么研究数据类型大小
//
//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//sizeof为关键字，c中的操作符，用来计算类型或者变量所占空间大小,单位为字节（byte）
// char可替换为任何数据类型
//c语言标准中sizeof(long)≥sizeof(int),此刻这里取=
//一般情况下int足够用，short是为了提高空间利用效率
//	return 0 ;
//}