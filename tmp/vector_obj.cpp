/*************************************************************************
    > File Name: vector_obj.cpp
    > Title: 
    > Description: 
    > Created Time: 2014年05月10日 星期六 19时24分17秒
 ************************************************************************/

//含有指针的类务必定义拷贝构造函数、赋值操作符、析构函数
//vector()	初始化空容器
//vector(2)	 先调用obj默认构造函数生成临时对象，在调用其拷贝构造函数初始化容器内容，再析构掉无用的临时对象
//vector.push_back 调用拷贝构造函数，当容器空间不足时会多次调用拷贝构造函数和析构函数

//一个原则(默认构造函数开空间的情况下)：默认构造函数+拷贝构造函数调用总数=析构函数调用次数

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Demo
{
	public:
		Demo():str(NULL){cout<<"Constructor"<<endl;};
		~Demo()
		{
			if(str!=NULL)
				delete[] str;
			cout<<"Deconstructor"<<endl;
		}
		char *str;

		//此处必须定义拷贝构造函数
		Demo(const Demo& o):str(NULL)
	{
		cout<<"Copy constructor"<<endl;
		if(o.str!=NULL)
		{
			str=new char[strlen(o.str)+1];
			strcpy(str,o.str);
		}
	}

		//赋值操作符，此处非必须，但建议定义
		Demo& operator=(const Demo& rig)
		{
			if(this==&rig)
				return *this;
			delete[] str;
			str=NULL;
			if(rig.str!=NULL)
			{
				str=new char[strlen(rig.str)+1];
				strcpy(str,rig.str);
			}
			return *this;
		}
};

int main()
{
	Demo a;
	a.str=new char[32];
	strcpy(a.str,"Happy coding!!!");
	cout<<a.str<<endl;

	vector<Demo> *pv=new vector<Demo>();	//此处初始化空容器
	pv->push_back(a);	//此处若调用合成拷贝构造函数会指向同一内存

	//重复释放一块内存，严重错误
	delete pv;

	//此处由于默认构造函数未开空间，故省了一次析构函数调用
	cout<<"-------------------------"<<endl;
	vector<Demo> *p=new vector<Demo>(2);
}
