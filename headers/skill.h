#ifndef _SKILL_H_
#define _SKILL_H_
#include <string>

// A class to hold skills that characters have
class Skill {
private:
    enum baseAttribute {
        BRAWN,
        AGILITY,
        INTELLECT,
        CUNNING,
        WILLPOWER,
        PRESENCE,
    };
    std::string _label;
    baseAttribute _type;

public:


};



#endif