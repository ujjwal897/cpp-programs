#include <iostream>

using namespace std;

class integer;
class complex
{
    int a,b;
public:
    void get()
    {
        cin>>a>>b;
    }
    void display()
    {
        cout<<a<<"+i"<<b;
    }
    friend void addition(complex &c,integer in);
};
class integer
{
    int n;
public:
    void get()
    {
        cin>>n;
    }
    void display()
    {
        cout<<n;
    }
    friend void addition(complex &c,integer in);
};
void addition(complex &c,integer in)
{
    c.a=c.a+in.n;
    c.b=c.b+in.n;
}
int main()
{
    complex ob;
    integer ob1;
    ob.get();
    ob1.get();
    addition(ob,ob1);
    ob.display();
    return 0;
}
