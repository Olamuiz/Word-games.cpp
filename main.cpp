#include <iostream>
#include <string>

using namespace std;

int main()
{

   string word_array[]={"shotgun", "holymolly", "snoopdog", "hotguns", "snoopthug",};
    int tries=0;
    int guesses_left=5;
    int leve1=1;
    string shuffle="othsung";
    int userguess(0);

    while(true)
{
        cout<<"hello guys"<<endl;
        cout<<"welcome to my guess the word game" <<endl;
        cout<<"your word is :"<<shuffle<<endl;
        cout<<"guess the word:"<<endl;
        cin>> userguess;

        if(userguess == word_array[rand()% word_array->size()])
        {
            cout<<"That's correct!"<<endl;
            leve1++;
            break;
        }
         else if(userguess == word_array[rand()% word_array->size()])
            {
            tries--;
            cout<<"wrong guess try again!\n"<<endl;
            cin>>userguess;
        }

        else{
                cout<<"You ran out of guesses.The correct answer was"<<endl;
                strand(time(NULL));
        cout<<"Would you like to play again? (Y/N)";
        cin>>userguess;
        if(userguess=='Y' || userguess=='yes')
        {
            cout<<"Starting a new game! Are you ready?\n"<<endl;

        else
        {
            cout<<"Thanks for playing."<<endl;


            }

}

        return 0;
}
}}


