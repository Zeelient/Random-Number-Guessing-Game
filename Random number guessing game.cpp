// Chapter 5, Programming Challenge 20: Random Number Guessing Game
// 
// Objective:
// Name:
// Date: 
//

#include <iostream>
#include <cstdlib>	// Needed for rand and srand
#include <ctime>	// Needed for the time function
using namespace std;

int main()
{
	int correctAnswer, input, tries = 0;

    unsigned seed = time(0);

    srand(seed);

    correctAnswer = rand() % 100 + 1;

    do
    {
      cout << "Choose a number between 1 and 100" << endl;

      cout <<"Your guess:";
        cin >> input;
        tries++;

        if(input < 1 || input > 100)
            cout<<"Keep answer between 1 and 100"<< endl;
        else if(input > correctAnswer)       
            cout << "Too high, try again" << endl;      
        else if(input < correctAnswer)       
        cout << "Too low, try again" << endl;
        else
            cout <<"your answer is correct, it took you " << tries << " tries";
        }
   while (input != correctAnswer);
    return 0;
 } 




