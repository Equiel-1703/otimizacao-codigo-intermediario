// Common Subexpression Elimination
int exemplo_cse(int a, int b)
{
  int x = (a * b) + 10;
  int y = (a * b) + 20; // (a * b) está sendo calculado pela segunda vez!
  return x + y;
}