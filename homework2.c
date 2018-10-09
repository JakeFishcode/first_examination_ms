/*******************程序说明**************************/
//1.按布置的任务量（16集）中的知识点来完成此程序 
//2.原理没有注释 
/***************************************************/ 
#include <stdio.h>
#include <math.h> 
int main()
{
	char func=0,temp=0,flag=0;//func 为功能选择的参数，temp为暂存的数 flag为检测输入的标志 
	long long int remainder=0;//累加数 
	long int n=0,n_c=0;//n为输入的数 n_c为输入的数的拷贝 
	long long int swnum = 0;//存放转化后的数 
	long long int swnum2 = 0;
    int i = 0;
    int k = 1,count,jk;
    printf("/********************************************/\n");
	printf("程序二：实现进制转换\n");
	printf("输入 1 :执行二进制转换为十进制（0~11111111B）\n");
	printf("输入 2 :执行十进制转换为二进制（0~65535）\n");
	printf("输入 3 :退出程序\n");
	printf("/********************************************/\n");
	while(1)
	{
		//参数初始化 
		func = 0;
		temp = 0;
		flag=0;
		remainder = 0;
		n = 0;
		n_c = 0;
		swnum = 0; 
		swnum2 = 0;
    	i = 0;
    	k = 1;

		printf("请进行功能选择(1/2/3):");
		scanf("%c",&func);
		while((temp=getchar()) != '\n') flag = 1;
		if(func == '1' && flag == 0)//进行二进制转化为十进制 
		{
			printf("请输入一个二进制数:");
			scanf("%d",&n);
			while((temp=getchar()) != '\n') flag = 1; //排除恶意输入和多余输入的字符 报错（1） 
   			n_c = n;//操作n_c ,不改变n 
   			while(n_c != 0)//输入的数除了1和0还有其他数 的报错（2） 
   			{
   				temp = n_c%10; //一位一位的排查 
   				n_c /=10;
   				
   				if(temp != 0 && temp != 1)
				{
					flag = 1; //输入的数除了1和0还有其他数 
				}	
			}
			
			if(n >11111111)//超出1111 1111 的数排除 报错（3） 
			{
				flag = 2;
			}
			 
			n_c = n;//操作n_c ,不改变n
    		while (n_c!=0 && flag==0)
    		{
        		remainder = n_c%10;//处理最低的一位 
        		n_c /= 10;
        		swnum += remainder*pow(2,i);//让最低位的数字 乘 2的i次方 
        		++i;
    		}
    		if(flag == 0)
    		{
    			printf("二进制数 %lld 转换为十进制为 %lld\n", n, swnum);
			}
			else
			{
				printf("\n出现了错误，");
				if(flag == 1)
				{
					printf("出现了除0和1以外的数！\n");					
				}
				if(flag == 2)
				{
					printf("所输入的数大于11111111B！\n");					
				}				
			}
		    	
		}
		else if(func == '2'&& flag == 0)
		{
			printf("请输入一个十进制数:");
			scanf("%d",&n);
			while((temp=getchar()) != '\n') flag=1;
			if(n > 65535 || n<0) flag = 2;
			n_c = n;
			if(n_c <= 1023 && flag==0)//小于1023的可以直接处理 
   			{
			   while (n_c!=0)//
  				{
					remainder = n_c%2;
        			
        			n_c /= 2;
        			
        			swnum += remainder*k;
        			k *= 10;
        		}
        		printf("十进制数 %lld 转换为二进制为 %lld\n",n,swnum);
        	}
        	else if(flag == 0)//大于1023 的用2个long long 参数来储存 
        	{
        		count = 0;
        		while (n_c!=0)
        		{
        			n_c /= 2;
        			count++;
				}
				n_c = n;
				for(jk=0;jk<count-8;jk++)//储存8位至最高位 
  				{
					remainder = n_c%2;
        			n_c /= 2;
        			swnum += remainder*k;
        			k *= 10;
        		}
        		k=1;
        		while (n_c!=0)//储存低8位 
  				{
					remainder = n_c%2;
        			n_c /= 2;
        			swnum2 += remainder*k;
        			k *= 10;
        		}
				printf("十进制数 %lld 转换为二进制为 %lld%lld\n",n,swnum2,swnum);//反过来就是二进制 
			}
			if(flag != 0)
			{
				printf("\n出现了错误，");
				if(flag == 1)
				{
					printf("所输入出现非数字!\n");					
				}
				if(flag == 2)
				{
					printf("所输入的数大于65535或小于0！\n");				
				}
			}
    	
     
		}
		else if(func == '3'&& flag == 0)
		{
			break;
		}
		else
		{
			printf("您输入的数不是1,2或3,请重新输入！\n"); 
		} 
	printf("\n");

	}
	return 0;
}
