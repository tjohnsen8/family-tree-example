// defines a relative and their attributes

#ifndef CLASS_RELATIVE_H
#define CLASS_RELATIVE_H

#include "Person.h"
#include <string>

using namespace std;

class Relative : public Person
{
public:
    enum Relationship {
        MOTHER,
        FATHER,
        BROTHER,
        SISTER,
        SON,
        DAUGHTER,
        GRANDFATHER,
        GRANDMOTHER,
        AUNT,
        UNCLE,
        NEICE,
        NEPHEW,
        GREAT_AUNT,
        GREAT_UNCLE,
        COUSIN
    };
    Relative(string name, int age, Person::PersonState state = Person::DECEASED, Relationship relationship=MOTHER):
        Person(name, age, state),
        m_Relationship(relationship) {}
    Relative() :
        Person("", 0, Person::DECEASED),
        m_Relationship(Relative::MOTHER) {}
    ~Relative() {}
    
    Relationship GetRelationship() { return m_Relationship; }

    void SetRelationship(Relationship relationship) { m_Relationship = relationship; }

private:
    Relative::Relationship m_Relationship;
};


#endif