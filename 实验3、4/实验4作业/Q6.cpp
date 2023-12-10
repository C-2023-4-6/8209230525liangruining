#include<iostream>  
#include <cctype>  
using namespace std;  
  
void count(char s[], int counts[26])  
{  

    for (int i = 0; s[i] != '\0'; i++)  
    {  
        char c = toupper(s[i]);   
        if (isalpha(c))   
            counts[c - 'A']++;  
    }  
}  
  
int main()  
{  
    char s[100];  
    cin.getline(s, 100);
    cout << s << endl;
    int counts[26] = { 0 };  
    count(s, counts);   
  
    for (int i = 0; i <= 25; i++)  
        cout << (char)(i + 'A') << ':' << counts[i] << "times" << endl;  
}