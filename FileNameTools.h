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
   index=strrchr(whole,'/');     //����'/'���ַ���whole�дӺ��濪ʼ�ĵ�һ�γ��ֵ�λ�ã����Ӵ˵�ĩβ���Ƹ�index
   len=index-whole;
   strncpy(dir,whole,len);       //���ַ���whole��ǰlen���ַ��������ַ���dir��
   dir[len]='\0';                //�����ַ���������
   return len;                   //���س���
}


/*
����ֵ��
    whole�����������ַ���, ���磺"c:/system32/abc.txt"
    name: �����ļ��������磺abc

����ֵ��
    �ļ�������ĳ��ȣ����磬������Ϊ3��
*/
int GetName(char *whole,char* name)
{
    int len;                               
    char *rname,*lname;                 //name�ַ�������ߺ��ұ�
    lname=strrchr(whole,'/');		//�Ѿ���GetDir��˵��	
    lname++;				//�ิ����'/'������ָ��������һλ
    rname=strrchr(whole,'.');		//������չ��
    len=rname-lname;			//�õ�������չ�����ļ����ĳ���
    strncpy(Name,lname,len);		//�õ�������չ�����ļ���
    Name[len]='\0';			//�����ַ���������
    return len;				//�����ļ�������
}


/*
����ֵ��
    whole�����������ַ���, ���磺"c:/system32/abc.txt"
    ext: �����ļ�����׺�����磺txt

����ֵ��
    �ļ�����׺����ĳ��ȣ����磬������Ϊ3��
*/
int GetExt(char *whole,char* ext)
{
   char *index;
   int len;
   index=strrchr(whole,'.');		//����չ��(Ҳ�����ļ�����׺)����
   index++;				//�ิ����'.'����ָ������һλ
   len=strlen(whole)-strlen(index);	//�õ���չ���ĳ���
   strncpy(Ext,index,len);		//������չ��
   Ext[len]='\0';			//�����ַ���������
   return len;				//������չ������
}
