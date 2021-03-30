#include <iostream>
#include <string>


using namespace std;

int search(string pat, string txt) {
   int j, M = pat.length();
   int i, N = txt.length();

   for (i = 0; i <= N - M; i++) {
      for (j = 0; j < M; j++)
         if (txt[i+j] != pat[j])
            break;
      if (j == M) return i;
   }
   return N;
}

int main()
{
    cout << "Verifique se a string está no texto" << endl;
    string pat,txt;
    cout << "Digite uma palavra: ";
    getline(cin, pat);
    cout << "Digite um texto: ";
    getline(cin, txt);

    int resultado;
    resultado=search(pat,txt);

    cout << resultado <<endl;

    return 0;
}
