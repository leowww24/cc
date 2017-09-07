/*************************************************************************
    > File Name: overload.cpp
    > Title: 
    > Description: 
    > Created Time: 2014年05月10日 星期六 17时05分41秒
 ************************************************************************/

#include<iostream>
#include<ostream>
using namespace std;

//函数重载要求：
//只有默认实参不同不可以重载
//只有返回类型不同不可以重载
//const成员函数与非const成员函数可以构成重载

class base
{
public:
	virtual base* copy(base*);
	virtual ostream& print(int,ostream& =cout);
	virtual void eval();
};

class derived:public base
{
public:
	base* copy(base*);	
	base* copy(derived*);	//可以重载
	//只有返回类型不同，不可以重载
	//derived* copy(base*);
	
	ostream& print(int ,ostream& =cout);
	//只有默认实参不同，不可重载
	//ostream& print(int ,ostream&);
	
	void eval();
	void eval() const;

};

int main()
{
}
