#ifndef DNA_H
#define DNA_H
#include <string>
#include <iostream>
#include "sequence.h"
#include "RNA.h"

//class sequence;
class RNA;

enum DNA_Type{promoter, motif, tail, noncoding};

class DNA : public sequence
{
  	private:
        DNA_Type type;
        char* copy_seq ;   //first strand
        DNA * complementary_strand;
        int startIndex;
        int endIndex;
    public:
 	 	// constructors and destructor
 	 	//const int siz =endIndex-startIndex+1;
        DNA();
        DNA(char * seq, DNA_Type atype);
        DNA(DNA& rhs);
        ~DNA();
 	 	// function printing DNA sequence information to user
        void Print();
        // function to convert the DNA sequence to RNA sequence
        // It starts by building the complementary_strand of the current
        // DNA sequence (starting from the startIndex to the endIndex), then,
        // it builds the RNA corresponding to that complementary_strand.
        void ConvertToRNA();
 	 	// function to build the second strand/pair of DNA sequence
	    // To build a complementary_strand (starting from the startIndex to
        // the endIndex), convert each A to T, each T to A, each C to G, and
        // each G to C. Then reverse the resulting sequence.
        void BuildComplementaryStrand();
  };

#endif // DNA_H


