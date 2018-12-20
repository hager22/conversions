#include "DNA.h"
//#include "Protein.h"
#include <string>
#include <iostream>
#include "RNA.h"
#include "CodonsTable.h"

RNA::RNA()
{
    //ctor
   type=pre_mRNA;
}
RNA::RNA(char* seq , RNA_Type atype)
{
   type=atype;
   *c_seq=*seq;
}
RNA::RNA(RNA& rhs)
{
    *c_seq=*(rhs.c_seq);
}
void RNA::Print()
{   cout<<"The RNA Sequence is ... "<<endl;
    for(int i=0 ; i<=sizeof(c_seq) ; i++)
      {
        cout<<c_seq[i];
      }
    cout<<endl<<endl;
    cout<<"DNA type : "<<type<<" "<<endl;
}
void ConvertToProtein(const CodonsTable & table)
{
  table.LoadCodonsFromFile();
}
void ConvertToDNA()
{
  for (int i=0 ; i<=sizeof(c_seq)&&i<=sizeof(complementary_strand) ; i++)
   {
      if (c_seq[i] == 'U')
      {
          complementary_strand[i]='T';
      }
   }
}
RNA::~RNA()
{
    //dtor
}
