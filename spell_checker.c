#include <iostream>
#include <map>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <string>
#include "binary_search.h"
using namespace std;

int main () {

	/* Cheie:Valoarea - Bun pentru a afla pozitia in dictionar
	   daca e sa crape ceva */
	map<string,int> my_m;
	int pos=0;
	string cuvant;
	/* Citim din baza de date cuvintele 
		Merge doar pe un fisier simplu
	*/

	ifstream database ("input");
	while (!database.eof()){
		database >> cuvant;
		my_m.insert (std::pair<string,int>(cuvant,pos));
		pos++;
	}
	/* Afisam dimensiunea pt debug */
	cout << "Size : "  <<my_m.size() <<endl;
	/*Printam map-ul utilizand un iterator*/
	map<string,int>::const_iterator it;
	for (it=my_m.begin(); it!=my_m.end(); it++){
		cout << it->first << ":" << it->second << "\n";
	}
    /*TODO:
     * write a binarysearch function
     * AI for the spell checker
     */

return 0;
}
