#include <iostream>
#include "../headers/dice_calc.h"

// A function just calling the dice calculation methods and interpreting results
void diceDemonstrationTest() {
    int * dicePool = new int[4]; // Assumption that there are 4 indexes to store
    // Setting demonstration values for number of each kind of dice
    int difficulty = 1;
    int challenge = 1;
    int setback = 1;
    int ability = 1;
    int proficiency = 1;
    int boost = 1;
    // Call dicePoolRoll to get result
    dicePoolRoll(difficulty , challenge, setback, ability, proficiency, boost, dicePool);
    terminalOutputResults(dicePool);

    delete [] dicePool;
}



int main() {
    diceDemonstrationTest();
    return 0;
}