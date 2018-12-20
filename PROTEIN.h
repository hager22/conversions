#ifndef PROTEIN_H
#define PROTEIN_H
#include <string>
#include <iostream>
#include "DNA.h"
#include "CodonsTable.h"

using namespace std ;

enum Protein_Type {Hormon, Enzyme, TF, Cellular_Function};

class PROTEIN : public sequence
{
    private:
        Protein_Type type;
        char* p ;
      public:
 	 	// constructors and destructor
 	 	PROTEIN();
 	 	PROTEIN(char * p);
 	 	~PROTEIN();
 	 	// return an array of DNA sequences that can possibly
                // generate that protein sequence
        DNA* GetDNAStrandsEncodingMe(const DNA & bigDNA);
};

#endif // PROTEIN_H
