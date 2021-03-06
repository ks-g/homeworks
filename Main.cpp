#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Student.h"
#include "operations.h"
using namespace std;

int main() {
	string input;
	long long fnum; // facNumber holder
	Student st; // Student holder
	while (getline(cin, input))
	{
		if (input.compare("create")==0)
		{
			cin >> st;
			create(st);
			cout << "Record saved!\n";
			cin.ignore();
		}
		else if (input == "sequentialSearch")
		{
			cin >> fnum;
			st = sequentialSearch(fnum);
			if (st.get_grade() == -1)
			{
				cout << "Record not found!\n";
				cin.ignore();
			}
			else
			{
				cout << st;
				cin.ignore();
			}
		}
		else if (input == "exit")
		{
			return 0;
		}
		else
		{
			cout << "Invalid input, please try again!";
			cin.ignore();
		}
	}
}