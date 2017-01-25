#include<iostream>
#include<cctype>
using namespace std;
int main()
{
      char messystring[]="t6HI9s6.is.999a9.STRING";
  char current=messystring[0];
  for(int i=1; current!='\0';current=messystring[i++])
    {
        if(isalpha(current))
            cout<<(char)(isupper(current)?tolower(current):current);
        else if(ispunct(current))
            cout<<' ';

    }
    cout<<endl;
    return 0;



}
