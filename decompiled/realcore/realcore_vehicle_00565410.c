/* spd-match: far pct=10.42 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00565410 */
#include <stdlib.h>
int __cdecl FUN_00565300();
int __cdecl FUN_0063f190(void*);
int __cdecl FUN_0063f1a0(void*);
extern int DAT_006f2270;
void __cdecl FUN_00565410(int * obj, int param_1, int param_2) {
  int *piVar7, *puVar2;
  if (param_2 == 0) return;
  FUN_0063f190((char*)param_1 + 0x3c);
  obj[2] = param_2;
  obj[3] = 0x44443333;
  piVar7 = *(int**)(param_1 + 4);
  while (piVar7 != (int*)(param_1 + 4) && piVar7 <= obj) {
    piVar7 = (int*)*piVar7;
  }
  puVar2 = (int*)piVar7[1];
  *puVar2 = (int)obj;
  piVar7[1] = (int)obj;
  obj[1] = (int)puVar2;
  *obj = (int)piVar7;
  FUN_0063f1a0((char*)param_1 + 0x3c);
}
