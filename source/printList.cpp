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
    
    for (int i = 0; i < drewNames.size(); i+2)
    {
        nameToPrint.push_back(i);
    }
    
    counter = nameToPrint.size();

    for (int i = 0; i<nameToPrint.size(); i++)
    {
        name = rand() % counter;
        counter--;
        std::cout << "Get ready: " << drewNames[nameToPrint[name]] << std::endl << std::endl 
                  << "Type anything to continue: ";

        std::cin >> nothing;
        
        std::cout << "Your person is: " << drewNames[nameToPrint[name]+1] << std::endl << std::endl 
                  << "Type anything to continue: ";

        std::cin >> nothing;
        nameToPrint.erase(nameToPrint.begin()+name-1);
    }
       
}