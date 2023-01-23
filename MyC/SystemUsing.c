#include <stdio.h>
#include <stdlib.h>//导入system方法的头文件

int SystemUsing(){
	printf("System调用成功！\n");
	system("start cmd");
	return 0;
}