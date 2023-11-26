#include<iostream>

using namespace std;
int main()
{

	string play;
	int price, product, quantity, s_taxRate,t_s_taxRate;
	do
	{
		float d = 0, t_cost;

		cout << "Enter price of product: ";
		cin >> price;

		cout << "Enter quantity of product: ";
		cin >> quantity;

		cout << "Enter salesTax rate of product: (in percentage)";
		cin >> s_taxRate;

		t_s_taxRate = (price * (s_taxRate / 100));

		if (quantity >= 10)
		{
			d = (price * 0.10);
		}

		t_cost = ((price - d) + t_s_taxRate) * quantity;

		cout << "Total cost = " << t_cost << endl;

		cout << "\nDo you want to continue(Y/N): ";
		cin >> play;
	}
	while (play == "Y" || play == "y");
	return 0;
}
