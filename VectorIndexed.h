#pragma once
#include "BaseVector.h"

class VectorIndexed : public virtual BaseVector
{

public:
	VectorIndexed() : BaseVector() {}
	int getValue(int index)
	{
		if (index < 0 || index >= size)
		{
			cout << "\nIndex out of range\n";
			return 0;
		}
		return array[index];
	}
};