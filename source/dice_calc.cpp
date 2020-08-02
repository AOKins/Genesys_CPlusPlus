#include <chrono>
#include <random>
#include "../headers/dice_calc.h"

// simulate rolling a boost die
// input: output pointer array of length three for the 6 types of results in three categories to store (SUCCESS/ADVANTAGE/TRIUMPH)
// output: output contains values of result according to rulebook
void rollBoost(int * output) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 rng(seed);
    // Get result of a random number between 0 and 5 (6 sides)
    // Refer to page 10 of the core rulebook
    switch(rng() % 6) {
        case (0):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (1):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (2):
            output[SUCCESS] = 1;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (3):
            output[SUCCESS] = 1;
            output[ADVANTAGE] = 1;
            output[TRIUMPH] = 0;
        case (4):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 2;
            output[TRIUMPH] = 0;
        case (5):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 1;
            output[TRIUMPH] = 0;
    }
}

// simulate rolling a setback die
// input: output pointer array of length three for the 6 types of results in three categories to store (SUCCESS/ADVANTAGE/TRIUMPH)
// output: output contains values of result according to rulebook
void rollSetback(int * output) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 rng(seed);
    // Get result of a random number between 0 and 5 (6 sides)
    // Refer to page 10 of the core rulebook
    switch(rng() % 6) {
        case (0):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (1):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (2):
            output[SUCCESS] = -1;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (3):
            output[SUCCESS] = -1;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (4):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = -1;
            output[TRIUMPH] = 0;
        case (5):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = -1;
            output[TRIUMPH] = 0;
    }
}

// simulate rolling an ability die
// input: output pointer array of length three for the 6 types of results in three categories to store (SUCCESS/ADVANTAGE/TRIUMPH)
// output: output contains values of result according to rulebook
void rollAbility(int * output) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 rng(seed);
    // Get result of a random number between 0 and 5 (6 sides)
    // Refer to page 10 of the core rulebook
    switch(rng() % 8) {
        case (0):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (1):
            output[SUCCESS] = 1;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (2):
            output[SUCCESS] = 1;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (3):
            output[SUCCESS] = 2;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (4):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 1;
            output[TRIUMPH] = 0;
        case (5):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 1;
            output[TRIUMPH] = 0;
        case (6):
            output[SUCCESS] = 1;
            output[ADVANTAGE] = 1;
            output[TRIUMPH] = 0;
        case (7):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 2;
            output[TRIUMPH] = 0;
    }
}

// simulate rolling a difficulty die
// input: output pointer array of length three for the 6 types of results in three categories to store (SUCCESS/ADVANTAGE/TRIUMPH)
// output: output contains values of result according to rulebook
void rollDifficulty(int * output) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 rng(seed);
    // Get result of a random number between 0 and 5 (6 sides)
    // Refer to page 10 of the core rulebook
    switch(rng() % 8) {
        case (0):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (1):
            output[SUCCESS] = -1;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (2):
            output[SUCCESS] = -2;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (3):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = -1;
            output[TRIUMPH] = 0;
        case (4):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = -1;
            output[TRIUMPH] = 0;
        case (5):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = -1;
            output[TRIUMPH] = 0;
        case (6):
            output[SUCCESS] = 1;
            output[ADVANTAGE] = -2;
            output[TRIUMPH] = 0;
        case (7):
            output[SUCCESS] = -1;
            output[ADVANTAGE] = -1;
            output[TRIUMPH] = 0;
    }
}

// simulate rolling a proficiency die
// input: output pointer array of length three for the 6 types of results in three categories to store (SUCCESS/ADVANTAGE/TRIUMPH)
// output: output contains values of result according to rulebook
void rollProficiency(int * output) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 rng(seed);
    // Get result of a random number between 0 and 5 (6 sides)
    // Refer to page 10 of the core rulebook
    switch(rng() % 12) {
        case (0):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (1):
            output[SUCCESS] = 1;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (2):
            output[SUCCESS] = 1;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (3):
            output[SUCCESS] = 2;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (4):
            output[SUCCESS] = 2;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (5):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 1;
            output[TRIUMPH] = 0;
        case (6):
            output[SUCCESS] = 1;
            output[ADVANTAGE] = 1;
            output[TRIUMPH] = 0;
        case (7):
            output[SUCCESS] = 1;
            output[ADVANTAGE] = 1;
            output[TRIUMPH] = 0;
        case (8):
            output[SUCCESS] = 1;
            output[ADVANTAGE] = 1;
            output[TRIUMPH] = 0;
        case (9):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 2;
            output[TRIUMPH] = 0;
        case (10):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 2;
            output[TRIUMPH] = 0;
        case (11):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 1;
    }
}

// simulate rolling a challenge die
// input: output pointer array of length three for the 6 types of results in three categories to store (SUCCESS/ADVANTAGE/TRIUMPH)
// output: output contains values of result according to rulebook
void rollChallenge(int * output) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 rng(seed);
    // Get result of a random number between 0 and 5 (6 sides)
    // Refer to page 10 of the core rulebook
    switch(rng() % 12) {
        case (0):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (1):
            output[SUCCESS] = -1;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (2):
            output[SUCCESS] = -1;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (3):
            output[SUCCESS] = -2;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (4):
            output[SUCCESS] = -2;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = 0;
        case (5):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = -1;
            output[TRIUMPH] = 0;
        case (6):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = -1;
            output[TRIUMPH] = 0;
        case (7):
            output[SUCCESS] = -1;
            output[ADVANTAGE] = -1;
            output[TRIUMPH] = 0;
        case (8):
            output[SUCCESS] = -1;
            output[ADVANTAGE] = -1;
            output[TRIUMPH] = 0;
        case (9):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = -2;
            output[TRIUMPH] = 0;
        case (10):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = -2;
            output[TRIUMPH] = 0;
        case (11):
            output[SUCCESS] = 0;
            output[ADVANTAGE] = 0;
            output[TRIUMPH] = -1;
    }
}

// Roll of one of the 6 types of dice, returns result in output
// input: dice_type - an enum value that is the dice being rolled
// output: a pointer to array size 3 that is to contain the results of the roll,
//         format: (negative values being for failiure/threat/despair, positive being success/advantage/triumph)
//                index 0: Success/Failure count 
//                index 1: Advantage/Thread count
//                index 2: Triumph/Despair count
void rollDie(const DICE_TYPE dice_type, int* output) {
    switch (dice_type) {
        case DICE_TYPE::BOOST:
            rollBoost(output);
        case DICE_TYPE::SETBACK:
            rollSetback(output);
        case DICE_TYPE::ABILITY:
            rollAbility(output);            
        case DICE_TYPE::DIFFICULTY:
            rollAbility(output);
        case DICE_TYPE::PROFICIENCY:
            rollProficiency(output);
        case DICE_TYPE::CHALLENGE:
            rollChallenge(output);
    }
}

// Simulate rolling a dice pool for a difficulty check
// input: difficulty - Difficulty level equivalent to adding more difficulty dice, should range from 0 (Simple) to 5 (Formidable)
//        challenge  - Equivalent to number of challenge dice being put into the pool
//        setback - equivalent to adding setback dice
//        ability - equivalent to adding ability dice
//        proficiency - equivalent to adding proficiency dice
//        boost - equivalent to adding boost dice
//        ouput - pointer to array length 3 to assign the results to
// output: output contains a sum of the results
// CURRENTLY NOT IMPLEMENTED
void dicePoolRoll(const int& difficulty, const int& challenge, const int& setback, const int& ability, const int& proficiency, const int& boost, int* output) {
    
}