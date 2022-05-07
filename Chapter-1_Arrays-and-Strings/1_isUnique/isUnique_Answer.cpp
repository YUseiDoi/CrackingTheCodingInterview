#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>
using namespace std;

bool isUniqueChars(const string word);	// check if the string is unique or not

int main()
{
	vector<string> words = { "abcde", "hello", "apple", "kite", "padle" };
	for(auto word: words)
	{
		cout << word << string(":") << boolalpha << isUniqueChars(word) << endl;
	}
	return 0;
}

bool isUniqueChars(const string word)
{
	if (word.length() > 128) return false;	// if word size is over 128, returns false because ASCII has only 128 unique characters.
	vector<bool> char_set(128);
	for(int i = 0; i < word.length(); i++)
	{
		int val = word[i];
		if(char_set[val])
		{
			return true;
		}
		char_set[val] = true;
	}
	return false;
}
