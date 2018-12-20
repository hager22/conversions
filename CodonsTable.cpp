#include "CodonsTable.h"
#include "RNA.h"

#include <string>
#include <iostream>
#include <fstream>
//std::string;
using namespace std ;

/*struct Codon
{
  	char value[4];    	    // 4th location for null character
    char AminoAcid;  	    // corresponding AminoAcid according to Table
};*/
CodonsTable::CodonsTable()
{
    //ctor
}
void CodonsTable :: LoadCodonsFromFile()
{
    fstream f1 ;
    f1.open("RNA_codon_table.txt");
    f1.unsetf(ios::skipws);
    f1.seekg (0 , f1.end);
	long size = f1.tellg();
	f1.seekg (0);//by default seeks from beginning
	char* buffer = new char[size];
	f1.read (buffer , size);
	//cout<<"**************"<<endl<<buffer<<endl;
	char arr[size];
	char arr_[size];
	for(int i=0 ; i<size ; i+=5)
    {
        for(int j=0 ; i<size ; j++)
        {
            arr[j]=buffer[i];
        }

    }
    for(int j=0 ; j<size ; j++)
        {
            cout<<"_____"<<arr[j]<<endl;
        }


    for(int i=0 ; i<sizeof(RNA.c_seq) ; i+=4)
    {
        for(int j=0 ; j<sizeof(buffer) ; j+=4)
        {
            if(arr[i]==buffer[j]&&arr[i+1]==buffer[j+1]&&arr[i+2]==buffer[j+2])
            {
                arr_[i]=buffer[j+4];
            }
        }
    }
    for(int j=0 ; j<size ; j++)
    {
        cout<<arr_[j];
    }
    cout<<"---------------------------------------------------"<<endl;
}
void CodonsTable :: setCodon(char* value , char AminoAcid , int index)
{

}
CodonsTable::~CodonsTable()
{
    //dtor
}
