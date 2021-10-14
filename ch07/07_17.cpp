#include <iostream>
using namespace std;

int main()
{
	int a[10], i = 0;

	while (i < 10)
	{
		a[i] = i + 1;
		i++;
	}
	
	for (i = 0; i <= 9; i++)
		cout << "a[" << i << "] = " << a[i] << "\n";

	return 0;
}