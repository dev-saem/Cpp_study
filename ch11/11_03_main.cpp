#include "h_11_03.h"

int main()
{
	A obj_A;

	obj_A.SetVar(10, 20);
	obj_A.ShowVar();

	cout << "***************" << endl;

	B obj_B;
	
	obj_B.SetVar(30, 40);
	obj_B.ShowVar();
	obj_B.Show();

	return 0;
}