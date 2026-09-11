/* spd-match: far pct=66.67 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00534110 */
#include "ghidra_compat.h"

struct T { int data[200]; };
extern int DAT_006b63ac;
extern int DAT_006be2c8;
void __stdcall FUN_005337f0(void);

void* __fastcall FUN_00534110(void* p) {
  void* esi_save = p;
  FUN_005337f0();
  *(int*)((char*)esi_save + 0x218) = DAT_006b63ac;
  *(int*)esi_save = (int)&DAT_006be2c8;
  *(int*)((char*)esi_save + 0x290) = 0;
  return esi_save;
}
