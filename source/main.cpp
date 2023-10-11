#include <iostream>
#include <vector>
#include "addName.h"
#include "drawNames.h"
#include "printList.h"

int main()
{
    std::vector<std::string> nameList;
    std::vector<std::string> drewPeople;
    addName(nameList);
    drawNames(nameList,drewPeople);
    printList(drewPeople);

    return 0;
}