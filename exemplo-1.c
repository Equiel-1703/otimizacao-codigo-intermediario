// Constant Propagation & Constant Folding
int exemplo_conspf(void)
{
  int x = 20;
  int y = 10 + x * 30;
  int z = y * 9 + x;

  return z;
}
