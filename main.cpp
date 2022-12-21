#include <iostream>
#include <list>


int main()
{
    int ans = 0;
    int current = 0;
    std::list<int> calories;
    std::string line;
    for(std::getline(std::cin, line); line != "eof"; std::getline(std::cin, line))
    {
        if (line != "")
        {
            current += stoi(line);
        }
        else
        {
            calories.push_back(current);
            current =0;
        }
    }
    calories.sort();
    
    std::cout<<"ANS1:"<<calories.back()<<std::endl;
    
    for(int i=0; i<3; i++)
    {
        ans += calories.back();
        calories.pop_back();
    }
    std::cout<<"ANS2:"<<ans<<std::endl;
    return 0;
}
