#include<iostream>
#include<string>
using namespace std;
int indexof(const char* s1, const char* s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) {
        return -1;
    }
    for (int i = 0; i <= len2 - len1; i++) 
    {
        int j;
        for (j = 0; j < len1; j++) 
        {
            if (s2[i + j] != s1[j]) 
            {
                break;
            }
        }
        if (j == len1) 
            return i;
    }
    return -1;
}
int main()
{
	char s1[100], s2[100];
	cin.getline(s1, 100);
	cin.getline(s2, 100);
	char* p_s1 = s1;
	char* p_s2 = s2;
	cout<<indexof(p_s1,p_s2);
}