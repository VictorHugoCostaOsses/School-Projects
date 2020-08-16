#include <string.h>
int gControle;

char * inverteStr(char * s)
{
    int m;

  for(int gControle=strlen(s)-1, m =0; gControle>strlen(s)/2; gControle--,m++ ) /* strlen - Tamanho da String*/
  {
     char aux = s[gControle];
     s[gControle] = s[m];
     s[m] = aux;

  }
  return s;

}
