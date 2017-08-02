// routines for adding, removing, and finding people in the family tree

#include "FamilyTree.h"
#include <tuple>

using namespace std;

FamilyTree::FamilyTree() {
    m_Relatives.clear();
}

FamilyTree::~FamilyTree() {
    m_Relatives.clear();
}

void FamilyTree::AddRelative(Relative & relative) {
    // check if the relative is in the tree already, if not, add them
    RelItPair result = m_Relatives.equal_range(relative.GetRelationship());
    int numOfMatches = distance(result.first, result.second);

    if (numOfMatches == 0) {
        m_Relatives.insert(pair<Relative::Relationship, Relative>(relative.GetRelationship(), relative));
    }
    else {
        // check to see if the realtive is the same person
        bool foundPerson(false);
        for (RelItPair range(result); range.first != range.second; ++range.first) {
            if (relative == range.first->second) {
                foundPerson = true;
                break;
            } 
        }
        if(!foundPerson) {
            m_Relatives.insert(pair<Relative::Relationship, Relative>(relative.GetRelationship(), relative));    
        }
    }
}

RelItPair FamilyTree::FindRelative(Relative::Relationship relationship) {
    return m_Relatives.equal_range(relationship);
}