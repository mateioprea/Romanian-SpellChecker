#include <iostream>
#include <map>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

int main () {

	/* Cheie:Valoarea - Bun pentru a afla pozitia in dictionar
	   daca e sa crape ceva */
	map<string,int> my_m;
	int pos=0;
	string cuvant;
	ifstream my_file ("input");
	while (!my_file.eof()){
		my_file >> cuvant;
		my_m.insert (std::pair<string,int>(cuvant,pos));
		pos++;
	}
cout << "Size : "  <<my_m.size() <<endl;
map<string,int>::const_iterator it;
for (it=my_m.begin(); it!=my_m.end(); it++){
	cout << it->first << ":" << it->second << "\n";
}

return 0;
}
