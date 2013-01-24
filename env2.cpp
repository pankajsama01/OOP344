#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char* argv[], char* env[]){
    int i;
    int j;
    int targetlen;
    char target[30] = {'\0'};
    bool found = false;
    if (argc > 2)
	cout << "You can only print out one system environment each time." << endl;
    else {
	strcpy(target, argv[1]);
	strcat(target, "=");
	targetlen = strlen(target);
	for(i = 0; env[i] != 0 && found == false; i++){
	    for (j = 0; j < targetlen; j++){
		if (toupper(target[j]) == toupper(env[i][j])) {
		    found = true;

		}
		else {
		    found = false;
		    j = targetlen;
		}
	    }
	}
	if (found == true)
	    cout << env[i-1] << endl;
	else
	    cout << "Not Found" << endl;
    }
    return 0;
}
