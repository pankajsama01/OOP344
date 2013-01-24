#include<iostream>
#include<stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
      
	int sum;

	if(argc == 3)
	{
	
		cout << "Sum of the number is: "<< atoi(argv[1]) + atoi(argv[2]) << endl;
	}
	else
	{
		cout << "Please enter thr correct input" << endl;
	}

	return 0;
}
