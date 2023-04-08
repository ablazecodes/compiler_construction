#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

bool check(int no)
{
    if(no>0)
    {
        return true;
    }
    else return false;
}

int main()
{
    string keyword, result;
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