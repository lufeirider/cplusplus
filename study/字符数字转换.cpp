// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;


std::vector<int> digitize(int n) 
{
	int num;
	char temp;
	vector<int> result;
	stringstream strStream;
	string strs;

	strStream<<n;								//数字转成字符
	strStream>>strs;

	//strs = to_string((_Longlong)n);			//数字转成字符

	for(auto it = strs.begin();it != strs.end();++it)
	{
		temp = *it;
		//cout<<typeid(temp).name()<<endl;		//打印类型

		//stringstream ss(&temp);				//把字符转成数字
		//ss>>num;
		//cout<<num<<endl;

		stringstream ss;						//把字符转成数字
		ss<<temp;
		ss>>num;
		//cout<<num<<endl;

		result.push_back(num);
	}

	return result;
}

int main ( )
{
	vector<int> re = digitize(123456);

	for(auto it = re.begin();it != re.end();it++)
	{
		cout<<*it<<endl;
	}

	getchar();
	return 0;
}
