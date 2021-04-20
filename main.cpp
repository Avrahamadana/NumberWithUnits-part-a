#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>

using namespace std;
int main() {
	string line;
	vector<string> vec;
	ifstream file("units.txt");
	
	while (getline(file,line))
	{
		vec.push_back(line);
	}
	for (int i = 0; i < vec.size(); i++)
	{
		cout <<vec[i]<<endl;
	}
	file.close();
	return 0;
}