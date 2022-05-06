#include <iostream>

bool isUnique(std::string targetString);

int main()
{
	std::cout << isUnique("abcdefghijklmnopqrstua");
    return 0;
}

bool isUnique(std::string targetString)
{
    int i, j;
    for(i = 0; i < targetString.size(); i++)
    {
	    for(j = i + 1; j < targetString.size(); j++)
	    {
		    if(targetString[i] == targetString[j])
		    {
				return true;
		    }
	    }
    }
	return false;
}