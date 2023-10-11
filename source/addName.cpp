#include "addName.h"

void addName(std::vector<std::string>& nameList)
{
    char answer = ' ';
    std::string name = " ";
    while(true)
    {
        std::cout << "Do you want to add name? y/n: ";
        std::cin >> answer;
        if (answer=='y')
        {
            std::cout << "Enter name: ";
            std::cin >> name;
            nameList.push_back(name);
        }
        else if (answer == 'n')
        {
            if(nameList.size()<3)
            {
                std::cout << "You have to enter more than two person to list..." << std::endl;
            }
            else
            {
                break;
            }
        }
        else
        {
            std::cout << "wrong commend..." << std::endl;
        }
    }
}