#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkPermutation(vector<string> targetStrings);		// check permutation

int main()
{
	vector<string> targetStrings = {"HelloBoys", "BoHellyso"};
	cout << checkPermutation(targetStrings) << endl;
	return 0;
}

bool checkPermutation(vector<string> targetStrings)
{
	vector<vector<char>> permutationArray = {};		// set 2-d array to check permutation
	int i, j;
	for(i = 0; i < targetStrings.size(); i++)
	{
		for(j = 0; j < targetStrings[i].length(); j++)
		{
			permutationArray.at(i)
		}
	}
}
// �����z�������Ĕ�r����
// �������폜���Ă����Ĕ�r����