/* spd-match: far pct=33.33 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_00671F1F */
#include "ghidra_compat.h"
int __cdecl FUN_00675b84(int, void*);
int __cdecl FUN_00675bbf(int);
int __cdecl FUN_006718b6(void*);
int __cdecl FUN_00671ed3(void*);
int __cdecl FUN_00671f68(void);
int __cdecl FUN_00671f1f(void *esi) {
  int local_1c;
  int local_4;
  FUN_00675b84(0xc, (void*)0x6abef0);
  local_1c = -1;
  if ((*(unsigned char*)((char*)esi + 0xc) & 0x40) != 0) {
    *(int*)((char*)esi + 0xc) = 0;
    return FUN_00675bbf(local_1c);
  }
  while(1) {
    FUN_006718b6(esi);
    local_4 = 0;
    local_1c = FUN_00671ed3(esi);
    local_4 = -1;
    FUN_00671f68();
  }
}
