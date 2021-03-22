#pragma once
#include <iostream>
#include <Windows.h>
#include "locale.h"

using namespace std;

class BaseVector {
protected:
	int* array;
public:
	int size;

	BaseVector() {
		size = 0;
		array = 0;
	}

	BaseVector(int size) {
		this->size = size;
		array = new int[size];
	}

	~BaseVector()
	{
		delete[] array;
	}

	virtual void push(int value)
	{
		int newSize = size + 1;
		int* result = new int[newSize];
		for (int i = 0; i < newSize - 1; i++)
			result[i] = array[i];	
		result[newSize - 1] = value;
		size = newSize;
		delete[] array;
		array = result;
	}

	virtual int getValue(int index)
	{
		return array[index];
	}

	bool isEmpty()
	{
		if (size == 0) return true;
		return false;
	}
};