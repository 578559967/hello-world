#include<stdio.h>
#include<string.h>
/*
参数值：
    whole：输入整体字符串, 例如："c:/system32/abc.txt"
    dir: 返回路径名，例如：c:/system32

返回值：
    dir路径结果的长度，例如，本例中为11。
*/
int GetDir(char *whole,char* dir)
{
   char *index;
   int len;                      //储存长度
   index=strrchr(whole,'/');     //查找'/'在字符串whole中从后面开始的第一次出现的位置
   len=index-whole;
   strncpy(dir,whole,len);       //将字符串whole中前len个字符拷贝到字符串dir中
   dir[len]='\0';                //设定字符串结束符
   return len;                   //返回长度
};


/*
参数值：
    whole：输入整体字符串, 例如："c:/system32/abc.txt"
    name: 返回文件名，例如：abc

返回值：
    文件名结果的长度，例如，本例中为3。
*/
int GetName(char *whole,char* name);


/*
参数值：
    whole：输入整体字符串, 例如："c:/system32/abc.txt"
    ext: 返回文件名后缀，例如：txt

返回值：
    文件名后缀结果的长度，例如，本例中为3。
*/
int GetExt(char *whole,char* ext);
