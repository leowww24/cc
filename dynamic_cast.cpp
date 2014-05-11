/*************************************************************************
    > File Name: try.cpp
    > Title: 
    > Description: 
    > Created Time: 2014年05月11日 星期日 15时50分27秒
 ************************************************************************/

//static dynamic  const reinterpreter 四种强制类型转换

#include<iostream>
using namespace std;

class A
{
	public:
		A(){};
};

class B:public A
{
	public:
		B(){}
};

int main()
{
	A *pb=new B();
	B b;
	A *pa=dynamic_cast<A*>(pb);
	if(pa!=NULL)
		cout<<"a,right"<<endl;

	//可以静态将子类指针转为父类指针,甚至将父类指针转为子类指针（不安全，访问子类成员时出错），推荐使用dynamic_cast<>进行转换
	A *pa1=static_cast<A*>(pb);
	if(pa1!=NULL)
		cout<<"b,right"<<endl;

	//可以静态将子类转换为父类
	A a=static_cast<A>(b);

	//错误，动态类型转换只针对类的指针、类的引用或void*类型！
//	A a1=dynamic_cast<A>(b);

}
