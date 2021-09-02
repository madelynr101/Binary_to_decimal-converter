#include <iostream>
#include <string>
#include <bitset>
using namespace std; 

int main()
{
  int decimal; 
  int binary; 
  char convert_decimal; // Do they do want to convert?
  char convert_binary; 

  do
  {
    cout << "Do you want to convert a number from decimal to binary? ('Y' or 'N')" << endl; 
    cin >> convert_decimal; 
  }while ((convert_decimal != 'Y') && (convert_decimal != 'N'));
  
  do
  {
    cout << "Do you want to convert a number from binary to decimal? ('Y' or 'N')" << endl; 
    cin >> convert_binary; 
  } while ((convert_binary != 'Y') && (convert_binary != 'N'));
  

  if(convert_decimal == 'Y')
  {
    cout << "What is your decimal number?" << endl; 
    cin >> decimal; 
    cout << "Here is your number in binary from decimal:" << endl; 
    string str = bitset<4>(decimal).to_string(); 
    cout << str << endl; 
  }

  if(convert_binary == 'Y')
  {
    cout << "Now let's convert a binary number to decimal" << endl; 
    cout << "What is your binary number?" << endl; 
    cin >> binary; 
    cout << "Here is your decimal number from binary:" << endl; 
    unsigned long str2 = bitset<4>(binary).to_ulong(); 
    cout << str2 << endl; 
  }
}
