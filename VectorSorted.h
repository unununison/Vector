#pragma once
#include "BaseVector.h"

class VectorSorted : public virtual BaseVector
{
private: 
	void sort()
	{
		int tmp = 0;
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - i - 1; j++) {
				if (array[j] > array[j + 1]) {
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
				}
			}
		}
	}
public:
	VectorSorted() : BaseVector() {}
	virtual void push(int value) 
	{
		BaseVector::push(value);
		sort();
	}	
};