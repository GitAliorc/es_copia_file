#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream fin("miofile.txt");
    ofstream fout("copiamiofile.txt");
    while(fin.get(a))
    {
        fout<<a;
    }
    fin.close();
    fout.close();
    
}
