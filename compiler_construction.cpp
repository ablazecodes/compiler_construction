//written by Shreya Shukla, github: @ablazecodes;

#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

bool check(int no) //this functions true only if the given word has been found in the file otherwise it returns false
{
    if(no>0)
    {
        return true;
    }
    else return false;
}

int main()
{
    string keyword, result; //keyword is the word which is to be searched in result string
    int no;
    ifstream in;
    in.open("demo.txt");
    cout<<"Enter the word you want to search in the document: "<<endl;
    cin>>keyword;
    while(in.eof()==0)
    {
        getline(in, result);
        no = result.find(keyword, 0);
        if(check(no))
        {
            cout<<"The word is present in the document at location "<<no;
        }
        else cout<<"Word not found";
        break;
    }
    in.close();
}