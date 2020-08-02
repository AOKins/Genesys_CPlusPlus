#ifndef _DICE_CALC_H
#define _DICE_CALC_H

#include <chrono>
#include <random>

// Enumeration values for the 6 types of dice
enum DICE_TYPE {
    BOOST,
    SETBACK,
    ABILITY,
    DIFFICULTY,
    PROFICIENCY,
    CHALLENGE,
};

// Enumeration for index values for use in output
// failure/threat are in same index as success/advantage respectively but are described as negative values rather than positive as they can be cancelled by each other
// whereas triumph and despair can not be cancelled out completely by each other
enum RESULT_INDEX {
    SUCCESS,
    ADVANTAGE,
    TRIUMPH,
    DESPAIR,
};

// simulate rolling a boost die
// input: output pointer array of length three for the 6 types of results in three categories to store (SUCCESS/ADVANTAGE/TRIUMPH)
//        rng - random number generator to use for the die
// output: output contains values of result according to rulebook
void rollBoost(int * output, std::mt19937 & rng);

// simulate rolling a setback die
// input: output pointer array of length three for the 6 types of results in three categories to store (SUCCESS/ADVANTAGE/TRIUMPH)
//        rng - random number generator to use for the die
// output: output contains values of result according to rulebook
void rollSetback(int * output, std::mt19937 & rng);

// simulate rolling an ability die
// input: output pointer array of length three for the 6 types of results in three categories to store (SUCCESS/ADVANTAGE/TRIUMPH)
//        rng - random number generator to use for the die
// output: output contains values of result according to rulebook
void rollAbility(int * output, std::mt19937 & rng);

// simulate rolling a difficulty die
// input: output pointer array of length three for the 6 types of results in 4 categories to store
// output: output contains values of result according to rulebook
void rollDifficulty(int * output, std::mt19937 & rng);

// simulate rolling a proficiency die
// input: output pointer array of length three for the 6 types of results in 4 categories to store
// output: output contains values of result according to rulebook
void rollProficiency(int * output, std::mt19937 & rng);

// simulate rolling a challenge die
// input: output pointer array of length three for the 6 types of results in 4 categories to store
// output: output contains values of result according to rulebook
void rollChallenge(int * output, std::mt19937 & rng);

// Roll of one of the 6 types of dice, returns result in output
// input: dice_type - an enum value that is the dice being rolled
//        rng - random number generator to use for the die
// output: a pointer to array size 3 that is to contain the results of the roll,
//         format: (negative values being for failiure/threat/despair, positive being success/advantage/triumph)
//                index 0: Success/Failure count 
//                index 1: Advantage/Thread count
//                index 2: Triumph/Despair count
void rollDie(const DICE_TYPE dice_type, int* output, std::mt19937 & rng);

// Simulate rolling a dice pool for a difficulty check
// input: difficulty - Difficulty level equivalent to adding more difficulty dice, should range from 0 (Simple) to 5 (Formidable)
//        challenge  - Equivalent to number of challenge dice being put into the pool
//        setback - equivalent to adding setback dice
//        ability - equivalent to adding ability dice
//        proficiency - equivalent to adding proficiency dice
//        boost - equivalent to adding boost dice
//        ouput - pointer to array length 3 to assign the results to
// output: output contains a sum of the results
void dicePoolRoll(const int& difficulty, const int& challenge, const int& setback, const int& ability, const int& proficiency, const int& boost, int* output);

// Basic method of displaying results from dice roll
void terminalOutputResults(int * pool);

#include "../source/dice_calc.cpp"

#endif