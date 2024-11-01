// Mingyang Michelle Yin
// Nov.1, 2024
// Lab 7

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main () 
{
        // Creates and reads the files
    ifstream inFile;

    inFile.open("game_scores.txt"); // open file

        // Declaring varables
    string name; // player name
    double score1;
    double score2;
    double score3;
    double finalScore;
    int i = 0; // amount of cycles

    for (i=0; i<3; i++) // runs only 3 times
    {
        inFile >> name >> score1 >> score2 >> score3; // reads the player's name and also scores
        score1 = (score1/10)*2; // makes it 20% of the average
        score2 = (score2/10)*3; // makes it 30% of the average
        score3 = (score3/10)*5; // makes it 50% of the average
        finalScore = score1 + score2 + score3; // adds the number together
        
        if (finalScore > 2000) // if more then 2000 tell the user they are an expert
        {
            cout << name << ": Congrats! You are an Expert! Score: " << finalScore << endl;
        }
        else if (finalScore < 2000 || finalScore >= 1800) // if between 1999 and 1800 tell the user that they are a master
        {    
            cout << name << ": Master - Good Job! Score: " << finalScore << endl;
        }
        else if (finalScore < 1800 || finalScore >= 1500) // if between 1500 and 1799 tell the user that they are advanced
        {
            cout << name << ": Advanced - Good Job! Score: " << finalScore << endl;
        }        
        else if (finalScore < 1500 || finalScore >= 1000) // if between 1000 and 1499 tell the user that they are intermediate
        {
            cout << name << ": Intermediate Score: " << finalScore << endl;
        }
        else // if less than 1000 tell the user that they are a beginner
        {
            cout << name << ": Beginner - Keep Practicing! Score: " << finalScore << endl;
        }
    }
    
    inFile.close(); // close file

    return 0;
}
/*

        //OUTPUT//

    Jay: Master - Good Job! Score: 1967
    Jace: Congrats! You are an Expert! Score: 2166.3
    James: Master - Good Job! Score: 1610.8

*/

// Things I was unsure about / questions
// 1: I used a for statement since it said that there where 3 players, would a while statment be wrong?
// 2: Did we need to output the data into another file?
// 3: Were we suposed to show the final scores to the the user?
// 4: How were we suposed to split the "2000 - 1800" correctly?