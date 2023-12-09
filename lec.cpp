#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to simulate a cricket match between a player and a computer
void playSinglePlayerCricket()
{
    int playerTotalScore = 0;
    int computerTotalScore = 0;
    int overs = 1;

    // Simulating each ball of the match
    for (int ball = 1; ball <= 6 * overs; ++ball)
    {
        // Player's turn
        cout << "Over " << overs << ", Ball " << ball << " (Player's turn): ";
        int playerRun;
        cout << "Enter runs (0 to end innings): ";
        cin >> playerRun;

        // If the player enters 0, end the innings
        if (playerRun == 0)
        {
            cout << "Innings ended by player. Total score: " << playerTotalScore << " runs." << endl;
            break;
        }

        // Validate the player's input (runs should be between 0 and 6)
        if (playerRun < 0 || playerRun > 6)
        {
            cout << "Invalid input! Please enter runs between 0 and 6." << endl;
            --ball;  // Decrement the ball count to repeat the current ball
            continue;
        }

        playerTotalScore += playerRun;

        // Computer's turn
        cout << "Over " << overs << ", Ball " << ball << " (Computer's turn): ";
        int computerRun = rand() % 7; // Simulating computer's run (0 to 6)
        cout << "Computer runs: " << computerRun << endl;

        computerTotalScore += computerRun;
    }

    // Display the total scores
    cout << "Player's total score: " << playerTotalScore << " runs." << endl;
    cout << "Computer's total score: " << computerTotalScore << " runs." << endl;

    // Determine the winner
    if (playerTotalScore > computerTotalScore)
    {
        cout << "Player wins!" << endl;
    }
    else if (playerTotalScore < computerTotalScore)
    {
        cout << "Computer wins!" << endl;
    }
    else
    {
        cout << "It's a tie!" << endl;
    }
}

int main()
{
    // Seed the random number generator with the current time
    srand(static_cast<unsigned>(time(0)));

    cout << "Welcome to the Single Player Cricket Game!" << endl;

    // Simulate a cricket match between the player and the computer
    playSinglePlayerCricket();

    cout << "Game Over!" << endl;

    return 0;
}
