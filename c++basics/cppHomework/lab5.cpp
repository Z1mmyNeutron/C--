#include <iostream>
#include <stdlib.h>
#include<fstream>
#include<string>
#include <stdio.h>

using namespace std;
string aircraftcode;
void red() {
printf("\00[1;31m]");
}
void green() {
printf("\00[1;32m]");
}
void yellow() {
printf("\00[1;33m]");
}
void blue() {
printf("\00[1;34m]");
}
void purple() {
printf("\00[1;35m]");
}
void cyan() {
printf("\00[1;36m]");
}
void white() {
printf("\00[1;37m]");
}
void reset() {
printf("\00[1;0m]");
}





int main()
{

ifstream file;
string text;
file.open("inputData.txt", ios::in);
if (file.fail()) {
cout << "wrong file cannot open";
exit(1);
}
while (!file.eof()) {
getline(file, text);
reset();
cout << "ASCII-Message => [" << text << "]";
int label0 = text.length();
int label1 = text.find("SWA32");
if (label1 > 0) {
cout << endl;
red();
cout << "Log file.................[oct 2021]" << endl;
cout << "..............................." << endl;
cyan();
cout << "[Validation - Info]" << endl;
cout << "[3co] typeOfaircraft................................ Boing B737" << endl;
cout << "[26a0 destination .................................. KTUL" << endl;
cout << "                                                     Tulsa international" << endl;
cout << "                                                      airport, Oklahoma" << endl;
cout << "                                                 St. louis lambert " << endl;
cout << "                                                 international airport, Missouri" << endl;
red();
cout << "............................................................." << endl;
}
else {
cout << endl;
green();
cout << "log file.................................<< missing aircraft>> " << endl;
reset();
}
file.close();
return 0;
}



}
