#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double a,b,c,d;
    cin >> a; cin >>b; cin >> c; cin >>d;
    double media = ((a*2) + (b*3) + (c*4) + (d* 1)) / (10);
    cout << fixed << setprecision(1);
    cout << "Media: " << setprecision(1) << media << endl;
    if(media > 7){
        cout << "Aluno aprovado." <<endl;
    }
    else if(media >= 5 && media < 7){
        cout << "Aluno em exame."<< endl;
        double exm;
        cin >> exm;
         cout << "Nota do exame: "<< setprecision(1) << exm<< endl;
        media  = (media + exm) /2;
        if(media > 5){
            cout<< "Aluno aprovado."<< endl;
        }
        else{
            cout << "Aluno reprovado."<< endl;
        }
        cout<< "Media final: " << setprecision(1) << media << endl; 
    }
    else{
        cout << "Aluno reprovado."<< endl;

    }
    return 0;
}