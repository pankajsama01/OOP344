#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char** argv, char** envp)
{
    int i;
    bool match = false;

    if (argc == 2)
    {
	char* parm = new char[strlen(argv[1])+2];

	strcpy(parm, argv[1]);
	strcat(parm, "=");

	for (i=0; envp[i] != 0 && match == false; i++)
	{
	    if (envp[i] == strstr(envp[i], parm))
	    {
		cout << envp[i] << endl;
		match = true;
	    }
	}
	delete parm;
    }
}
