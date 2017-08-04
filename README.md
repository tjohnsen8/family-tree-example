### Family Tree data structure example

## Structure
- CMakeLists
- README
- include
--- Person.h
--- Relative.h
--- FamilyTree.h
- src
--- FamilyTree.cpp
--- fam.cpp
- bin
- build

## To build
Linux build:
```
cd build
cmake ..
make
```

## To run
./famtree

## Design
Used the multi map for quick insertions and lookups. A regular map was my first choice. I wanted to be able to do tree['mom'] to find the mom and tree['cousin'] to find the cousin and so forth. I quickly realized that there would be more than one cousin and potentially more than one mom and more than one child and so on and so forth, so I converted into a multimap.

Additionally, I created a base class "Person" to identify the common traits a person wuold have such as age, name and 'state'. This is useful in looking up "what is jack's uncle's name?" or "how old is tom's mother named erica?" The base class would hold information common to every person and the person class could be used in other applications of the data structure.

The Relative class then inherits from Person and adds the relationship. My thinking there was a relative is a person who is just, well, related to the subject.

The FamilyTree class then contains the multimap of relationship->relative(s) key->value pair. I've only used multi-maps sparingly, so I looked up most of the syntax to implement the insert and find.

There will be overhead here in using the stl multimap, so this solution wouldn't be excellent on a very low level or bare metal solution, but on an embedded windows or linux, will run without too much tradeoff. The idea was to make the code easy to use and to use already provided functionality of the stl classes.