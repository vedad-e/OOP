#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter your String:";
    getline(cin,str);
    
    int i,j;

     for (i = 0; str[i] != '\0'; ++i) {
     while (str[i] >= 'A' && str[i] <= 'Z') {
         for (j = i; str[j] != '\0'; ++j) {
            str[j] = str[j + 1];
         }
         str[j] = '\0';
      }
   }
       cout<<"After removing uppercase letter string is: "<<str;
}
