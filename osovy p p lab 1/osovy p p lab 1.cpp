#include <iostream>
using namespace std;
int main() {
	int m;
	cout << "mode 0 to number / 1 to name mode:";
	cin >> m;
	int n; if (m<0.5) {
		cout << "Enter number!\nnumber(0>n<10):";
		cin >> n;
	}
	else {
		cout << "Enter name number:";
		cin >> n; n = n / 5 + 5;
		cout << "warning number(0>n<10)";
	}
		





		/*запобіжник неправильних чисел*/
		if (n <= 0) { n = n * -1; }
		if (n > 0 && n < 10) { cout << "number=" << n << "\n"; }
		if (n > 10) { n = 10; cout << "number=" << n << "\n"; }


		int s = 0;
		for (; s < n; s++)
		{
			for (int i = 0; i < n - s - 1; i++)
			{
				cout << " ";
			};
			for (int i = 0; i < s + 1; i++)
			{
				cout << s;
			};
			for (int i = 0; i < s; i++)
			{
				cout << "*";
			}
			cout << "\n";
		}
		
	}

/*
 ####0
 ###11*
 ##222**
 #3333***
 44444****
*/