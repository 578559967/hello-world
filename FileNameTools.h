#include<stdio.h>
#include<string.h>
/*
����ֵ��
    whole�����������ַ���, ���磺"c:/system32/abc.txt"
    dir: ����·���������磺c:/system32

����ֵ��
    dir·������ĳ��ȣ����磬������Ϊ11��
*/
int GetDir(char *whole,char* dir)
{
   char *index;
   int len;                      //���泤��
   index=strrchr(whole,'/');     //����'/'���ַ���whole�дӺ��濪ʼ�ĵ�һ�γ��ֵ�λ��
   len=index-whole;
   strncpy(dir,whole,len);       //���ַ���whole��ǰlen���ַ��������ַ���dir��
   dir[len]='\0';                //�趨�ַ���������
   return len;                   //���س���
};


/*
����ֵ��
    whole�����������ַ���, ���磺"c:/system32/abc.txt"
    name: �����ļ��������磺abc

����ֵ��
    �ļ�������ĳ��ȣ����磬������Ϊ3��
*/
int GetName(char *whole,char* name);


/*
����ֵ��
    whole�����������ַ���, ���磺"c:/system32/abc.txt"
    ext: �����ļ�����׺�����磺txt

����ֵ��
    �ļ�����׺����ĳ��ȣ����磬������Ϊ3��
*/
int GetExt(char *whole,char* ext);
