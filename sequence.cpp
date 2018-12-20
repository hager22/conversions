#include <string>
#include <iostream>
#include "sequence.h"

using namespace std ;

sequence::sequence()
{
    //ctor
}
sequence::sequence(int length)
{
   char* seq = new char [length] ;
}
sequence::sequence(sequence& rhs)
{
    cout<<"copy constructor called ... \n";
    *seq=*(rhs.seq);
}
void sequence::Print()
{
    for(int i=0 ; i<=sizeof(seq) ; i++)
    {
        cout<<"The Original Data ... "<<seq[i]<<endl;
    }
}
sequence::~sequence()
{
    //dtor
}
/*istream& operator>>(istream& is , (char*)& s)
{
    for ( int i=0 ; i<sizeof(seq) ; i++ )
    {
        is>>s[i];
    }
    return is ;
}
ostream& operator<<(ostream& os , char* s)
{
    for ( int i=0 ; i<sizeof(seq) ; i++ )
    {
        os<<s[i];
    }
    return os ;
}*/

