#include <iostream>
#include <iomanip>
using namespace std;

int total = 0;
void game_header();
void user_name();
void Question1();
void Question2();
void Question3();
void Question4();
void Question5();
void Question6();
void Question7();
void Question8();
void Question9();
void Question10();
void score();
void game_footer();
void repeat();

int main()
{
	user_name();
	game_header();
	Question1();
	Question2();
	Question3();
	Question4();
	Question5();
	Question6();
	Question7();
	Question8();
	Question9();
	Question10();
	score();
	game_footer();
	repeat();
	return 0;

}

void game_header() // function displays an appealing header at the top of the game
{
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout << setw(35);
	cout << "QUIZ GAME";
	cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
}

void user_name() // function receives the user's name as input in order to use it in the welcoming sentence
{
	string Name;
	cout << "Please Enter Your Name : ";
	cin >> Name;
	cout << "Welcome " << Name << "!" << endl;
}



void Question1() /* function prints question 1 of the quiz with its options
It also checks the user's input validity.
If it is not a valid option, the function gives an error message and loops till the user enters a valid option.
Then it checks whether the option is correct or not, and prints a message accordingly, adding 10 to the total score if correct*/
{
	char answer1;
	cout << "Q1. Who invented C++?" << endl;
	cout << "a. Dennis Ritchie" << endl;
	cout << "b. Ken Thompson" << endl;
	cout << "c. Bjarne Stroustrup" << endl;
	cin >> answer1;
	if (answer1 == 'a' || answer1 == 'b' || answer1 == 'c')
	{
		if (answer1 == 'c')
		{
			total += 10;
			cout << "Great! Your game score is: " << total << "\n" << endl;
		}
		else
			cout << "Incorrect :( Your game score is: " << total << "\n" << endl;
	}
	else
	{
		cout << "Invalid choice. Try again! \n" << endl;
		Question1();
	}
	//first if/else statement ensures the user is inputting a character from the options. 
	//second if/else statement checks the answer; either adds 10 points to total score if correct, or informs user that answer is incorrect
}

void Question2() /* function prints question 2 of the quiz with its options
It also checks the user's input validity.
If it is not a valid option, the function gives an error message and loops till the user enters a valid option.
Then it checks whether the option is correct or not, and prints a message accordingly, adding 10 to the total score if correct.*/
{
	char answer2;
	cout << "Q2. What is C++?" << endl;
	cout << "a. C++ is an object oriented programming language" << endl;
	cout << "b. C++ is a procedural programming language" << endl;
	cout << "c. C++ supports both procedural and object oriented programming languages" << endl;
	cin >> answer2;
	if (answer2 == 'a' || answer2 == 'b' || answer2 == 'c')
	{
		if (answer2 == 'c')
		{
			total += 10;
			cout << "Great! Your game score is: " << total << "\n" << endl;
		}
		else
			cout << "Incorrect :( Your game score is: " << total << "\n" << endl;
	}
	else
	{
		cout << "Invalid choice. Try again! \n" << endl;
		Question2();
	}
	// first if/else statement ensures the user is inputting a character from the options. 
	// second if/else statement checks the answer; either adds 10 points to total score if correct, or informs user that answer is incorrect
}

void Question3() /* function prints question 3 of the quiz with its options
It also checks the user's input validity.
If it is not a valid option, the function gives an error message and loops till the user enters a valid option.
Then it checks whether the option is correct or not, and prints a message accordingly, adding 10 to the total score if correct.*/
{
	char answer3;
	cout << "Q3. Which of the following is used for comments in C++?" << endl;
	cout << "a. /* comment */" << endl;
	cout << "b. both //comment or /* comment */" << endl;
	cout << "c. //comment" << endl;
	cin >> answer3;
	if (answer3 == 'a' || answer3 == 'b' || answer3 == 'c')
	{
		if (answer3 == 'b')
		{
			total += 10;
			cout << "Great! Your game score is: " << total << "\n" << endl;
		}
		else
			cout << "Incorrect :( Your game score is: " << total << "\n" << endl;
	}
	else
	{
		cout << "Invalid choice. Try again! \n" << endl;
		Question3();
	}
	// first if/else statement ensures the user is inputting a character from the options. 
	// second if/else statement checks the answer; either adds 10 points to total score if correct, or informs user that answer is incorrect
}

void Question4() /* function prints question 4 of the quiz with its options
It also checks the user's input validity.
If it is not a valid option, the function gives an error message and loops till the user enters a valid option.
Then it checks whether the option is correct or not, and prints a message accordingly, adding 10 to the total score if correct.*/
{
	char answer4;
	cout << "Q4. Which of the following correctly declares an array C++?" << endl;
	cout << "a. int array [10];" << endl;
	cout << "b. array array[10];" << endl;
	cout << "c. int array;" << endl;
	cin >> answer4;
	if (answer4 == 'a' || answer4 == 'b' || answer4 == 'c')
	{
		if (answer4 == 'a')
		{
			total += 10;
			cout << "Great! Your game score is: " << total << "\n" << endl;
		}
		else
			cout << "Incorrect :( Your game score is: " << total << "\n" << endl;
	}
	else
	{
		cout << "Invalid choice. Try again! \n" << endl;
		Question4();
	}
	// first if/else statement ensures the user is inputting a character from the options. 
	// second if/else statement checks the answer; either adds 10 points to total score if correct, or informs user that answer is incorrect
}

void Question5() /* function prints question 5 of the quiz with its options
It also checks the user's input validity.
If it is not a valid option, the function gives an error message and loops till the user enters a valid option.
Then it checks whether the option is correct or not, and prints a message accordingly, adding 10 to the total score if correct.*/
{
	char answer5;
	cout << "Q5. Why are comments used?" << endl;
	cout << "a. Increase the size of the executable program" << endl;
	cout << "b. To help others read and understand the program" << endl;
	cout << "c. Make a program compile easier" << endl;
	cin >> answer5;
	if (answer5 == 'a' || answer5 == 'b' || answer5 == 'c')
	{
		if (answer5 == 'b')
		{
			total += 10;
			cout << "Great! Your game score is: " << total << "\n" << endl;
		}
		else
			cout << "Incorrect :( Your game score is: " << total << "\n" << endl;
	}
	else
	{
		cout << "Invalid choice. Try again! \n" << endl;
		Question5();
	}
	// first if/else statement ensures the user is inputting a character from the options. 
	// second if/else statement checks the answer; either adds 10 points to total score if correct, or informs user that answer is incorrect
}

void Question6() /* function prints question 6 of the quiz with its options
It also checks the user's input validity.
If it is not a valid option, the function gives an error message and loops till the user enters a valid option.
Then it checks whether the option is correct or not, and prints a message accordingly, adding 10 to the total score if correct.*/
{
	char answer6;
	cout << "Q6. Which of the following is used to terminate the function declaration in C++?" << endl;
	cout << "a. ;" << endl;
	cout << "b. ]" << endl;
	cout << "c. )" << endl;
	cin >> answer6;
	if (answer6 == 'a' || answer6 == 'b' || answer6 == 'c')
	{
		if (answer6 == 'a')
		{
			total += 10;
			cout << "Great! Your game score is: " << total << "\n" << endl;
		}
		else
			cout << "Incorrect :( Your game score is: " << total << "\n" << endl;
	}
	else
	{
		cout << "Invalid choice. Try again! \n" << endl;
		Question6();
	}
	// first if/else statement ensures the user is inputting a character from the options. 
	// second if/else statement checks the answer; either adds 10 points to total score if correct, or informs user that answer is incorrect
}

void Question7() /* function prints question 7 of the quiz with its options
It also checks the user's input validity.
If it is not a valid option, the function gives an error message and loops till the user enters a valid option.
Then it checks whether the option is correct or not, and prints a message accordingly, adding 10 to the total score if correct.*/
{
	char answer7;
	cout << "Q7. Identify the correct function from which the execution of C++ program starts?" << endl;
	cout << "a. new()" << endl;
	cout << "b. start()" << endl;
	cout << "c. main()" << endl;
	cin >> answer7;
	if (answer7 == 'a' || answer7 == 'b' || answer7 == 'c')
	{
		if (answer7 == 'c')
		{
			total += 10;
			cout << "Great! Your game score is: " << total << "\n" << endl;
		}
		else
			cout << "Incorrect :( Your game score is: " << total << "\n" << endl;
	}
	else
	{
		cout << "Invalid choice. Try again! \n" << endl;
		Question7();
	}
	// first if/else statement ensures the user is inputting a character from the options. 
	// second if/else statement checks the answer; either adds 10 points to total score if correct, or informs user that answer is incorrect
}

void Question8() /* function prints question 8 of the quiz with its options
It also checks the user's input validity.
If it is not a valid option, the function gives an error message and loops till the user enters a valid option.
Then it checks whether the option is correct or not, and prints a message accordingly, adding 10 to the total score if correct.*/
{
	char answer8;
	cout << "Q8. Using which of the following data types can 19.54 be represented?" << endl;
	cout << "a. void" << endl;
	cout << "b. int" << endl;
	cout << "c. double" << endl;
	cin >> answer8;
	if (answer8 == 'a' || answer8 == 'b' || answer8 == 'c')
	{
		if (answer8 == 'c')
		{
			total += 10;
			cout << "Great! Your game score is: " << total << "\n" << endl;
		}
		else
			cout << "Incorrect :( Your game score is: " << total << "\n" << endl;
	}
	else
	{
		cout << "Invalid choice. Try again! \n" << endl;
		Question8();
	}
	// first if/else statement ensures the user is inputting a character from the options. 
	// second if/else statement checks the answer; either adds 10 points to total score if correct, or informs user that answer is incorrect
}

void Question9() /* function prints question 9 of the quiz with its options
It also checks the user's input validity.
If it is not a valid option, the function gives an error message and loops till the user enters a valid option.
Then it checks whether the option is correct or not, and prints a message accordingly, adding 10 to the total score if correct.*/
{
	char answer9;
	cout << "Q9. Which of the following loops is the best when we know the number of iterations?" << endl;
	cout << "a. While loop" << endl;
	cout << "b. For loop" << endl;
	cout << "c. Do while" << endl;
	cin >> answer9;
	if (answer9 == 'a' || answer9 == 'b' || answer9 == 'c')
	{
		if (answer9 == 'b')
		{
			total += 10;
			cout << "Great! Your game score is: " << total << "\n" << endl;
		}
		else
			cout << "Incorrect :( Your game score is: " << total << "\n" << endl;
	}
	else
	{
		cout << "Invalid choice. Try again! \n" << endl;
		Question9();
	}
	// first if/else statement ensures the user is inputting a character from the options. 
	// second if/else statement checks the answer; either adds 10 points to total score if correct, or informs user that answer is incorrect
}

void Question10() /* function prints question 10 of the quiz with its options
It also checks the user's input validity.
If it is not a valid option, the function gives an error message and loops till the user enters a valid option.
Then it checks whether the option is correct or not, and prints a message accordingly, adding 10 to the total score if correct.*/
{
	char answer10;
	cout << "Q10. Identify the correct example for a pre-increment operator?" << endl;
	cout << "a. ++n" << endl;
	cout << "b. n++" << endl;
	cout << "c. --n" << endl;
	cin >> answer10;
	if (answer10 == 'a' || answer10 == 'b' || answer10 == 'c')
	{
		if (answer10 == 'a')
		{
			total += 10;
			cout << "Great! Your game score is: " << total << "\n" << endl;
		}
		else
			cout << "Incorrect :( Your game score is: " << total << "\n" << endl;
	}
	else
	{
		cout << "Invalid choice. Try again! \n" << endl;
		Question10();
	}
	// first if/else statement ensures the user is inputting a character from the options. 
	// second if/else statement checks the answer; either adds 10 points to total score if correct, or informs user that answer is incorrect
}

void score() // function outputs a message to the user according to the final total score 
{
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout << setw(35);
	cout << "RESULTS";
	cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	if (total == 100)
		cout << "No cheating..... You have done this earlier also. Your score is 100" << endl;
	else if (total == 90)
		cout << "You are extremely intelligent! Your score is 90" << endl;
	else if (total == 80)
		cout << "You are intelligent! Your score is 80" << endl;
	else if (total == 50 || total == 60 || total == 70)
		cout << "You are average. Your score is " << total << ". Better luck next time!" << endl;
	else
		cout << "Sorry!!..... Not even 5 questions were answered correctly" << endl;
}

void game_footer() // function displays an appealing footer at the bottom of the game 
{
	cout << endl;
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout << setw(35);
	cout << "Thank you for playing!";
	cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
}

void repeat() // function allows user to repeat the entire quiz, disregarding the original answers and total score
{
	int main();
	char repeat;
	cout << "Enter 'Y' or 'y' to repeat! Any other character will end the quiz." << endl;
	cin >> repeat;

	while (repeat == 'Y' || repeat == 'y')
	{
		total = 0;
		main();
	}
}
