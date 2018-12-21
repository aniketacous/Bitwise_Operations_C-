#include <iostream>

 using namespace std;

 void showBits(unsigned int n) {

 		for (int i=31;i>=0;i--)
 			if (n & (1 << i))
 				cout << "1";
 		else
 			cout << "0";

 	cout << endl;
 }
 int countBits(unsigned int n)  {
 	int count = 0;
 	while(n != 0) 	{
 		count++;
 		n &= n - 1;
 	}
 	return count;
 }
 int main(void) {

 	unsigned int a,b,c;

 	short mask = 10;

 	cout << "Enter two nonnegative integers: ";
 	cin >> a >> b;

 	cout << "         Number of bits        " << endl;
 	cout << "The number of bits in the first number is: " << countBits(a) << endl;

 	cout << "         AND Operator          " << endl;
 	cout << "Using AND operator, the value of a & b is: " << endl;
 	c = a & b;
 	showBits(c);

	cout << "         OR  Operator          " << endl;
 	cout << "Using OR  operator, the value of a | b is: " << c << endl;
 	c = a | b;
 	showBits(c);

 	cout << "         NOT Operator          " << endl;
 	cout << "Using NOT operator, the value of a is: " << c <<  endl;
 	c = ~a;
 	showBits(c);


	cout << "        Exclusive OR  Operator          " << endl;
 	cout << "Using Exclusive OR  operator, the value of a^b is: " << c <<  endl;
 	c = a^b;
 	showBits(c);


	cout << "        Bit shifting         " << endl;
 	cout << "Shifting A by B : " << endl;
 	c = a << b;
 	showBits(c);
 	cout << "Shifting B by A : " << endl;
 	c = a >> b;
 	showBits(c);


	cout << "        Masking         " << endl;
 	cout << "Masking A with mask value set at 10 : " << endl;
 	c = a & mask;
 	showBits(c);
 	cout << c << endl;
 	cout<<" Masking B with mask value set at 10 : " << endl;
 	c = b & mask;
 	showBits(c);



 return 0;
 }