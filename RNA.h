#ifndef RNA_H
#define RNA_H
#include "DNA.h"
//#include "Protein.h"
#include <string>
#include <iostream>

class DNA ;
class CodonsTable;
class Protein ;
enum RNA_Type {mRNA, pre_mRNA, mRNA_exon, mRNA_intron};

class RNA : public sequence
{
    protected:
        RNA_Type type;
        char* c_seq ;

    public:
        // constructors and destructor
        RNA();
        RNA(char * seq, RNA_Type atype);
        RNA(RNA& rhs);
        ~RNA();
 	 	// function to be overridden to print all the RNA information
        void Print();
 	 	// function to convert the RNA sequence into protein sequence
        // using the codonsTable object
        void ConvertToProtein(const CodonsTable & table);
 	 	// function to convert the RNA sequence back to DNA
        void ConvertToDNA();


};

#endif // RNA_H

