#ifndef PERSON_INFO
#define PERSON_INFO
#include <string>
#include <vector>
using std::string;
struct PersonInfo
{
	string name;
	std::vector<string> phones;
};
#endif