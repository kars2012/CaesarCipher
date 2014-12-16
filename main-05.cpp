#include<iostream>
using std::cout; using std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;
#include<algorithm>
using std::copy;
#include<iterator>
using std::ostream_iterator;
#include "functions-05.h"

int main (){
    string key = "fred", plain_text = "abcxyz", cipher_text="", new_plain_text="";
    vector<int> shifts;
    bool result;
    if (result = key_shifts(key, shifts))
	cout << "successful building of shifts"<<endl;
    else
	cout << "building of shifts failed"<<endl;
    if (result)
	copy(shifts.begin(), shifts.end(),
	     ostream_iterator<int>(cout, ", ")
	    );
    cout << endl;
    cipher_text = encrypt(plain_text, shifts);
    cout << "Cipher:"<<cipher_text<<endl;
    new_plain_text = decrypt(cipher_text, shifts);
    cout << "Decoded is:"<<new_plain_text<<endl;
    
}
