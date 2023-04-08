//Code written by Shreya Shukla, github: @ablazecodes//
/*accepts strings starting with 1 and end with 0*/

#include<iostream>
#include<cstring>
using namespace std;

int dfa = 0; //global variable that specifies on which state the input is in the grammar// 
void q0 (char c)
{
    if(c == '0')
    {
        dfa = 0;
    }
    else if (c =='1')
    {
        dfa = 1;
    }
    else dfa = -1;
}

void q1 (char c)
{
    if(c == '0')
    {
        dfa = 2; /* since there are three states: q0, q1 and q2, dfa = 2
        would conclude that the input has reached the final state and hence will be 
        accepted by the grammar
        */
    }
    else if (c == '1')
    {
        dfa = 1;
    }
    else dfa = -1;
}

void q2 (char c)
{
    if ( c == '0')
    {
        dfa = 2;
    }
    else if (c == '1')
    {
        dfa = 1;
    }
    else dfa = -1;
}

int accept(char str[])
{
    for(int i = 0; i<strlen(str); i++)
    {
        if(dfa == 0)
       { 
        q0(str[i]);
       }
        else if (dfa == 1)
        {
        q1(str[i]);
        }
        else if (dfa ==2)
        {
            q2(str[i]);
        }
        else return 0;
    }
}
int main()
{
    int size;
    cout<<"Enter the number of elements you want in the string to be checked:\t";
    cin>>size;
    char str[size];
    cout<<"Enter the string to be checked:\t";
    cin>>str;
    accept(str);
    if(dfa == 2)
    {
        cout<<"THE STRING IS ACCEPTED";
    }
    else cout<<"THE STRING WAS NOT ACCEPTED";
}