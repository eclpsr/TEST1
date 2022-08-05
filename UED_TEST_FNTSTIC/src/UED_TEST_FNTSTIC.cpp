#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string ReadLine() {
    string s;
    getline(cin, s);
    return s;
}

void StringToLower(string &input){
	for(auto &c: input){
		c = tolower(c);
	}
}

string TaskFunction(const string input){
	string inputCopy = input;
	string answer;
	StringToLower(inputCopy);
	for(long long unsigned int i = 0; i < inputCopy.length(); i++){
		string buff = inputCopy;
		buff[i] = '\0';
		std::string::size_type n;
		n = buff.find(inputCopy[i]);
		n == string::npos ? answer += '(' : answer += ')';
	}
	return answer;
	}

int main() {
	string a;
	string b;
	while(a != "q"){
		cout << "Enter the string, or enter 'q' to exit" << endl;
		a = ReadLine();
		b = TaskFunction(a);
		cout << b << endl;
	}
	return 0;
}
