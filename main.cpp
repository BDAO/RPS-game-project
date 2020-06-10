/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;

// set the char variable for the y/n while loop. I have learned since that a bool statement
    // might have been a little better for the loop
    char ch;

// set up my variables for the scores
int win = 0;
int tie = 0;
int lose = 0;

void baseRPSgame(){
    // start of game loop, the loop will run untill ch == n
    do{
        
    int choice;
    
    
    // Ask the player to choose Rock, Paper, Scissors
    cout << "Press 1 for Rock, 2 for Paper, 3 for Scissors:" << endl;
    cin >> choice;
    
    // gets a random number between 1 and 3 and tell the player what was chosen
    int ai = rand() % 3 + 1;
    cout <<  "The computer chose: " << ai << endl;
    
    // starts possible outcome sequence in rock paper scissors there are 9 possible out comes 3 wins 3 ties and 3 losses.
    if(choice == 1 && ai == 1){
         cout << "Rock meets Rock its a tie!" << endl;
         tie++;
         }
    else if(choice ==1 && ai== 2){
         cout << "Rock is covered by Paper the computer wins!." << endl;
         lose++;
         }
    else if(choice == 1 && ai == 3){
         cout << "Rock crushes Scissors you win!" << endl;
         win++;
         }
    else if(choice == 2 && ai == 1){
         cout << "Paper covers Rock you win!" << endl;
         win++;
         }
    else if(choice == 2 && ai == 2){
         cout << "Paper meets Paper its a tie!" << endl;
         tie++;
         }
    else if(choice == 2 && ai == 3){
         cout << "Paper is cut by Scissors the computer wins!" << endl;
         lose++;
         }
    else if( choice == 3 && ai == 1){
         cout << "Scissors are crushed by Rock computer wins!" << endl;
         lose++;
         }
    else if( choice == 3 && ai == 2){
         cout << "Scissors cuts Paper you win!" << endl;
         win++;
         }
    else if(choice == 3 && ai == 3){
         cout << "Scissors meet Scissors its a tie!" << endl;
         tie++;
         }
         // this is what happens if the player doesn't hit 1 2 or 3
    else{
         cout << "You didn't select 1, 2, or 3" << endl;
         }
         // displays your score so far and asks if you want to play again then clears screen
         cout << "Wins: " << win << endl;
         cout << "Ties:" << tie << endl;
         cout << "Losses:" << lose << endl;
         cout << "Would you like to play again? Y/N" << endl;
         cin >> ch;
         system("CLS");
         }while(ch == 'Y' || ch == 'y');
    //system("pause"); took this out so that the loop ends it with out you needing to hit another button
    //return 0;
    //Bug list:
    // Hitting any alphabet character when it asks for 1 2 or 3  will instantly close the program
    // Same bug happens when you enter any alphabet character except y when it asks you if you would like to play again
    // putting a number then y when asked for 1 2 or 3 will run the game then restart
    // putting y then a number when the game ask you if you want to play again will do so and chose the number automaticly
}    


// starting main function
int main(){
    
    
    // Fancy printed title, well as fancy as I can do.
    cout << "--------------------------------------" << endl;
    cout << "-- Lets play Rock, Paper, Scissors! --" << endl;
    cout << "--------------------------------------" << endl;
    
    int gm; //Game Mode var
    cout << "Win: " + win << endl;
    cout << "Ties: " + tie << endl;
    cout << "Loses: " + lose << endl;
    cout << "\n";
    
    do{
        cout << "Choose a Game mode." + lose << endl;
        cout << "\n";
        cout << "1. Regular" << endl;
        cout << "2. Manipulate (WIP)" << endl;
        cout << "3. Prattern - Hard (WIP)" << endl;
        cout << "0. quit" << endl;
        
        cin >> gm;
        
        switch(gm){
            case 1:
                baseRPSgame();
                break;
            case 2:
                cout << "Game mode under development please select another" << endl;
                break;
            case 3:
                cout << "Game mode under development please select another" << endl;
                break;
        }    
        
    }while(gm != 0);
        
    return 0;
}
