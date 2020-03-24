#pragma once

#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::cerr;
using std::endl;

/*
**	�����������д����Ĳ���
*/
class Parameter
{
public:
	Parameter(int argc, char *argv[]);
	~Parameter();

private:
	int argc;					//argc
	vector<string> option;		//argvת��

public:
	bool disposeParameter();	//�������
};
