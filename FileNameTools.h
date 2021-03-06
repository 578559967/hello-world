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
   index=strrchr(whole,'/');     //查找'/'在字符串whole中从后面开始的第一次出现的位置，并从此到末尾复制给index
   len=index-whole;
   strncpy(dir,whole,len);       //将字符串whole中前len个字符拷贝到字符串dir中
   dir[len]='\0';                //加上字符串结束符
   return len;                   //返回长度
}


/*
参数值：
    whole：输入整体字符串, 例如："c:/system32/abc.txt"
    name: 返回文件名，例如：abc

返回值：
    文件名结果的长度，例如，本例中为3。
*/
int GetName(char *whole,char* name)
{
    int len;                               
    char *rname,*lname;                 //name字符串的左边和右边
    lname=strrchr(whole,'/');		//已经在GetDir中说明	
    lname++;				//多复制了'/'，所以指针向右移一位
    rname=strrchr(whole,'.');		//拷贝拓展名
    len=rname-lname;			//得到不含拓展名的文件名的长度
    strncpy(Name,lname,len);		//得到不含拓展名的文件名
    Name[len]='\0';			//加上字符串结束符
    return len;				//返回文件名长度
}


/*
参数值：
    whole：输入整体字符串, 例如："c:/system32/abc.txt"
    ext: 返回文件名后缀，例如：txt

返回值：
    文件名后缀结果的长度，例如，本例中为3。
*/
int GetExt(char *whole,char* ext)
{
   char *index;
   int len;
   index=strrchr(whole,'.');		//将拓展名(也就是文件名后缀)拷贝
   index++;				//多复制了'.'，故指针右移一位
   len=strlen(whole)-strlen(index);	//得到拓展名的长度
   strncpy(Ext,index,len);		//拷贝拓展名
   Ext[len]='\0';			//加上字符串结束符
   return len;				//返回拓展名长度
}
