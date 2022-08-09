#pragma once
#include<iostream>
class Arr
{
public:
	int staticArray[5]{0};
	int* arr = new int(10);
	int size = sizeof(staticArray) / sizeof(int);
	int count = 0;

	void push_back(int item);
	int getItem(int index);
	void setValue(int index, int value);
	void clear();
};

