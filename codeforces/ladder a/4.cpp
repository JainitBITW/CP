#include<bits/stdc++.h>

using namespace std; 

 
int main()
{
    
char s[110];
cin.getline(s, sizeof(s)); 
char * ptr = s; 
bool vowel = true ; 

while ( *ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z' || *ptr >= 'A' && *ptr <= 'Z')
        {
            if (*ptr == 'a' ||*ptr == 'e' ||*ptr == 'i' ||*ptr == 'o' ||*ptr == 'u' ||*ptr == 'y' ||
                *ptr == 'A' ||*ptr == 'E' ||*ptr == 'I' ||*ptr == 'O' ||*ptr == 'U' ||*ptr == 'Y')
            {
                vowel = true;
            }
            else
            {
                vowel = false;
            }
        }
        ++ptr;



}
cout<< (vowel ? "YES": "NO");

    return 0; 
}