// defines a relative and their attributes

#ifndef CLASS_RELATIVE_H
#define CLASS_RELATIVE_H

#include "Person.h"
#include <string>
#include <tuple>

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

    bool operator==(const Relative & rhs) { 
        return (tie(this->m_Name, this->m_Age, this->m_State, this->m_Relationship) ==
                tie(rhs.m_Name, rhs.m_Age, rhs.m_State, rhs.m_Relationship));
    }
    bool operator!=(const Relative & rhs) { 
        return !(*this == rhs); 
    }
    
    Relationship GetRelationship() { return m_Relationship; }

    void SetRelationship(Relationship relationship) { m_Relationship = relationship; }

protected:
    Relative::Relationship m_Relationship;
};


#endif