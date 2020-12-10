#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string str;
	int size;
	getline(cin,str);
	size = str.size();
	int data[size ];
	int out[size + 1];
	out[0] = 0;
	out[1] = 1;
	for(int i = 0; i < size; i++)
		data[i] = str[i] - '0';
	
}
