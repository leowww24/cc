/*************************************************************************
    > File Name: ./derived.cpp
    > Title: 
    > Description: 
    > Created Time: 2014年05月10日 星期六 15时59分07秒
 ************************************************************************/

//为定义则使用合成构造函数
//可以在实例化后直接调用成员函数:A().func();
//注意：const成员函数算新函数，未重载则继承基类的virtual函数

#include<string>
#include<iostream>
#include<stdio.h>
class A{
	public:
		A() {func(0);};
		virtual void func(int data) {printf("A1 :%d\n",data);}
		virtual void func(int data) const {printf("A2 :%d\n",data);}
		void func(char *str) {printf("A3 :%s\n",str);}
};

class B:public A{
	public:
		void func() {printf("B1 :%s\n","");}
		void func(int data) {printf("B2 :%d\n",data);}
		void func(char *str) {printf("B3 %s)\n",str);}
};

int main()
{
	A *pA;
	B b;
	const A *pcA;
	pA=&b;
	pA->func(1);
	pA->func("test");

	A().func(1);

	pcA=&b;
	pcA->func(2);
	return 0;
}
