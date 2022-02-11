/*
 
PDS-04225 Program #1

Due Date: See Description in Canvas

Problem: The ROT13 example explained in our first class will need to be augmented. Your task is to augment the ROT13 code by adding the capability of ROT5 to it. ROT5 is the ability to encrypt numeric characters ('0'-'9') by shifting each by 5 places, i.e '0' becomes '5', '5' becomes '0', etc.

Your final goal will be to be able to produce a program in C++ that includes the code inthe presentation for Encryption using ROT13 with additional code that uses ROT5.

Deliverables:

A)	All of the source code uses to solve the problem
B)	Code that was used to test your solution, e.g. what was the code of your main function used to test the improved encryption function.
a)	Some code you may consider using for testing,

	input = "abc, 123, doReMi";
	string encrypted = myEncryption.encrypt(input);
	// encrypted is "nop, 678, qbErZv"

b)	This code is NOT a comprehensive test suite, you will need to test other values for input to prove that your solution is 100% correct.

You will submit your answers in a Microsoft Word document properly identified to the respective Canvas assignment. Please feel free to email me with any questions you have.



*/



#include <iostream>
#include <string>

using namespace std;

class Encryption {

private:
	char cipher[128];

public:
	Encryption(void);
	string encrypt(string);
};

int main()
{
	Encryption myEncryption;
	string input;
	do {

		cout << "Give me text to encrypt >>";
		getline(cin, input);
		string encrypted = myEncryption.encrypt(input);
		cout << "the phrase \"" << input << "\" encrypted is \"" << encrypted << "\"" << endl;
		string decrypted = myEncryption.encrypt(encrypted);
		cout << "the phrase \"" << encrypted << "\" decrypted is \"" << decrypted << "\"" << endl;
	} while (input.length() > 0);

}

Encryption::Encryption(void)
{
	for (int i = 0; i < 128; i++) {
		char c = i;
		if ((c >= 'a' && c < 'a' + 13) ||
			(c >= 'A' && c < 'A' + 13)) {
			cipher[c] = ((char)c + 13);
		}
		else if ((c >= 'a' + 13 && c <= 'z') ||
			(c >= 'A' + 13 && c <= 'Z')) {
			cipher[c] = ((char)c - 13);

		}
        else if( '0' <= c && c <= '4'){
            cipher[c] = ((char)c + 5);
        }
        else if('5' <= c && c <= '9'){
            cipher[c] = ((char)c - 5);
        }
         else if((c >= '0' && c < '0' + 5) || (c >= '9' )){
             cipher[c] == ((char)c + 5);
         }else if((c >= '0' + 5 && c <= '9')){
             cipher[c] = ((char)c - 5);
         }


		else {
			cipher[c] = c;
		}
	}
}

string Encryption::encrypt(string phrase) {
	string rtn;
	for (int i = 0; i < phrase.length(); i++) {
		rtn += cipher[phrase[i]];
	}
	return rtn;
}




