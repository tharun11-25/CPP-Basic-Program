#include <iostream>
using namespace std;
class dcgen
{
    protected:
    float V,Ra;
    public:
    dcgen()
    {
        V = 0;
        Ra = 0;
    }
    void get()
    {
        cout<<"\nenter the value of voltage:";
        cin>>V;
        cout<<"enter the value of resistance:";
        cin>>Ra;
    }
};
class Series:public dcgen
{
    float Rse, il;
    public:
    Series(float rs,float i)
    {
        Rse = rs;
        il=i;
    }
    void calculate()
    {
        get();
        float e=V+(il*(Ra+Rse));
        cout << "\nSeries Generator: V= "<<e<<"V,I= "<<il<<"A"<<endl;
    }
};
class Shunt : public dcgen
{
    float Rsh, il;
    public:
    Shunt(float rsh,float i)
    {
         Rsh = rsh;
         il=i;
    }
    void calculate()
    {
        get();
        float ish=V/Rsh;
        float ia=il+ish;
        float e=V+(ia*Ra);
        cout << "\nShunt Generator: V= "<<e<<"V,I= "<<il<<"A"<<endl;
    }
};
class Compound:public dcgen
{
    float Rse, Rsh, il;
    public:
    Compound(float rs,float rsh,float i)
    {
        Rse = rs;
        Rsh = rsh;
        il = i;
    }
    void calculate()
    {
        get();
        float ish=V/Rsh;
        float ia=il+ish;
        float e=V+(ia*Ra)+(il*Rse);
        cout << "\nCompound Generator short shunt: V= "<<e<<"V,I= "<<il<<"A"<<endl;
        float e1=V+(ia*(Ra+Rse));
         cout << "\nCompound Generator long shunt: V= "<<e1<<"V,I= "<<il<<"A"<<endl;
    }
};
int main()
{
    Series g(6,4);
    Shunt g1(75,4);
    Compound g2(6,75,7);
    g.calculate();
    g1.calculate();
    g2.calculate();
    return 0;
}
