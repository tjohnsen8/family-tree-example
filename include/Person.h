// defines a person and their attributes

#ifndef CLASS_PERSON_H
#define CLASS_PERSON_H

#include <string>
using namespace std;

class Person
{
public:
    enum PersonState {
        DECEASED,
        ALIVE
    };
    Person():
        m_Name(""),
        m_Age(0),
        m_State(Person::DECEASED) {}
    Person(string name, int Age, Person::PersonState state = Person::DECEASED):
        m_Name(name),
        m_Age(Age),
        m_State(state) {}
    ~Person() {}
    
    virtual string GetName() { return m_Name; }
    virtual int GetAge() { return m_Age; }
    virtual PersonState GetState() { return m_State; }

    virtual void SetName(string name) { m_Name = name; }
    virtual void SetAge(int age) { m_Age = age; }
    virtual void SetState(PersonState state) { m_State = state; }

private:
    string m_Name;
    int m_Age;
    PersonState m_State;
};


#endif