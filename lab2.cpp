//#pragma warning( disable : 6386 )
#include "Vector.h"

int main()
{
	Vector vector;
	vector.push(15);
	vector.push(1000);
	vector.push(137);
	vector.push(0);
	vector.push(228);
	vector.push(322);
	for (int i = 0; i < vector.size; i++)
		cout << vector.getValue(i) << ' ';
	
	int key;
	cout << "\nEnter element  key: ";
	cin >> key;
	cout << "\nElement value with key " << key << " = " << vector.getValue(key) << '\n';
	system("pause");
	return 0;
}

