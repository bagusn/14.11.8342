#include <iostream>
#include <string>
using namespace std;
class rumus
{
    protected :
    float r;//deklarasi jari-jari
    float t;//deklarasi tinggi
    float p;//deklarasi panjang
    float l;//deklarasi lebar
    float s;//deklarasi sisi
    float L;//deklarasi luas
    float V;//deklarasi Volume
};

class rumus_balok: public rumus//kelas rumus balok
{
    public:
        void input()//fungsi input
        {
            cout<<"Masukkan panjang : "; cin>>p;//inisiasi panjang
            cout<<"Masukkan tinggi : "; cin>>t;//inisiasi tinggi
        }
        void output()//fungsi output
        {
            L=2*(p*l+p*t+l*t);//rumus luas balok
            cout<<"Luas balok : "<<L<<endl;//tampilan hasil luas balok
            V=p*l*t;//rumus volume balok
            cout<<"Volume balok : " <<V<<endl;//tampilan hasil volume balok       
        }
};
class rumus_kubus: public rumus//kelas rumus balok
{
public:
    void input()//fungsi input
    {
        cout<<"Masukkan sisi : " ;cin>>s;//inisiasi sisi
    }
    void output()//fungsi output
    {
        L=6*s*s;//rumus luas kubus
        cout<<"Luas kubus : "<<L<<endl;//tampilan hasil luas kubus
        V=s*s*s*s;//rumus volume
        cout<<"Volume kubus : "<<V<<endl;//tampilan hasil volume kubus
    }
};
class rumus_bola: public rumus//kelas rumus bola
{
    private:
        float phi;//deklarasi phi
    public:
        void input()//fungsi input
        {
            cout<<"Masukkan jari-jari : "; cin>>r;//inisiasi jari-jari
        }
        void output()//fungsi output
        {
            phi = 3.14;//rumus
            L=4*phi*r*r;//rumus jari-jari
            cout<<"Luas bola : "<<L<<endl;//tampilan hasil luas bola
            V=4/3*phi*r*r*r;//rumus volume bola
            cout<<"Volume bola : " <<V<<endl;//tampilan hasil volume bola          
        }
};
int main()//fungsi utama
{
        rumus_kubus rk;
        rumus_balok rb;
        rumus_bola rbo;
        int pil;
        cout<<"RUMUS BANGUN RUANG"<<endl;//tampilan untuk pilihan
        cout<<"1. Rumus Kubus"<<endl;
        cout<<"2. Rumus Balok"<<endl;
        cout<<"3. Rumus Bola"<<endl;
        cout<<"pilih : "; cin>>pil;//inisiasi pilihan
        if(pil==1)//pilihan 1
        {
            rk.input();//ke fungsi input rumus kubus
            rk.output();//ke fungsi output rumus kubus
            cout<<endl;
        }
        else if (pil==2)//pilihan 2
        {
            rb.input();//ke fungsi input rumus balok
            rb.output();//ke fungsi output rumus balok
            cout<<endl;
        }
        else if(pil==3)//pilihan 3
        {
            rbo.input();//ke fungsi input rumus bola
            rbo.output();//ke fungsi output rumus bola
            cout<<endl;
        }
        return 0;
    
}