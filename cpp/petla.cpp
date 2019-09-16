/*
 * petla.cpp
 * 
 * Copyright 2019 kl2ag1 <kl2ag1@ubu10>
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i = 0;
	for(i = 0; i <= 20; i += 2) {
        cout << 1 << endl;
        cout << "Hello!";
    }
    
    cout << endl << "Watrość i: " << i << endl;
	return 0;
}

