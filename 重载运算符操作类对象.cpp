#include <iostream>
using namespace std;
class PhoneNumber
{
	friend ostream &operator << (ostream &, const PhoneNumber &);
	friend istream &operator >> (istream &,  PhoneNumber &);
	private:
	int m_iX;	
};



ostream &operator << (ostream &output, const PhoneNumber &number)
{
	output << number.m_iX;
	return output;
}

istream &operator >> (istream &input,  PhoneNumber &number)
{
	input >> number.m_iX;
	return input;
}



int main()
{
	PhoneNumber phone;
	cin >> phone;
	cout << phone;
}
