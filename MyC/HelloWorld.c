#include <stdio.h>//导入一个文件 stdio.h st是一个标准库 i input o output 即标准输入输出库 .h头文件
//<>表示导入系统文件 “”表示导入自定义文件

//行注释

/*
多行注释
*/

//int数据类型 整型 出现在函数中表示函数的返回值、
//main 程序的主函数，程序有且只有一个主函数（感觉不如java)
int main() {
//C语言的最外层有变量作用域，支持
//变量声明要在调用它之前
//char	字符类型
//int	整数类型
//float		单精度浮点数
//double	双精度浮点数(精度的不同决定着内存的使用，C没有Java的内存机制，这点注意下)
//_Bool		布尔类型（长得真傻逼）
//可以对基本类型使用限定符来表示其属性，如long long int表示长整数，short int表示短整数

	int a;//声明一个变量
	a = 0;//为变量赋值
	//可以二合一
	int k = 2;
	char s = 'F';//和Java的赋值一样
	char b = 'U';//C很拉的，char不能用中文
	float l = 3.14;//不用加F
	double o = 3.141592653;//double的位数更多
	int h = k;//可以这样

	long long int g = 36666;//长整数
	long float q = 3.25;
	short int n = 5;
	//没有short float和short double

	sizeof(k);//直接这样用
	sizeof 999;

	#define SB "SB"//只对下面的代码有效，下面的所有SB都代表字符串SB，不加分号！！！！！！

	printf("Hello World!\n");// \n 这个是换行符,采用UTF编码格式
	printf("你好C语言\n");
	//printf(k);//使用这个变量
	printf("周奎是%c\n",s,b);//printf可以是一个对应数据的方法，这里的%c代表了调用后续一个char类型
	printf("%.9f\n",o);//调用浮点数时使用%.，可以在后面接上nf表示精确小数多少位，如%.9f\
	//如果选择的位数太多会出现后面不是000000000的精确情况，不建议精确太多位数
	//printf(b);不能直接打印float和double，垃圾
	//甚至不能直接打印char
	printf("%s\n",SB);//%s 是字符串(区别与%c为char)
	printf("%d%d%d%d%d\n", sizeof(996),sizeof(n),sizeof(int),sizeof n,sizeof(long double));//这样都是合法的

	unsigned long int m = k;
	printf("%i",m);


	return 0;//返回值决定程序是否报错
}


//C语言的32个关键字
/*
auto	break	char	 case	const	continue	default		do		double		else
enum	float	for		goto	if		int		long	register(？这个也不让用？)		signed	sizeof	static
return		short	struct	switch	typedef		union	void	volatile	while
inline	restrict	_Bool	_Complex	_Imaginary	_Allgnas	_Alignof	_Atomic		_Static_assert		_noreturn	_Thread_local	_Generic
不如Java
*/

//常量
/*
整形常量：520，1314
实型常量：3.14，5.12
字符常量：'K','L'		普通字符
'/n','t'(Tab),'b'(退格),'\0'(空字符，表示一个字符串的结束位置),转义字符
字符串常量："傻逼周奎"

符号常量：使用前先定义。
格式:#define(关键词)	标识符	常量，称为宏定义
另一个格式的变量声明罢了
*/
/*
sizeof是一个运算符，可以获取表达式的长度，它不是一个方法，不用导入库文件也能用,其返回值为double
sizeof()，括号中可以是变量名，也可以是直接的量
sizeof xxxx，这里只能用量

signed和unsigned用于限定取值范围,前者表示带符号位(可以有负号)，后者表示不带符号位了，中括号可选,数据类型不加中括号，建议都不要用
用法[signed] [类型]
中间可以有别的限定符如long
[unsigned] long int
signed long int
*/