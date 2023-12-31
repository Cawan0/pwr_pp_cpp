#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

void autor(){
    cout<<"Jakub Duda 281343";
}
int dodaj(int a,int b){
    return a+b;
}
float pole_kola(float r){
    return M_PI*pow(r,2);
}
void sortowanie(int &a,int &b){
    if(a>b){
        int c=b;
        b=a;
        a=c;
    }
}
int potega(int x,int n){
    int value=1;
    for(int i=1;i<=n;i++){
        value*=x;
    }
    return value;
}
int fibonacci(int n){
    int a=1;int b=1;
    for(int i=3;i<=n;i++){
        if(a>b){
            b+=a;
        }else if(a<=b){
            a+=b;
        }
    }
    return max(a,b);
}
bool czyPierwsza(int a){
    if(a==2){
        return true;
    }
    for(int i=2;i<=(a/2);i++){
        if(a%i==0)
            return false;
    }
    return true;
}
double euler(){
    double euler=0;
    for(int i=0;i<=10;i++){
        float silnia=1/1;
        for(float o=1;o<=i;o++){
            silnia*=(1/o);
        }
        euler+=silnia;
    }
    return euler;
}
int NWD(int a,int b){
    int dziel=0;
    for(int i=1;i<=max(a,b);i++){
        if((i<=a && i<=b) && (a%i==0 && b%i==0)){
            dziel=i;
    }
}
    return dziel;
}
float biegun(int x,int y){
    float r=sqrt(pow(x,2)+pow(y,2));
    float phi;

    phi=atan(x/y);
    cout<<"r: "<<r<<endl;
    cout<<"phi: "<<phi;
}

int main(){
    int x;
    cout<<"1. Program wyswietlajacy dane autora"<<endl;
    cout<<"2. Program dodajacy dwie podane liczby"<<endl;
    cout<<"3. Program obliczajacy pole kola"<<endl;
    cout<<"4. Program sortujacy dwie podane liczby"<<endl;
    cout<<"5. Program podnoszacy liczbe do wskazanej potengi"<<endl;
    cout<<"6. Program wyswietlajacy wybrana liczbe z ciagu Fibonacciego"<<endl;
    cout<<"7. Program sprawdzajacy czy liczba jest pierwsza"<<endl;
    cout<<"8. Program wyswietlajacy liczbe Eulera"<<endl;
    cout<<"9. Program wyswietlajacy najwyzszy wspolny dzielnik dwoch wprowadzonych liczb"<<endl;
    cout<<"10. Program przeksztalcajacy wspolrzedne kartezjanskie na wspolrzedne biegunowe"<<endl;
    cout<<endl<<"Wybierz opcje: ";
    cin>>x;

    system("cls");

    if(x==1){
        autor();
    }else if(x==2){
        int a,b;
        cout<<"Podaj pierwsza liczbe: ";
        cin>>a;
        cout<<"Podaj druga liczbe: ";
        cin>>b;
        cout<<dodaj(a,b);
    }else if(x==3){
        int r=0;
        cout<<"Podaj r: ";
        cin>>r;
        cout<<pole_kola(r);
    }else if(x==4){
        int a,b;
        cout<<"Podaj pierwsza liczbe: ";
        cin>>a;
        cout<<endl<<"Podaj druga liczbe: ";
        cin>>b;
        sortowanie(a,b);
        cout<<a<<" "<<b<<endl;
    }else if(x==5){
        float a,b;
        cout<<"Podstawa potegi: ";
        cin>>a;
        cout<<"Potega: ";
        cin>>b;
        cout<<potega(a,b);
    }else if(x==6){
        int n;
        cout<<"Ktora liczba ciagu fibonacciego: ";
        cin>>n;
        cout<<fibonacci(n);
    }else if(x==7){
        int x;
        cout<<"Wpisz liczbe: ";
        cin>>x;
        if(czyPierwsza(x)){
            cout<<"Liczba jest pierwsza";
        }else{
            cout<<"Liczba nie jest pierwsza";
        }
    }else if(x==8){
        cout<<euler();
    }else if(x==9){
        int a,b;
        cout<<"Podaj pierwsza liczbe: ";
        cin>>a;
        cout<<"Podaj druga liczbe: ";
        cin>>b;
        cout<<endl<<NWD(a,b);
    }else if(x==10){
        int x,y;
        cout<<"Podaj wspolrzedne x: ";
        cin>>x;
        cout<<"Podaj wspolrzedne y: ";
        cin>>y;

        cout<<biegun(x,y);
    }
}
