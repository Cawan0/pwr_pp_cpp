#include <iostream>
#include <string>
#include <cmath>


using namespace std;

void autor(){
    cout<<"281343 Jakub Duda";
}

int dodaj(int a,int b){
    return a+b;   
}

float pole_kola(int r){
    return M_PI*pow(r,2);   
}

void sortowanie(int &a,int &b){
       int c=0;
       if(a>b){
       c=b;
       b=a;
       a=c;
       }
}
float potega(float x,float n){
    int podstawa=x;
    if(n==0){
    return 1;
    }
    for(int i=2;i<=n;i++){
        x*=podstawa;
    }
    return x;
}
int fibonacci(int n){
    int x=0;
    int y=1;

    for(int i=1; i<n; i++){
        if(x<y){
            x+=y;
        }
        else if(y<=x){
            y+=x;
        }
    }
    return max(x,y);
}
bool liczba_pierwsza(int x){
    if(x==2){
        return true;
    }
    for(int i=2;i<x;i++){
        if(x%i==0){
         return false;
            cout<<i<<endl;
        }
    }
    return true;
}
double euler(){ 
    double x=1;
    for(int i=1;i<=20;i++){
    double silnia=1;
        for(int o=1;o<=i;o++){
                silnia*=o;
        }
        x+=1.0/silnia;
    } 
    return x;
}

int main()
{
    int x;
    cout<<"1. Program wyswietlajacy dane autora"<<endl;
    cout<<"2. Program obliczajacy pole kola"<<endl;
    cout<<"3. Program sortujacy dwie podane liczby"<<endl;
    cout<<"4. Program podnoszacy liczbe do wskazanej potengi"<<endl;
    cout<<"5. Program wyswietlajacy wybrana liczbe z ciagu Fibonacciego"<<endl;
    cout<<"6. Program sprawdzajacy czy liczba jest pierwsza"<<endl;
    cout<<"7. Program wyswietlajacy liczbe Eulera"<<endl;
    cout<<endl<<"Wybierz opcje: ";
    cin>>x;
    
    if(x==1){
        autor();
    }else if(x==2){
        int r=0;
        cin>>r;
        cout<<pole_kola(r);
    }else if(x==3){
        int a,b;
        cin>>a;
        cin>>b;
        sortowanie(a,b);
        cout<<a<<" "<<b<<endl;
    }else if(x==4){
        float a,b;
        cout<<"Podstawa potegi: ";
        cin>>a;
        cout<<"Potega: ";
        cin>>b;
        cout<<potega(a,b);
    }else if(x==5){
        int n;
        cout<<"Ktora liczba ciagu fibonacciego: ";
        cin>>n;
        cout<<fibonacci(n);
    }else if(x==6){
        int x;
        cout<<"Wpisz liczbe: ";
        cin>>x;
        cout<<liczba_pierwsza(x);
    }else if(x==7){
        cout<<euler();   
    }
        
}