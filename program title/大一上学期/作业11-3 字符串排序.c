/*
 ����Ҫ���д���򣬶���5���ַ���������С�����˳�������

�����ʽ��
����Ϊ�ɿո�ָ���5���ǿ��ַ�����ÿ���ַ����������ո��Ʊ�������з��ȿհ��ַ�������С��80��

�����ʽ��
�������¸�ʽ��������Ľ����
After sorted:
ÿ��һ���ַ���

����������
red yellow blue green white
���������
After sorted:
blue
green
red
white
yellow
*/

#include<stdio.h>
#include<string.h>
int main()
  {int i,j;
   char s[5][85],t[85];
   for(i=0;i<5;i++) {
        scanf("%s",s[i]);
   }
   for(i=0;i<4;i++) {
        for(j=0;j<4-i;j++) {
            if(strcmp(s[j],s[j+1])>0) {//�ַ����ıȽ�
                strcpy(t,s[j]);//�ַ����ĸ���
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],t);
			}
        }
   }
   printf("After sorted:\n");
   for(i=0; i<5; i++) {
        printf("%s\n",s[i]);
   }
   return 0;
  }
