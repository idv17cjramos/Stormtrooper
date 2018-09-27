#include <iostream>
#include <string>
#include "Includes.h"

void AgeInMonths();
void Operators();
void RepeatedWord();
void CruelWorld();
void Convert();
void Letter2Friend();
void SecondLetter2Friend();

void MilestoKm();
void BadNames();
void Operations();
void FloatingOperations();
void ThreeIntegers();
void ThreeStrings();
void OddOrEven();
void NumberToText();

int main()
{
	AgeInMonths();
	Operators();
	RepeatedWord();
	CruelWorld();
	Convert();
	Letter2Friend();
	SecondLetter2Friend();


	MilestoKm();
	BadNames();
	Operations();
	FloatingOperations();
	ThreeIntegers();
	ThreeStrings();
	OddOrEven();
	NumberToText();
}

void AgeInMonths()
{
	std::cout << "Please enter your first and second names\n";
	std::string first;
	std::string second;
	std::cin >> first >> second;

	std::cout << "Now enter your age\n";
	double age = 0;
	std::cin >> age;
	std::cout << "Hello, " << first << " " << second << "Also, your age is " << age * 12 << " months!" <<'\n';


}

void Operators()
{
	std::cout << "Please enter a floating-point value\n";
	double n;
	std::cin >> n;
	std::cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< std::endl;
}

void RepeatedWord()
{
	std::string previous = "";
	std::string current;
	while (std::cin >> current) {
		if (previous == current)
			std::cout << "repeated word: " << current << "\n";
		previous = current;
	}
}

/*void CruelWorld() With Error
{
	
          STRING s = "Goodbye, cruel world! "; //string should not be capitalized
          cOut << S << '\n';   //cout should not hava capital O, S =/= s

}*/

void CruelWorld()//No error
{
	std::string s = "Goodbye cruel world!!\n";
	std::cout << s << std::endl;
}

void Convert()
{
	double d;
	while (std::cin >> d) {
		int i = d;
		char c = i;
		int i2 = c;
		std::cout << "d == " << d
			<< " i == " << i
			<< " i2 == " << i2
			<< " char(" << c << ")\n";
	}
}

void Letter2Friend()
{
	std::cout << "Please type your first name" << std::endl;
	std::string FName;
	std::cin >> FName;

	std::cout << "Hey you, wassup my nigga, " << FName << std::endl;
}

void SecondLetter2Friend()
{
	std::cout << "Please type your first name" << std::endl;
	std::string FirstName;
	std::cin >> FirstName;
	
	std::cout << "Please type please type the naome of a friend of yours" << std::endl;
	std::string FriendName;
	std::cin >> FriendName;

	std::cout << "Please esnter your age" << std::endl;
	int age = 0;
	

	std::cout << "How have you been? Hope everyting is good in the barn, with the cows and stuff. " << std::endl;
	std::cout << "I love you... I mean, I miss you" << std::endl;
	std::cout << "Things have been lonely lately, you know, you leaving has been hard" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "How has " << FriendName << "been? I heard he had a bit a rough time! D:\n";
	std::cout << "I hear you just had a birthday recently and are "<< age << " years old\n";
	if (age <= 0) 
		std::cout << "You're kidding!";
	else if (age >= 110)
		std::cout << "Uso Dayo!!";
	if (age <= 12)
		std::cout << "Next year you will be " << age + 1 << std::endl;
	if (age == 17)
		std::cout << "Next year you will be able to vote.\n";
	if (age >= 70)
		std::cout << "I hope you are enjoying your retirement.\n\n";

	std::cout << "\nYours sincerely, Meme Lord Ro";

}


void MilestoKm()
{
	float miles;
	std:: cout << "Enter the number of miles to convert\n";
	std::cin >> miles;
	std::cout << miles << " miles is " << miles * 1.609 << " km" << std::endl;
}

void BadNames()
{
	int CREOQUEESTOETACONFUSO = 0;
	float x = 0;
	char caracter_sin_sentido_que_tenga_este_nombre = 'b';
	short long double int = 3.1415926489432684613496846216;
}

void Operations()
{
	int Val1;
	int Val2;

	std::cout << "Please an integer\n";
	std::cin >> Val1;

	std::cout << "Please another integer\n";
	std::cin >> Val2;
	
	//Compare size
	if (Val1 > Val2)
		std::cout << "First number is alrger than second number\n";
	else
		std::cout << "Second number is larger than first number\n";
	//Sum
	std::cout << "The sum of the numbers is " << Val1 + Val2 << std::endl;

	//Difference
	std::cout << "The first number minus the second number is" << Val1 - Val2 << std::endl;
	std::cout << "The second number minus the first number is" << Val2 - Val1 << std::endl;

	//Product
	std::cout << "The first number times the second number is" << Val2 * Val1 << std::endl;

	//Ratio
	std::cout << "The first number divided by the second number is" << Val1 / Val2 << std::endl;
	std::cout << "The second number divided by the first number is" << Val2 / Val1 << std::endl;
}

void FloatingOperations()
{
	
		double Val1;
		double Val2;

		std::cout << "Please an integer\n";
		std::cin >> Val1;

		std::cout << "Please another integer\n";
		std::cin >> Val2;

		//Compare size
		if (Val1 > Val2)
			std::cout << "First number is alrger than second number\n";
		else
			std::cout << "Second number is larger than first number\n";
		//Sum
		std::cout << "The sum of the numbers is " << Val1 + Val2 << std::endl;

		//Difference
		std::cout << "The first number minus the second number is" << Val1 - Val2 << std::endl;
		std::cout << "The second number minus the first number is" << Val2 - Val1 << std::endl;

		//Product
		std::cout << "The first number times the second number is" << Val2 * Val1 << std::endl;

		//Ratio
		std::cout << "The first number divided by the second number is" << Val1 / Val2 << std::endl;
		std::cout << "The second number divided by the first number is" << Val2 / Val1 << std::endl;
	
}

void ThreeIntegers()
{
	int Val1, Val2, Val3;

	std::cout << "Please enter three integers" << std::endl;
	std::cin >> Val1, Val2, Val3;

	if (Val1 < Val2)
	{
		if (Val2 < Val3)
			std::cout << Val1 << ',' << Val2 << ',' << Val3 << std::endl;
		else
		{
			if (Val3 < Val1)
				std::cout << Val3 << ',' << Val1 << ',' << Val2 << std::endl;
			else
				std::cout << Val1 << ',' << Val3 << ',' << Val2 << std::endl;
		}

	}
}

void ThreeStrings()
{
	std::string Val1, Val2, Val3;

	std::cout << "Please enter three strings" << std::endl;
	std::cin >> Val1, Val2, Val3;

	if (Val1 < Val2)
	{
		if (Val2 < Val3)
			std::cout << Val1 << ',' << Val2 << ',' << Val3 << std::endl;
		else
		{
			if (Val3 < Val1)
				std::cout << Val3 << ',' << Val1 << ',' << Val2 << std::endl;
			else
				std::cout << Val1 << ',' << Val3 << ',' << Val2 << std::endl;
		}

	}
}

void OddOrEven()
{
	int Val;
	std::cout << "Please enter an integer" << std::endl;
	std::cin >> Val;

	if (Val % 2 == 0)
		std::cout << "The value is an even number" << std::endl;
	else
		std::cout << "The value is an odd nomber" << std::endl;
}

void NumberToText()
{
	std::cout << "Please enter a number from 0 to 4" << std::endl;
	std::string Val;

	if (Val == "")
	{
		std::cout << "Stupid human!" << std::endl;
		std::cout << "Err.. I mean.." << std::endl;
		std::cout << "Stupid Computer!!" << std::endl;
		if (Val == "zero")
			std::cout << "The value of the number" << Val << "is 0" <<std::endl;
		else if(Val == "one")
			std::cout << "The value of the number" << Val << "is 1" << std::endl;
		else if (Val == "two")
			std::cout << "The value of the number" << Val << "is 2" << std::endl;
		else if (Val == "three")
			std::cout << "The value of the number" << Val << "is 3" << std::endl;
		else if (Val == "four")
			std::cout << "The value of the number" << Val << "is 4" << std::endl;
	}
}