/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h> // biblioteca para o "sqrt" (raiz de )

using namespace std;

int main()
{
    double A;
    double B;
    double C;
    cout<<"informe o valor de A" <<endl;
    cin >>A;
    cout << "informe o valor de B" << endl;
    cin >> B;
    cout << "informe o valor de C" << endl;
    cin >> C;
    
    int conta = B*B - 4*A*C; 
    
    if(conta <0){ // sem soluçaõ
        cout << "não existe";
        return 0;
    }else if(conta ==0){ // só uma solução real
        double conta4 = - B/(2 * A);
        cout << "o resultado é " << conta4;
    }else{
        double conta2 = (- B - sqrt(conta))/(2*A); 
        double conta3 = (- B + sqrt(conta))/(2*A);
        cout << "os resultados são " << conta2 << " e " << conta3;
    }
   
    
   
    

    return 0;
}

