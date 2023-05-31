#include <iostream>
using namespace std;

class My
{
public:
	static int i;
	int intc()
	{
		i++;
		return i;
	}
};
 int My::i = 0;
int main()
{
	My m;
	for (int j = 0; j <= 2; j++)
	{
		cout << m.intc() << endl;
	}
}