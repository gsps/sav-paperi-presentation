#include<stdio.h>

const int * max_const(const int * p1, const int * p2) {
   if (*p1 < *p2) {
      return p2;
   } else {
      return p1;
   }
}

int * max_nonconst(int * p1, int * p2) {
   if (*p1 < *p2) {
      return p2;
   } else {
      return p1;
   }
}

int main() {
   int v1 = 8;
   int v2 = 5;

   const int * p1_const = &v1;
   const int * p2_const = &v2;
   int bigger = *(max_const(p1_const, p2_const));
   printf("%d\n", bigger);
   
   int * p1_nonconst = &v1;
   int * p2_nonconst = &v2;
   int * p_bigger = max_nonconst(p1_nonconst, p2_nonconst);
   (*p_bigger)--;
   printf("%d %d\n", v1, v2);
   
   return 0;
}

