/*************************************************************************
    > File Name: sizeof_string.cpp
    > Title: 
    > Description: 
    > Created Time: 2014年05月11日 星期日 15时15分45秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

//sizeof(string) 表示string类对象的大小
//注意：sizeof(p)与sizeof(*p)指针大小与指针指向对象的大小的区别
//char *pc="abc"	sizeof(*pc)=1

int main()
{
	string strArr[]={"Trend","Micro","Soft"};
	string *p=new string[2];
	p[0]="US";
	p[1]="CN";
	cout<<sizeof(strArr)<<endl
		<<sizeof(p)<<endl		//p指针的大小
		<<sizeof(*p)<<endl		//p指针指向的string类的大小
		<<sizeof(string)<<endl;	//string类的大小

	//sizeof(strArr)为整个数组所占的字节数
	for(int i=0;i<sizeof(strArr)/sizeof(string);++i)
		cout<<strArr[i];
	//错误的写法：sizeof(p)/sizeof(string)
	for(int i=0;i<sizeof(*p)*2/sizeof(string);++i)
		cout<<p[i];
	cout<<endl;
}
