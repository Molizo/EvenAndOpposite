#include <iostream>

using namespace std;

int main()
{int n,x,i;
    cout << "Introduceti numarul:";
    cin>>n;
    cout<<"Rezultatul este:"<<endl<<endl;
    x=1;
    for(i=1;i<=n;i++)
    {
        if(x%2==0)
        {
            cout<<"    -"<<x;
            x=x+1;
        }
        else
        {
            cout<<"   "<<x;
            x=x+1;
        }
    }
    cout<<endl<<endl;
    return 0;
}
