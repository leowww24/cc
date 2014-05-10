/*************************************************************************
    > File Name: deconstructor.cpp
    > Title: 
    > Description: 
    > Created Time: 2014年05月10日 星期六 16时19分09秒
 ************************************************************************/

//析够函数不能定义为private，对象自动析够时会出错
//注意：public成员函数可以调用private成员函数（正如使用private成员一样）
//在堆中操作，不显式调用析够函数不会报错，但会造成内存泄漏！

#include<iostream>
using namespace std;
class klass
{
	public:
		klass(){cout<<"I'm born."<<endl;}
	private:
		~klass(){}
		void func(int n){
			cout<<"klass!!"<<endl; }
	public:
		void test()
		{
			func(100);
		}
};
int main()
{
//	klass k;
//	k.test();
	klass *k=new klass();
	k->test();
//	delete k;
	return 0;
}

