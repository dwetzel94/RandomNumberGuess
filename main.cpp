#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std ;

int main()
{
    srand(time(NULL)) ;
    int randomNumber = (rand() % 35) + 1 ;
    int chances ;
    int myGuess ;
    cout << "I'm thinking of a number between 1 and 35. How many chances do you want to guess it?" << endl ;
    cin >> chances ;
    cout << "Alright! You get " << chances << " chances to guess my magical number. Let's begin." << endl ;

    for(int i = 0; i < chances; i ++)
    {
        cout << "Guess # " << i + 1 << ": " ;
        cin >> myGuess ;

        if(myGuess > 35)
        {
            cout << "Nibba what are you smoking? It's between 1 and 35... but " ;
        }

        if(myGuess == randomNumber)
        {
            cout << "Congrats! You guessed right. My magical number was " << randomNumber << endl ;
            break ;
            system("pause") ;
            return 0 ;
        }
        else if(myGuess != randomNumber)
        {
            if(myGuess < randomNumber)
            {
                cout << "Oops, too low. Guess again." << endl ;
            }
            if(myGuess > randomNumber)
            {
                cout << "Too high my nibba. Try again." << endl ;
            }
        }
    }

    if(myGuess != randomNumber)
        {
            cout << "Oof, I'm afraid you ran out of chances to guess my magical number. My number was " << randomNumber << "." << endl ;
        }

    //system("pause") ;
    return 0 ;

}
