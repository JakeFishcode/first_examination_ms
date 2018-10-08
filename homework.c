#include <stdio.h>
int main()
{
	int i;
	char a,b,c,d,e;
	printf("/********************************/\n");
	printf("/*程序一：实现自定义字符打印飞机*/\n");
	printf("/********************************/\n");
	printf("请输入第一个字符：");
	scanf("%c",&a);
	while((e=getchar())!='\n');
	printf("请输入第二个字符："); 
	scanf("%c",&b);
	while((e=getchar())!='\n');
	printf("请输入第三个字符："); 
	scanf("%c",&c);
	while((e=getchar())!='\n');
	printf("请输入第四个字符："); 
	scanf("%c",&d);
	while((e=getchar())!='\n');
	printf("--------------------------------\n");
	printf("输入成功，正在打印.....\n");
	printf("--------------------------------\n");
    printf("\n"
    "         %c\n"//1
    "        %c %c\n"//2
    "        %c %c\n"//2
    "        %c %c\n"//2
    "        %c %c\n"//2
    "        %c %c\n"//2 11
    "    %c %c %c %c %c %c\n"//6
    "  %c %c %c %c %c %c %c %c\n"//8 14
    "%c %c %c %c %c %c %c %c %c %c\n"//10
    "        %c %c\n"//2
    "        %c %c\n"//2
    "      %c %c %c %c\n"//4  18
    "    %c %c %c %c %c %c\n\n\n",
	a,b,c,d,d,d,d,d,d,d,d,d,d,
	d,d,d,d,d,d,d,d,d,d,d,d,d,
	d,d,d,d,d,d,d,d,d,d,d,d,d,
	d,d,d,d,d,d,d,d,d,d,d,d,d,
	d,d,d,d,d,d,d,d,d,d,d,d,d,
	d,d,d,d,d,d,d,d,d,d,d,d,d,
	d,d,d,d,d,d,d,d,d,d,d,d,d,
	d,d,d,d,d,d,d,d,d,d,d,d,d,
	d,d,d,d,d,d,d,d,d,d,d,d,d,d,d);//8
	printf("--------------------------------\n");
	printf("打印完毕.....\n");
	printf("--------------------------------\n");
	printf("Process exited after x.xxx seconds with return value 0\n"); 
	printf("请按任意键继续. . ."); 
	a=getchar(); 
	return 0 ;
}
