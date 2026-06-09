#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int random_number, guess, attempts = 0;

    srand(time(0)); // random number generator
    random_number = rand() % 100 + 1; // number between 1 and 100

    cout << "----- NUMBER GUESSING GAME -----" << endl;
    cout << "Guess a number between 1 and 100" << endl;

    while(true)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if(guess > random_number)
        {
            cout << "Too High! Try Again." << endl;
        }
        else if(guess < random_number)
        {
            cout << "Too Low! Try Again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number." << endl;
            cout << "Number of attempts = " << attempts << endl;
            break;
        }
    }

    return 0;
}