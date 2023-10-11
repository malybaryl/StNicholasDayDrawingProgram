#include "drawNames.h"

void drawNames(std::vector<std::string> nameList,std::vector<std::string>& drewPeople)
{
    srand(time(NULL));
    std::vector<int> nameWas;
    bool correct;
    int number;
    int person;
    int counter = nameList.size();
    std::string name;
    
    person = rand() % counter;
    nameWas.push_back(person);
    drewPeople.push_back(nameList[person]);
    nameList.erase(nameList.begin()+person);
    counter--;

    while(true)
    {
        if(counter==0)
        {
            break;
        }
        else
        {
            person = rand() % nameList.size();
            nameWas.push_back(person);
            drewPeople.push_back(nameList[person]);
            nameList.erase(nameList.begin()+person);
            counter--;     
        }
    }

}