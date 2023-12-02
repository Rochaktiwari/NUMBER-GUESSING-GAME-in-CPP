// NUMBER GUESSING GAME
#include <iostream>
#include <cstdlib> 
using namespace std;

int main() 
{
        int randomnumber=rand();
        int guess=0,attempts=0;
        cout<<"Guess the Number Game:"<<endl;
        while (guess!=randomnumber)
        {
                cout<<"Enter your guess (between 1 and 100): ";
                cin>>guess;
                attempts++;
                if (guess<randomnumber)
                {
                        cout<<"Too low! Try again:"<<endl;
                } 
                else 
                {
                        if (guess>randomnumber) 
                        {
                                cout<<"Too high! Try again:"<<endl;
                        } 
                        else
                        {
                                cout<<"Congratulations! You guessed the number "<<randomnumber<<" in "<<attempts<<" attempts:"<<endl;
                        }
                }
        }
        return 0;
}