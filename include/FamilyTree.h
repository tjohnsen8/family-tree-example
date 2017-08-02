// collection of relatives in a family tree

#ifndef CLASS_FAMILY_TREE_H
#define CLASS_FAMILY_TREE_H

#include "Relative.h"
#include <map>

using namespace std;

class FamilyTree
{
public:
    FamilyTree();
    ~FamilyTree();

    void AddRelative(Relative & relative);
    Relative & FindRelative(Relative::Relationship relationship);

private:
    map<Relative::Relationship, Relative> m_Relatives;
};

#endif