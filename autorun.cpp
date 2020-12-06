#include <bits/stdc++.h>
#define s(c) system(c)
using namespace std;
void touch(string s)
{
	string ss;
	ss += "touch ";
	ss + s;
	system(ss.data());
}
int main(int argc, char const *argv[])
{
	system("mkdir A B C D E F");
	for (int i = 'A'; i <= 'F'; i++)
	{
		string s = "cd ";
		s += (char)i;
		system(s.data());
		s.clear();
		s+=i;
		s += ".cpp ";
		touch(s);
		touch("README.md");
	}
	return 0;
}
