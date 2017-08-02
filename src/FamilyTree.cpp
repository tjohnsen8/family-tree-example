// routines for adding, removing, and finding people in the family tree

#include "FamilyTree.h"

using namespace std;

FamilyTree::FamilyTree() {
    m_Relatives.clear();
}

FamilyTree::~FamilyTree() {
    m_Relatives.clear();
}

void FamilyTree::AddRelative(Relative & relative) {

}

Relative & FamilyTree::FindRelative(Relative::Relationship relationship) {
    Relative relative;

    return relative;
}