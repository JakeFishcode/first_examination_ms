/*******************����˵��**************************/
//1.�����õ���������16�����е�֪ʶ������ɴ˳��� 
//2.ԭ��û��ע�� 
/***************************************************/ 
#include <stdio.h>
#include <math.h> 
int main()
{
	char func=0,temp=0,flag=0;//func Ϊ����ѡ��Ĳ�����tempΪ�ݴ���� flagΪ�������ı�־ 
	long long int remainder=0;//�ۼ��� 
	long int n=0,n_c=0;//nΪ������� n_cΪ��������Ŀ��� 
	long long int swnum = 0;//���ת������� 
	long long int swnum2 = 0;
    int i = 0;
    int k = 1,count,jk;
    printf("/********************************************/\n");
	printf("�������ʵ�ֽ���ת��\n");
	printf("���� 1 :ִ�ж�����ת��Ϊʮ���ƣ�0~11111111B��\n");
	printf("���� 2 :ִ��ʮ����ת��Ϊ�����ƣ�0~65535��\n");
	printf("���� 3 :�˳�����\n");
	printf("/********************************************/\n");
	while(1)
	{
		//������ʼ�� 
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

		printf("����й���ѡ��(1/2/3):");
		scanf("%c",&func);
		while((temp=getchar()) != '\n') flag = 1;
		if(func == '1' && flag == 0)//���ж�����ת��Ϊʮ���� 
		{
			printf("������һ����������:");
			scanf("%d",&n);
			while((temp=getchar()) != '\n') flag = 1; //�ų���������Ͷ���������ַ� ����1�� 
   			n_c = n;//����n_c ,���ı�n 
   			while(n_c != 0)//�����������1��0���������� �ı���2�� 
   			{
   				temp = n_c%10; //һλһλ���Ų� 
   				n_c /=10;
   				
   				if(temp != 0 && temp != 1)
				{
					flag = 1; //�����������1��0���������� 
				}	
			}
			
			if(n >11111111)//����1111 1111 �����ų� ����3�� 
			{
				flag = 2;
			}
			 
			n_c = n;//����n_c ,���ı�n
    		while (n_c!=0 && flag==0)
    		{
        		remainder = n_c%10;//������͵�һλ 
        		n_c /= 10;
        		swnum += remainder*pow(2,i);//�����λ������ �� 2��i�η� 
        		++i;
    		}
    		if(flag == 0)
    		{
    			printf("�������� %lld ת��Ϊʮ����Ϊ %lld\n", n, swnum);
			}
			else
			{
				printf("\n�����˴���");
				if(flag == 1)
				{
					printf("�����˳�0��1���������\n");					
				}
				if(flag == 2)
				{
					printf("�������������11111111B��\n");					
				}				
			}
		    	
		}
		else if(func == '2'&& flag == 0)
		{
			printf("������һ��ʮ������:");
			scanf("%d",&n);
			while((temp=getchar()) != '\n') flag=1;
			if(n > 65535 || n<0) flag = 2;
			n_c = n;
			if(n_c <= 1023 && flag==0)//С��1023�Ŀ���ֱ�Ӵ��� 
   			{
			   while (n_c!=0)//
  				{
					remainder = n_c%2;
        			
        			n_c /= 2;
        			
        			swnum += remainder*k;
        			k *= 10;
        		}
        		printf("ʮ������ %lld ת��Ϊ������Ϊ %lld\n",n,swnum);
        	}
        	else if(flag == 0)//����1023 ����2��long long ���������� 
        	{
        		count = 0;
        		while (n_c!=0)
        		{
        			n_c /= 2;
        			count++;
				}
				n_c = n;
				for(jk=0;jk<count-8;jk++)//����8λ�����λ 
  				{
					remainder = n_c%2;
        			n_c /= 2;
        			swnum += remainder*k;
        			k *= 10;
        		}
        		k=1;
        		while (n_c!=0)//�����8λ 
  				{
					remainder = n_c%2;
        			n_c /= 2;
        			swnum2 += remainder*k;
        			k *= 10;
        		}
				printf("ʮ������ %lld ת��Ϊ������Ϊ %lld%lld\n",n,swnum2,swnum);//���������Ƕ����� 
			}
			if(flag != 0)
			{
				printf("\n�����˴���");
				if(flag == 1)
				{
					printf("��������ַ�����!\n");					
				}
				if(flag == 2)
				{
					printf("�������������65535��С��0��\n");				
				}
			}
    	
     
		}
		else if(func == '3'&& flag == 0)
		{
			break;
		}
		else
		{
			printf("�������������1,2��3,���������룡\n"); 
		} 
	printf("\n");

	}
	return 0;
}
