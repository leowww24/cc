/*************************************************************************
    > File Name: template_func.cpp
    > Title: 
    > Description: 
    > Created Time: 2014年05月11日 星期日 10时06分32秒
 ************************************************************************/

//函数模板

#include<iostream>
using namespace std;

//普通函数优先于同名的模板函数调用
//如果普通函数加了模板参数，会被同名的模板函数隐藏
//template<typename T>
void func(const int &t)
{
	cout<<t+100<<endl;
}
template<typename T>
void func(const T &t)
{
	cout<<t<<endl;
}

int main()
{
	func(10.3);
	func(1000);
}
