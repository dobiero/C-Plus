//Author Daniel Obiero
//This program inputs Roman numerals and outputs the decimal value of each expressioin.

#include <iostream>
using namespace std;

typedef int boolean; //Define boolean as a synonym for int
const int TRUE = 1;
const int FALSE = 0;
int DecEquiv(char[]); //Dec Equiv Funciton prototype
void PrintValue(int, char, int); //Print Value Function prototype
void Convert(char[], int&, boolean&); //Convert Function prototype

int main()
{
	char str1[31]; //First roman numeral string
	char str2[31]; //Second roman numeral string
	char op; //operator within expression
	int dec1; //Decimal value of first operand
	int dec2; //Decimal value of second operand
	boolean str1Valid; //First string validity
	boolean str2Valid; //Second string validity
	boolean opValid; //Operator Validity

	cout << "ENTER Roman Numeral Expression PER LINE with Operand in the second line:\n";
	while (cin >> str1)
	{
		cin >> op >> str2;
		Convert(str1, dec1, str1Valid);
		Convert(str2, dec2, str2Valid);
		opValid = (op == '+' || op == '-' || op == '*' || op == '/');
		if (str1Valid && str2Valid && opValid)
			PrintValue(dec1, op, dec2);
		else
		{
			cout << "BAD DATA \n\n";
			cout << "Roman Numeral Expression:\n";
		}
		system("pause");
		return 0;
	}
}
	void Convert(char str[], int& decVal, boolean& strValid)
	{
		//****STUB****
		cout << "*** Convert Routine Entered*** \n";
		decVal = DecEquiv(str);
		strValid = (decVal > 0);
	}

	void PrintValue(int dec1, char op, int dec2)
	{
		//*****STUB*****
		cout << "*** PrintValue Routine Entered ** \n";
		//cout << "dec1=" << dec1 << " op=" << op << "dec2=" << dec2 << "\n\n";
		cout << "Decimal Value: ";
		switch (op)
		{
		case '+': cout << dec1 + dec2;
			break;

		case '-': cout << dec1 - dec2;
			break;

		case'*': cout << dec1 * dec2;
			break;

		case '/': cout << float(dec1) / float(dec2);
			break;
		default:cout << "Enter an Operand";
			break;
		}
		cout << "\n\n";
	}

	int DecEquiv(char str[])
	{
		boolean dataValid = TRUE;
		int intSum = 0;
		int i = 0;

		while (dataValid && str[i] != '\0')
		{
			switch (str[i])
			{
			case 'C':intSum += 100;
				break;

			case 'L': intSum += 50;
				break;

			case 'X': intSum += 10;
				break;

			case 'V': intSum += 5;
				break;

			case 'I': intSum += 1;
				break;

			default: dataValid = FALSE;
				break;
			}
			i++;
		}
		return (dataValid ? intSum : 0);
	}

