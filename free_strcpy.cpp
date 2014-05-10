/*************************************************************************
    > File Name: free_strcpy.cpp
    > Title: 
    > Description: 
    > Created Time: 2014年05月10日 星期六 11时39分16秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;

//string.h operation will overwrite the memery

void foo(void)
{
	char *str=(char*)malloc(100);
	strcpy(str,"hello");
	free(str);
	if(str!=NULL)
		strcpy(str,"world");
	printf(str);
}

int main()
{
	foo();
}
