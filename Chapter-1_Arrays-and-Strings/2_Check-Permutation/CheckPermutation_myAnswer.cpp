#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool checkPermutation(vector<vector<char>> targetStrings);		// check permutation

int main()
{
	vector<vector<char>> targetStrings = {"HelloBoys", "BoHellyso"};
	cout << checkPermutation(targetStrings) << endl;
	return 0;
}

bool checkPermutation(vector<vector<char>> targetStrings)
{
	vector<vector<char>> permutationArray = {};		// set 2-d array to check permutatio
	int i, j;

	if (targetStrings[0].size() == targetStrings[1].size()) return false;	// if the lengths of both strings are diffrent, returns false

	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < targetStrings[i].size(); j++)
		{
			permutationArray[i].at(targetStrings[i].at(j))++;
		}
	}
}
// •¶Žš”z—ñ‚ðì‚Á‚Ä”äŠr‚·‚é
// •¶Žš‚ðíœ‚µ‚Ä‚¢‚Á‚Ä”äŠr‚·‚é