#include <iostream>
using namespace std;

int main()
{int a,b,n;

cout<< " 1. Addition\t  2. Subtraction\t  3. Multiplication\t  4.Division\t  5.Mod\n\n";
do{
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Enter a number of the above operations u want to perform: ";
    cin>>n;
}while(n>5 || n<=0);

if (n==1)
{
    cout<<"\nresult= "<<a+b;
}

else if (n==2)
{
    cout<<"\nresult= "<<a-b;
}

else if (n==3)
{
    cout<<"\nresult= "<<a*b;
}

else if (n==4)
{   if (b==0)
    cout<<endl<<"math error";

    cout<<"\nresult= "<<a/b;
}

else if (n==5)
    cout<<"\nresult= "<<a%b;

}
