/*************************************************************************
    > File Name: multiArr.cpp
    > Title: 
    > Description: 
    > Created Time: 2014年05月11日 星期日 16时51分26秒
 ************************************************************************/

//多维数组在内存中是连续存储的，所以越界访问不一定会错误！

#include<iostream>
using namespace std;

int main()
{
	char matrix[3][3]={
		{'a','b','c'},{'d','e','f'},{'g','h','i'}
	};
	cout<<matrix[1][4]<<endl;
}
