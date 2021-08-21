#include<iostream>

using namespace std;

int main()
{
	int n, counter=1, sum = 0,num;
	cout << "How many numbers you wanna input: ";
	cin >> n;
	while (counter <= n)
	{

		cout << "Enter the numbers : ";
		cin >> num;
		sum = sum + num;
		counter++;
	}
	cout << "\nSum of "<<n<<" numbers you input is : " << sum;

	return 0;
}