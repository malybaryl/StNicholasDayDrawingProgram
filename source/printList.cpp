#include "printList.h"

void printList(std::vector<std::string> drewNames)
{
    std::string nothing;
    bool loop;
    bool correct;
    int name;
    std::vector<int> nameWas;
    srand(time(NULL));
    while(true)
    {
    name = rand() % drewNames.size();
    if (name%2==0)
    {
        nameWas.push_back(name);
        break;
    }
    }
    for(int i=0;i<(drewNames.size()/2)-1;i++)
    {
        loop = true;
        while(loop==true)
        {
            name = rand() % drewNames.size();
            if (name%2==0)
            {
                correct=true;
                for(int j=0; j<nameWas.size() ; j++)
                {
                    if(name==nameWas[j])
                    {
                        correct=false;
                    }
                }
                if(correct==true)
                {
                    nameWas.push_back(name);
                    loop=false;
                }
            }
        }
    }
   
    for(int i=0 ; i<nameWas.size() ; i++)
    {
        std::cout << nameWas[i] << " ";
    }
       
}