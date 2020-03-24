#pragma once

#include <stack>
#include <string>
#include <vector>
#include <iostream>
#include "Calculator.h"

using std::string;
using std::vector;
using std::cout;
using std::cerr;
using std::endl;

struct BinaryTreeNode
{
	string data;
	BinaryTreeNode * leftChild;
	BinaryTreeNode * rightChild;

	//��ʼ��
	BinaryTreeNode() : leftChild(nullptr), rightChild(nullptr)	{}
	BinaryTreeNode(string data, BinaryTreeNode* l = nullptr, BinaryTreeNode* r = nullptr)
		: leftChild(l), rightChild(r)	{}
};

/*
**	���ʽ��
*/
class BinaryTree
{
public:
	BinaryTreeNode * pRoot;
	
public:
	BinaryTree(BinaryTreeNode *root);
	BinaryTree(const BinaryTree &tree);				//�������캯��
	~BinaryTree();

public:
	void destroy(BinaryTreeNode * &root);				//������
	BinaryTreeNode * copy(BinaryTreeNode *root);	//������

	bool printTree(BinaryTreeNode *root);			//���������
	static bool compare(BinaryTreeNode *tree1, BinaryTreeNode *tree2);	//�Ƚ�������

	double calcResult();	//����������Ľ��
};
