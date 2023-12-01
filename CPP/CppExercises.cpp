#include <iostream>
using namespace std;

int main()
{
	
	//Swap two Numbers//
	int a,b,temp;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"\nEnter the second number:";
	cin>>b;
	temp = a;
	a = b;
	b = temp;
	cout<<"After Swapping:\na:"<<a<<"\tb:"<<b;

	
	//Summation of Two Numbers
	int a,b,sum=0;
	cout<<"Enter First Number";
	cout<<"enter Second Number";
	cin>>a>>b;
	sum = a+b;
	cout<<"Sum of Two Numbers is:"<<sum;
	
	
	//Division with Remainder and Quotient
	int no;
	int rem,que,div;
	cout<<"Enter the Number:";
	cin>>no;
	cout<<"\nEnter the Dividend:";
	cin>>div;
	rem = no%div;
	que = no/div;
	cout<<"\nRemainder is:"<<rem;
	cout<<"\nQuotient is:"<<que;
	
	
	//Print size using 'sizeof'
	int n;
	float f;
	char ch;
	double d;
	cout<<"Size of Integer is:"<<sizeof(int);
	cout<<"\nSize of Float is:"<<sizeof(float);
	cout<<"\nSize of Character is:"<<sizeof(char);
	cout<<"\nSize of Double is:"<<sizeof(double);
	
	
	
	//Print ASCII Value of Characaters//
	char x;
	cout<<"Enter the Character:";
	cin>>x;
	cout<<"ASCII value="<<int(x);
	
	
	//Simple Multiplication//
	int a,b,mult;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"\nEnter the second number:";
	cin>>b;
	mult = a*b;
	cout<<"\nMultiplication of two numbers are:"<<mult;

	//Calculate Factorial
	int n;
    cout << "Enter a number: ";
    cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; ++i)
    {
        factorial *= i;
    }
    cout << "Factorial of " << n << " is: " << factorial << endl;



    //Check Palindrome Number
	int num, originalNum, reversedNum = 0;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;
    while (num != 0)
    {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    if (originalNum == reversedNum)
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }


	//Find the Largest Number
	int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    cout << "The largest number is: " << largest << endl;


	return 0;
}
