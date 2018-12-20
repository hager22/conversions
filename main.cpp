#include <iostream>
#include <iomanip>
#include <fstream>

#include "sequence.h"
#include "DNA.h"
#include "RNA.h"
#include "PROTEIN.h"
#include "CodonsTable.h"

using namespace std;

int main()
{
    string data ;
    char* a;
    try
    {
      cout<<"enter data ... "<<endl;
      cin>>data;
      for (int i=0 ; i<sizeof(data) ; i++)
      {
        if(data[i]!='A'&&data[i]!='C'&&data[i]!='G'&&data[i]!='T')
            throw "Not Required data ..";
      }
      for (int i=0 ; i<sizeof(data) ; i++)
      {
        a[i]=data[i];
      }
    }
    catch(char* e)
    {
        cout<<e<<endl;
    }

    fstream f1 , f2 ;
    f1.open ("input data.txt");
    f2.open ("output data.txt");
    f1.unsetf(ios::skipws);

    f1<<a;

    f1.seekg (0 , f1.end);
	long size = f1.tellg();
	f1.seekg (0);//by default seeks from beginning
	char* buffer = new char[size];
	f1.read (buffer , size);
	//cout<<"**************"<<endl<<buffer<<endl;
	char arr1[size];
	for(int i=0 ; i<size ; i++)
    {
        for(int j=0 ; i<size ; j++)
        {
            arr1[j]=buffer[i];
        }

    }
    for(int j=0 ; j<size ; j++)
    {
        cout<<"_____________________________"<<endl<<arr1[j];
    }

    DNA();
    /******************************************************************************************/
    string type ;
    int n ;
    while (n != 0)
    {
        cout<<"which Technique Do you want to apply ?!! "<<endl;
        cout<<"1_DNA to RNA "<<endl<<"2_RNA to PROTIEN"<<endl;
        cin>>n;
        if(n==1)
        {
            cout<<"what's the type of DNA ?!!"<<endl;
            cin>>type;
            DNA d(arr1,type);
            d.BuildComplementaryStrand();
            d.ConvertToRNA();
            d.Print();
        }
        if(n==2)
        {
            cout<<"what's the type of RNA ?!!"<<endl;
            cin>>type;
        }
    }

    cout << "___________________________________________" << endl;
    return 0;
}

istream& operator>>(istream& in , sequence& s)
{
    for ( int i=0 ; i<sizeof(s) ; i++ )
    {
        in>>s[i];
    }
    return in ;
}
ostream& operator<<(ostream& out , sequence& s)
{
    for ( int i=0 ; i<sizeof(s) ; i++ )
    {
        out<<s[i];
    }
    return out ;
}
int operator!=(sequence& s1 , sequence& s2)
{
    for ( int i=0 ; i<sizeof(s1)&&i<sizeof(s2) ; i++ )
    {
        if (s1[i] != s2[i])
           {
               cout<<"NOT EQUAL ..."<<endl;
               break;
           }
    }
    //return false ;
8}
void operator==(sequence& s1 , sequence& s2)
{   //sequence s2 ;
    for ( int i=0 ; i<sizeof(s1)&&i<sizeof(s2) ; i++ )
    {
        if (s1[i] == s2[i])
           {
               continue;
           }
        else
           {
               cout<<"NOT EQUAL ..."<<endl;
               break;
           }

    }
    //return false ;
}
cahr* operator[](int n)
{
    char* s ;
    return  s[n];
}

void operator+(sequence& s1)
{

    sequence s3;
    sequence s2;

    for ( int i=0 ; i<sizeof(s1.seq)&&i<sizeof(s2.seq)&&i<sizeof(s3.seq) ; i++ )
    {
        s3[i]=s1[i]+s2[i];
    }

}


