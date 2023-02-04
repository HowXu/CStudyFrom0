#include <stdio.h>//导入一个文件 stdio.h st是一个标准库 i input o output 即标准输入输出库 .h头文件
#include <string.h>
//<>表示导入系统文件 “”表示导入自定义文件

//行注释

/*
多行注释
*/

//int数据类型 整型 出现在函数中表示函数的返回值、
//main 程序的主函数，程序有且只有一个主函数（感觉不如java)
int main() {
//C语言的最外层有和java一样的变量作用域，支持
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
	printf("%i\n",m);

	char lop = 65;
	printf("%c\n", lop);
	//如果想写个字符串，只能用数组
	char Num[3];//声明一个可以存放3个字符的char数组，这个和JAVA一样，但是c可以自动计算char数组的长度，这个3可以省略，省略了就必须同时赋值
	char Num2[] = {'N','\0'};//这样也是可以的,和java一样
	char Num3[] = {"NF"};//也可以直接双引号，也不用反斜杠0
	
	//声明时的长度和实际取用以及赋值时的[]含义不同，如长度为5，赋值为[0],[1].[2],[3],[4]
	Num[0] = 'F';//这样对其一个个赋值
	Num[1] = 'C';
	Num[2] = '\0';
	//最后一位应该是\0，表示字符串结束
	printf("%s\n", Num);
	//还可以指定初始化某元素
	int CNM[10] = {CNM[1]=10};

	//算数运算符，除了和java一样的+-*/，%取余，其中int与int相除，将舍弃小数位数，float和float相除则不会
	//float和float不能取余！！！！！！！
	int lkj = 8 - 1;
	//运算符操作的对象数量称为目，8-1，-为双目运算符，-8为单目运算符
	//操作符和括号将数字连接在一起得到的称为表达式
	//c没有java一样的自动处理操作符两端的数据类型的能力！！！！
	//同样有| & ++ --，>=,!之类的，判断符判断前会将输入输出都转换为double类型，最后输出结果为0或1，0假，1真
	//运算符有优先级大小，比如++就比*运算符优先级高
	printf("%d\n", 1 < 2);
	printf("%d\n", 'a' < 'b');

	//if，和java一样
	if (1)//这里只有0，1，也可以为判断(i <= 19)，也有else if
	{
		printf("你好\n");
	}
	else {
		//和java一样的else
		printf("SB\n");
	}
	//和java一样的switch语句
	switch (2)//但是只能用整形来判断，纯脑瘫
	{
	case 1:
		printf("SB\n");
		break;//结束查询
	case 2:
		printf("SC\n");
		break;//结束查询
	default:
		printf("SD\n");
		break;//结束查询，每个都要追加
	}

	//scanf和与java的scanner近似，会获取输入的字符
	char buf2;
	int buf = 1;
	scanf_s("%i", &buf);//调用变量应使用&
	//不知道为什么非要调用scanf_s

	//while和dowhile，和java一样
	while (0)
	{
		//printf("SB");
		//死循环
		break;//同样可以用break
	}

	do
	{
		//printf("SB");
		//一样有dowhile
	} while (0);

	for (int a = 10; a < 20; a = a + 1)
	{
		printf("a 的值： %i\n", a);
		//和java一样的for循环
	}
	//和java一样的break和continue，多用于死循环条件判断
	for (int df = 0; df < 10; df++)
	{
		if (df == 9) {
			printf("我到%i就结束了\n", df);
			break;
		}
		else if (df == 4) {
			printf("到%i仍旧continue\n", df);
			continue;
		}
	}

	//字符串处理函数
	char KL[] = { "卧槽太牛逼了家人" };
	//strlen字符串长度
	strlen(KL);//没什么好说的
	//拷贝字符串，strcopy和strncpy
	char LP[100];
	//strcpy(LP,KL);	VS里不给用这个
	//连接字符串，strcat和strncat
	//比较字符串,strcmp和strncmp

	//二维数组，和java一样
	//线性存放
	int LPK[1][1] = {1};//不能数组里放数组，垃圾c
	//相当于表示一个1x1的表格，1行，1列
	int HJK[4][5] = { {1,2,3,4,5} };//表示第一行的五列的数字分别为12345
	int HGJ[1][1] = { HGJ[1][1] = 1 };//同样可以逐个赋值
	//没有int IJ[][9]这种东西

	//指针
	//指针就是内存地址作为对象的使用，c里面有指针和指针变量
	//一个变量有个变量名，指针存储变量的变量名和变量的内存地址的对应关系，内存地址存储变量的内容，也就是说指针存储了内存地址和变量名的关系（有什么屌用？）
	//指针就成了变量和其值之间的桥
	int *kjgfd = &k;//定义了一个指针变量,说明kjgfd存储了一个int变量的变量名和内存地址的关系
	//数据类型 *指针变量名
	//获取某个变量的指针，用&，通过指针获取某个变量的值，使用*(也称间接运算符)
	printf("%i\n", *kjgfd);//进而言之，指针可以直接当作变量用进行间接访问

	//数组和指针不是一个东西，数组在一个内存范围内存储了一连串数据
	//我只能说每个数组的第一个元素的地址，就是数组的地址,数组各个元素之间只有1byte的差别
	char* aos = &Num[0];//因此只获取数组的第一个元素的地址就可以获取数组的地址
	//通过指针访问不同数组元素，只需要进行加减运算
	char lkjh = *(aos + 1);//这样就获取了Num的第二个元素，注意加括号表示是内存的值加1！！！！！！！！！！！！！！！！！

	//当然，这不影响直接把指针和数组挂钩
	char LKOP[] = { "真牛逼" };

	char* iuy = LKOP;//掉不掉就问你

	char asfv = iuy[1];//直接像数组访问一样访问指针,地址也不用改
	//这里的iuy[1] = *(iuy + 1)
	//当然呢，不能直接把一个定义为数组的东西按照指针调用，比如不能直接调用*LKOP，这是不行的，需要转换
	//数组只是一个地址，指针为左值（可更改）

	//鉴于数组指针和指针数组的容易混淆，所以*一般是提前到数据类型上用

	int *p1[5];//这是一个指针数组，是一个数组，数组名为p1，其每一个元素为一个指针，int* p1[5]，这样就看得懂了
	int *(p2)[5];//这是一个数组指针，是一个指针，指针名为p2，指向一个有5个int的名为数组的内存地址(对其赋值应该使用&njqwnbiunfsaiu，后者是一个五个元素的数组)，调用*(p2)[0]等可以得到不同的指针,等同于int* p2[5]和int *(p2[5])


	int* poi = p1[0];
	//简而言之，[]优先级比*高，()和[]优先级一样，所以对于数组指针，会有先定义为p2[5]数组,在使用指针定义



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
sizeof是一个运算符，可以获取表达式的长度(byte占位大小)，它不是一个方法，不用导入库文件也能用,其返回值为double
sizeof()，括号中可以是变量名，也可以是直接的量
sizeof xxxx，这里只能用量

signed和unsigned用于限定取值范围,前者表示带符号位(可以有负号)，后者表示不带符号位了，中括号可选,数据类型不加中括号，建议都不要用
用法[signed] [类型]
中间可以有别的限定符如long
[unsigned] long int
signed long int
*/