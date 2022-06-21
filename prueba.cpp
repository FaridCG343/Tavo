#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    string message;
    int ast=0;
    getline(cin,message);
    for (int i = 0; i<=message.size(); i++)
    {
        if (message[i]=='*')
        {
            ast++;
        }
        
    }
    if (ast<=1)
    {
        cout<<"BIEN";
    }
    if (ast==2)
    {
        cout<<"HAPPY";
    }
    if (ast>=3)
    {
        cout<<"BUSCAR A TAVO";
    }
    
    
    return 0;
}
