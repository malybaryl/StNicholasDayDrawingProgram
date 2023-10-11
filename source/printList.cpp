#include "printList.h"

void printList(std::vector<std::string> drewNames)
{
    std::string nothing;
    bool loop;
    bool correct;
    int name;
    int counter;
    std::vector<int> nameToPrint;
    srand(time(NULL));
    
   
    for (int i = 0; i < drewNames.size(); i++)
    {
        nameToPrint.push_back(i);
    }
    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    std::random_shuffle(nameToPrint.begin(), nameToPrint.end());
    
    system("cls");
    system("clear");

    for (int i = 0; i < drewNames.size(); i++)
    {
        if (nameToPrint[i] == nameToPrint.size()-1)
        {
            std::cout << "Get ready: " << drewNames[nameToPrint[i]] << std::endl << std::endl
                << "Type anything to continue: ";
            std::cin >> nothing;
            system("cls");
            system("clear");
            std::cout << "Your person is: " << drewNames[0] << std::endl << std::endl
                << "Type anything to continue: ";
            std::cin >> nothing;

            system("cls");
            system("clear");
        }
        else
        {
            std::cout << "Get ready: " << drewNames[nameToPrint[i]] << std::endl << std::endl
                << "Type anything to continue: ";
            std::cin >> nothing;

            system("cls");
            system("clear");

            std::cout << "Your person is: " << drewNames[(nameToPrint[i]) + 1] << std::endl << std::endl
                << "Type anything to continue: ";
            std::cin >> nothing;
            system("cls");
            system("clear");
        }
    }
    
}