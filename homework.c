#include <stdio.h>
int main()
{
	int i;
	char a,b,c,d,e;
	printf("/********************************/\n");
	printf("/*����һ��ʵ���Զ����ַ���ӡ�ɻ�*/\n");
	printf("/********************************/\n");
	printf("�������һ���ַ���");
	scanf("%c",&a);
	while((e=getchar())!='\n');
	printf("������ڶ����ַ���"); 
	scanf("%c",&b);
	while((e=getchar())!='\n');
	printf("������������ַ���"); 
	scanf("%c",&c);
	while((e=getchar())!='\n');
	printf("��������ĸ��ַ���"); 
	scanf("%c",&d);
	while((e=getchar())!='\n');
	printf("--------------------------------\n");
	printf("����ɹ������ڴ�ӡ.....\n");
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
	printf("��ӡ���.....\n");
	printf("--------------------------------\n");
	printf("Process exited after x.xxx seconds with return value 0\n"); 
	printf("�밴���������. . ."); 
	a=getchar(); 
	return 0 ;
}
