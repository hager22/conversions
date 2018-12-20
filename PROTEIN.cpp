#include <string>
#include <iostream>
#include "DNA.h"
#include "PROTEIN.h"
#include "CodonsTable.h"

using namespace std ;

PROTEIN::PROTEIN()
{
    //ctor
    type=Cellular_Function;
}
PROTEIN::PROTEIN(char *p ,  Protein_Type type_)
{
    for(int i=0 ; i<sizeof(PROTEIN.p) ; i++)
     {
         *(PROTEIN.p)=*P ;
     }
     type=type_;
}
DNA*::GetDNAStrandsEncodingMe(const DNA & bigDNA)
{
    char* copyprotien =new char [sizeof(p)];
    for (int i=0 ; i<=sizeof(p) ; i++)
    {
        for(int j=0 ; j<=sizeof(DNA.copy_seq) , j++)
        {
            //if ( p[i]==DNA.copy_seq[j] && p[i+1]==DNA.copy_seq[j+1] && p[i+2]==DNA.copy_seq[j+2] )
                //copyprotien[i]=

        }
    }
}
void DNA::Print()
{
    cout<<"Information of PROTIEN  : "<<endl;
     for(int i=0 ; i<=sizeof(P) ; i++)
      {
        cout<<P[i];
      }
      cout<<endl<<endl;

    cout<<"PROTIEN type : "<<type<<" "<<endl;
}
PROTEIN::~PROTEIN()
{
    //dtor
}
