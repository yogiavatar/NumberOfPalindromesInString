//
//  main.cpp
//  NumberOfPalindromesInString
//
// To find the number of substrings of a string that are palindromes

#include <iostream>


using namespace std;


int main (int argc, const char * argv[])
{


    int i,j,k,count = 0;
    char str[] = "banana";
    
    cout << str <<"\n";
    
    for(i=0; i< strlen(str) ;i++)
    {
        k=i-1; j=i+1; //count odd length palindromes
        while (k>=0 && str[j] && str[k] == str[j])
        {
            count++;
            k--; j++;
        }
        k=i; j=i+1; //count even length palindromes
        while (k>=0 && str[j] && str[k] == str[j])
        {
            count++;
            k--; j++;
        }
    }
    cout << count << "\n";
   
    return 0;

}
