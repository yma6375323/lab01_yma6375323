#include<iostream>
using namespace std;

int smallest_of_two( int one, int two) {
	if (one > two)
	{
		return  two;
	}
	else
	{
		return one;
	}
}
int smallest_of_three(int one, int two,int three) {
	int small = 0;
	small = smallest_of_two(one,two);
	return smallest_of_two(small,three);
}
int main() {

	int num1, num2, num3, num4;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	int small = smallest_of_three(num1, num2, num3);
	int smallest = smallest_of_two(small,num4);
	cout << smallest << endl;
}