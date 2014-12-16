#ifndef _CIPHER
#define _CIPHER

#include<string>
using std::string;
#include<vector>
using std::vector;

bool all_lower(string s);
bool key_shifts(string key, vector<int> & shifts);
string encrypt(string s, vector<int> & shifts);
string decrypt(string s, vector<int> & shifts);

#endif
