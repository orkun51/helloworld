
//Hello World in C++
#include <iostream>
using namespace std;

int main() 
{
	
	cout << "Hello World \t";
	cout << "I am going learn C++";
	//  "\n\n" using for blank also we can use end1;
	cout << "Hello World \n";
	cout << "It is fun yeyy :)";
	//return 0; -> It shows that function end.
	

	/*
		################################################
		\t	Creates a horizontal tab
		\\	Inserts a backslash character(\)
		\"	Inserts a double quote character
		################################################
	*/

	/*
	################################################
					VARIABLES
	################################################
	*/
	int myNum = 5;               // Integer (whole number without decimals)
	double myFloatNum = 5.99;    // Floating point number (with decimals)
	char myLetter = 'D';         // Character
	string myText = "Hello";     // String (text)
	bool myBoolean = true;       // Boolean (true or false)

	//Declaring multiple variable
	int a = 10,b = 5;

	cout << myNum <<endl;
	cout << myFloatNum <<endl;
	cout << myLetter <<endl;
	cout << myText <<endl;
	cout << myBoolean <<endl;

	cout << "My number is " << myNum << endl ;

	/*
	################################################
					OPERATIONS
	################################################
	*/

	double d1 = myNum + myFloatNum; //declare a variable for addition
	double d2 = myNum - myFloatNum;
	double d3 = myNum * myFloatNum;
	double d4 = myNum / myFloatNum;
	
	cout << d1 << endl;

	const int minutesPerHour = 60; //const means unchangeable

	/*
	################################################
					OPERATORS
	################################################

		++	Increment	Increases the value of a variable by 1	++x	
		--	Decrement	Decreases the value of a variable by 1	--x	

		################################################

		=	x = 5	x = 5
		+=	x += 3	x = x + 3
		-=	x -= 3	x = x - 3
		*=	x *= 3	x = x * 3
		/=	x /= 3	x = x / 3
		%=	x %= 3	x = x % 3
		&=	x &= 3	x = x & 3
		|=	x |= 3	x = x | 3
		^=	x ^= 3	x = x ^ 3
		>>=	x >>= 3	x = x >> 3
		<<=	x <<= 3	x = x << 3

		################################################

		==	Equal to	x == y
		!=	Not equal	x != y
		>	Greater than	x > y
		<	Less than	x < y
		>=	Greater than or equal to	x >= y
		<=	Less than or equal to	x <= y

		################################################

		&& 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10
		|| 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4		
		!	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)

	*/
	


	return 0;

}