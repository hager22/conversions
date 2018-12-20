#ifndef SEQUENCE_H
#define SEQUENCE_H
#include <string>
#include <iostream>
#include <iomanip>

class sequence
{

    protected:
        char* seq;
    public:
       // constructors and destructor

        sequence();
        sequence(int length);
        sequence(sequence& rhs);
        virtual ~sequence();
 	 	// pure virtual function that should be overridden because every
        // type of sequence has its own details to be printed
        virtual void Print()= 0;
 	 	// friend function that will find the LCS (longest common
        // subsequence) between 2 sequences of any type, according to
        // polymorphism
        friend char* Align(sequence * s1, sequence * s2);
        friend istream &operator >>(istream &in , sequence& s) ;
        friend ostream &operator <<(ostream &out , const sequence& s) ;
        friend int operator!=(sequence& s1 , sequence& s2) ;
        friend void operator+(sequence& s1);
        friend void operator==(sequence& s1 , sequence& s2);
        //friend const void operator[](const sequence& s1);
        char* operator[] (int n);



};

#endif // SEQUENCE_H
char* Align(char* s1, char* s2)
{ char* result = new char [sizeof(s1)];
  for (int i=0 ; i<=sizeof(s1)  ; i++)
  {
    for (int j=0 ; j<=sizeof(s2) ; j++)
      {
          if (s1[i] == s2[j])
          {
              result[i]=s1[i];
          }
          else
            continue ;

      }

  }
  for (int k=0 ; k<=sizeof(result) ; k++)
  {
      cout<<result[k]<<" ";
  }
  cout<<"********************************************"<<endl;
}
