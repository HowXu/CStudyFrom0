#include <stdio.h>//����һ���ļ� stdio.h st��һ����׼�� i input o output ����׼��������� .hͷ�ļ�
//<>��ʾ����ϵͳ�ļ� ������ʾ�����Զ����ļ�

//��ע��

/*
����ע��
*/

//int�������� ���� �����ں����б�ʾ�����ķ���ֵ��
//main ���������������������ֻ��һ�����������о�����java)
int main() {
//C���Ե�������б���������֧��
//��������Ҫ�ڵ�����֮ǰ
//char	�ַ�����
//int	��������
//float		�����ȸ�����
//double	˫���ȸ�����(���ȵĲ�ͬ�������ڴ��ʹ�ã�Cû��Java���ڴ���ƣ����ע����)
//_Bool		�������ͣ�������ɵ�ƣ�
//���ԶԻ�������ʹ���޶�������ʾ�����ԣ���long long int��ʾ��������short int��ʾ������

	int a;//����һ������
	a = 0;//Ϊ������ֵ
	//���Զ���һ
	int k = 2;
	char s = 'F';//��Java�ĸ�ֵһ��
	char b = 'U';//C�����ģ�char����������
	float l = 3.14;//���ü�F
	double o = 3.141592653;//double��λ������
	int h = k;//��������

	long long int g = 36666;//������
	long float q = 3.25;
	short int n = 5;
	//û��short float��short double

	sizeof(k);//ֱ��������
	sizeof 999;

	#define SB "SB"//ֻ������Ĵ�����Ч�����������SB�������ַ���SB�����ӷֺţ�����������

	printf("Hello World!\n");// \n ����ǻ��з�,����UTF�����ʽ
	printf("���C����\n");
	//printf(k);//ʹ���������
	printf("�ܿ���%c\n",s,b);//printf������һ����Ӧ���ݵķ����������%c�����˵��ú���һ��char����
	printf("%.9f\n",o);//���ø�����ʱʹ��%.�������ں������nf��ʾ��ȷС������λ����%.9f\
	//���ѡ���λ��̫�����ֺ��治��000000000�ľ�ȷ����������龫ȷ̫��λ��
	//printf(b);����ֱ�Ӵ�ӡfloat��double������
	//��������ֱ�Ӵ�ӡchar
	printf("%s\n",SB);//%s ���ַ���(������%cΪchar)
	printf("%d%d%d%d%d\n", sizeof(996),sizeof(n),sizeof(int),sizeof n,sizeof(long double));//�������ǺϷ���

	unsigned long int m = k;
	printf("%i",m);


	return 0;//����ֵ���������Ƿ񱨴�
}


//C���Ե�32���ؼ���
/*
auto	break	char	 case	const	continue	default		do		double		else
enum	float	for		goto	if		int		long	register(�����Ҳ�����ã�)		signed	sizeof	static
return		short	struct	switch	typedef		union	void	volatile	while
inline	restrict	_Bool	_Complex	_Imaginary	_Allgnas	_Alignof	_Atomic		_Static_assert		_noreturn	_Thread_local	_Generic
����Java
*/

//����
/*
���γ�����520��1314
ʵ�ͳ�����3.14��5.12
�ַ�������'K','L'		��ͨ�ַ�
'/n','t'(Tab),'b'(�˸�),'\0'(���ַ�����ʾһ���ַ����Ľ���λ��),ת���ַ�
�ַ���������"ɵ���ܿ�"

���ų�����ʹ��ǰ�ȶ��塣
��ʽ:#define(�ؼ���)	��ʶ��	��������Ϊ�궨��
��һ����ʽ�ı�����������
*/
/*
sizeof��һ������������Ի�ȡ���ʽ�ĳ��ȣ�������һ�����������õ�����ļ�Ҳ����,�䷵��ֵΪdouble
sizeof()�������п����Ǳ�������Ҳ������ֱ�ӵ���
sizeof xxxx������ֻ������

signed��unsigned�����޶�ȡֵ��Χ,ǰ�߱�ʾ������λ(�����и���)�����߱�ʾ��������λ�ˣ������ſ�ѡ,�������Ͳ��������ţ����鶼��Ҫ��
�÷�[signed] [����]
�м�����б���޶�����long
[unsigned] long int
signed long int
*/