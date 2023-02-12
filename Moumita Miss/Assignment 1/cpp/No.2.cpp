#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>

using namespace std;
int main()
{
    string words[] = { "award", "await", "attend", "bubble", "coding","spring", "mango", "night", "orange", "reward"};
    int choice=0,length_of_word=0,chance=0;
    char guess;
    string the_word;
    srand(time(0));
    choice=rand()%10;//to choose the Index
    the_word=words[choice];//just saving the chosen word.
    cout<<" "<<the_word<<"\n";//delete this line after the program runs
    length_of_word=words[choice].length();//finding the length of the word.
    char guessed[length_of_word];//character array to match the string.

    for(int i=0;i<length_of_word;i++)//making the array "_".
    {
        guessed[i]='_';
        cout<<" "<<guessed[i];//printing the first line.
    }
    for(chance=0;chance<length_of_word+2;chance++)
    {
        bool sear=true;
        for(int i=0;i<length_of_word;i++)
        {
            if(guessed[i]!=the_word[i])//Checking the array match with the string or not.
            {
                sear=false;
                break;
            }
        }

        if(sear==true)
        {
            cout<<"\nCorrect guess!";
            break;
        }
        else
        {
            cout<<"\nGuess a letter: ";
            cin>>guess;
            for(int i=0;i<length_of_word;i++)
            {
                if(guess==the_word[i])
                {
                    guessed[i]=guess;//saving the letter of the index if matched with the string.
                }
            }
            for(int i=0;i<length_of_word;i++)//printing the character array.
            {
                cout<<" "<<guessed[i];
            }
        }

    }
    if(chance==length_of_word+2)//if the chance runs out then the message prints.
    {
        cout<<"\nThe correct word was "<<the_word;
    }

    return 0;
}
