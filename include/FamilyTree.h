// collection of relatives in a family tree

#ifndef CLASS_FAMILY_TREE_H
#define CLASS_FAMILY_TREE_H

#include "Relative.h"
#include <map>

using namespace std;

typedef multimap<Relative::Relationship, Relative> FamilyMap;
typedef FamilyMap::iterator RelativeIterator;
typedef pair<RelativeIterator, RelativeIterator> RelItPair;

class FamilyTree
{
public:
    FamilyTree();
    ~FamilyTree();

    void AddRelative(Relative & relative);
    RelItPair FindRelative(Relative::Relationship relationship);

private:
    FamilyMap m_Relatives;
};

#endif