#include <iostream>

using namespace std;

void identitas (int n)
{for (int i=0; i<n;i++)
{for (int j=0;j<n;j++)
{
     if (i==j) cout<<"1";
     else cout<<"0";
}
cout<<endl;
}
}

int main()
{
    int n;
    cout<<"MENCETAK MATRIX IDENTITAS"<<endl;
    cout<<"________"<<endl;
    cout<<"masukan ordo matrix :";
    cin>>n;
    cout<<endl;
    identitas (n);
}
