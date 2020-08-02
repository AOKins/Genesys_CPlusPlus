#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include "skill.h"

// Basic class structure for 
class Character {
private:
    // Attributes, should only range from 1 to 5 (though with possible rare exceptions)
    int _brawn;    
    int _agility;  
    int _intellect;
    int _cunning;  
    int _willpower;
    int _presence; 
    // Derived values
    int _woundThreshold;
    int _strainThreshold;
    int _defense;
    int _soakValue;

    int _availableXP; // The amount of XP the character has available to spend on increasing skill levels or attributes or getting new talents

    std::vector<Skill> _skillList; // Stores the character's skills, vector data type as the skillList's size may need to malleable (open to changing to fixed size array)
    std::vector<Talent> _talentList; // Stores the character's talents, vector data type as it may be increased with new acquired talents


public:
    Character();

};




#endif