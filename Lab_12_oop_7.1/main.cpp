#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int randNum() { return (std::rand() % 100); }

void print(vector<int> a)
{
	for (int i : a)
	{
		cout << i << " ";
	}
	cout << endl;
}

int search_min(vector<int> a)
{
	int elem = -1;
	for (int i = 0; i < a.size(); i++)
	{
		if (a.at(i) % 2 == 0) {
			elem = i;
			break;
		}
	}
	if (elem == -1)
		throw exception("Array doesn't have even element");
	elem = a.at(elem);
	for (int i : a)
	{
		if (i < elem && i % 2 == 0)
		{
			elem = i;
		}
	}
	return elem;
}

int main()
{
	srand(time(0));
	int n;
	cout << "n = "; cin >> n;
	vector<int> a(n);
	
	generate(a.begin(), a.end(), randNum);
	print(a);

	try
	{
		cout << "min even elem: " << search_min(a) << endl;
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}

	return 0;
}