#include <iostream>

enum Boolean { FALSE, TRUE};

class ThreeLetterList;

class ThreeLetterNode {
friend class ThreeLetterList;
private:
    char data[3];
    ThreeLetterNode *link;
};

class ThreeLetterList {
private:
    ThreeLetterNode *first;
};

void test_3ll ()
{

}