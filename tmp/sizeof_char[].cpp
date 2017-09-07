/*************************************************************************
    > File Name: sizeof_char[].cpp
    > Title: 
    > Description: 
    > Created Time: 2014年05月10日 星期六 11时22分36秒
 ************************************************************************/

#include<iostream>
using namespace std;

//str[]作为函数形参则自动退化为指针类型！
void foo(char str[100])
{
	cout<<sizeof(str)<<endl;
}

int main()
{
	char str[]="abcde";
	cout<<sizeof(str)<<endl;

	char *p=str;
	cout<<sizeof(p)<<endl;

	foo(str);
}
