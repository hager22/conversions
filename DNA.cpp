#include <string>
#include <iostream>
#include "DNA.h"
using namespace std ;

//class sequence;
class RNA;
DNA::DNA()
{
    //ctor
    //startIndex=0;
    //endIndex=0;
    type=promoter;
}
DNA::DNA(char* seq, DNA_Type atype)
{
   //cout<<"First strand : "<<(*copy_seq)<<"  "<<endl;
   type=atype;
   *copy_seq=*seq;
   //char* copy_seq=new char [siz];

}
DNA::DNA(DNA& rhs)
{
    *copy_seq = *(rhs.seq);
}
void DNA::Print()
{
    cout<<"Information of DNA : "<<endl;
     for(int i=0 ; i<=sizeof(seq) ; i++)
      {
        cout<<seq[i];
      }
      cout<<endl<<endl;
     for(int i=0 ; i<=sizeof(complementary_strand) ; i++)
      {
        cout<<complementary_strand[i];
      }
    cout<<endl<<"DNA type : "<<type<<" "<<endl;
}
void DNA::BuildComplementaryStrand()
{
    for (int i=0 ; i<=sizeof(complementary_strand)&&i<=sizeof(seq) ; i++)
    {
        if (seq[i]=='T')
        {
            copy_seq[i]='A';
        }
        if (seq[i]=='A')
        {
            copy_seq[i]='T';
        }
        if (seq[i]=='C')
        {
            copy_seq[i]='G';
        }
        if (seq[i]=='G')
        {
            copy_seq[i]='C';
        }
    }
    for ( int i=0 ; i<=sizeof(complementary_strand)&&i<=sizeof(copy_seq) ; i++)
        {
            complementary_strand[i] = copy_seq[i];
        }

}
void DNA::ConvertToRNA()
{
  for (int i=0 ; i<=sizeof(complementary_strand)/*&&i<=sizeof(RNA.c_seq)*/ ; i++)
  {
      if (complementary_strand[i] == 'T')
      {
          complementary_strand[i]='U';
          //RNA.c_seq[i]='U';
      }
  }
  for (int i=0 ; i<=sizeof(complementary_strand) ; i++)
  {
        cout<<endl<< complementary_strand[i]<<endl;
  }

}
DNA::~DNA()
{
    //dtor
}
