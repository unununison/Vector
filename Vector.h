#pragma once
#include "VectorIndexed.h"
#include "VectorSorted.h"

class Vector :public VectorIndexed, public VectorSorted
{
public:
	Vector() : BaseVector(), VectorIndexed(), VectorSorted() {}
	virtual void push(int value)
	{
		VectorSorted::push(value);
	}
};