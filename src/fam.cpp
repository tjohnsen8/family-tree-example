// entry point for the family tree data struction example

#include "FamilyTree.h"
#include "Relative.h"
#include <iostream>

int main() {
    
    // Tom's family tree will be stored in the tree
    FamilyTree tree;

    // for adding relatives to the tree
    Relative relative;

    // add some fam
    relative.SetName("Joe");
    relative.SetAge(53);
    relative.SetState(Person::ALIVE);
    relative.SetRelationship(Relative::FATHER);

    tree.AddRelative(relative);

    RelItPair testDad = tree.FindRelative(Relative::FATHER);
    RelItPair testMom = tree.FindRelative(Relative::MOTHER);

    cout << "found " << distance(testDad.first, testDad.second) << " FATHER(s) " << endl;
    cout << "found " << distance(testMom.first, testMom.second) << " MOTHER(s) " << endl;

    return 0;
}