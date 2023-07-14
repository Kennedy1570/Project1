/*
Kennedy Eziolise
*/

///Libraries imported
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int rolls;
    cout << "Enter number of rolls: ";
    cin >> rolls;
    cout << "Simulating " << rolls << " rolls." << endl;

    int arrDice[13];
    srand(time(0));

/// @brief function that creates array and makes all elements 0
/// @return nothing
/// arrDice(array)
for(int i = 0; i < 13; i++)
{
    arrDice[i] = 0;
}

/// @brief Function to simulate rolls and generate random numbers from rolls
/// @return nothing
for(int i = 0; i <= rolls; i++)
{
    int dice1 = rand() % 6;
    int dice2 = rand() % 6;
    int total = dice1 + dice2;
    arrDice[total]++;
}

/// @brief function to print put how many times 
///each element of arrDice was rolled
/// @return nothing
for(int i = 2; i <= 12; i++)
{
    cout << i << " was rolled " << arrDice[i] << " time(s)." << endl;
}
    
    return 0;
}