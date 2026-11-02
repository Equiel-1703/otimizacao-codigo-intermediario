// Dead Code Elimination
int exemplo_dce(int a)
{
  int x = 20;
  int y = x * 2; // Vai virar 40 no Constant Folding
  int resultado = 0;

  int preparacao = a + 50; // Usado apenas dentro do 'if' abaixo!

  if (y > 100)
  {
    // 40 > 100 é FALSO! Mas o compilador só descobre após propagar 'x' e 'y'!
    resultado = preparacao * 2;
  }
  else
  {
    resultado = a + 1;
  }

  return resultado;
}