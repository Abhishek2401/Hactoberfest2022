// C++ program to concatenate given string
// n number of times
#include <bits/stdc++.h>
#include <string>
using namespace std;

// Function which return string by concatenating it.
string repeat(string s, int n)
{
	// Copying given string to temporary string.
	string s1 = s;

	for (int i=1; i<n;i++)
		s += s1; // Concatenating strings

	return s;
}

// Driver code
int main()
{
	string s = "geeks";
	int n = 3;
	cout << repeat(s, n) << endl;;
	return 0;
}

