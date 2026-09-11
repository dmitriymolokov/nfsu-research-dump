/* spd-match: far pct=14.17 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0050ADA0 */
#include "ghidra_compat.h"
void __cdecl FUN_00416bb0(int);
int __cdecl FUN_00495f00(int);
int __cdecl FUN_00495fc0(void);
int __cdecl FUN_004ef050(int);
int __cdecl FUN_004f3f90(int*);
int __cdecl FUN_004f42f0(const char*, ...);
int __cdecl FUN_004f65d0(void);
int __cdecl FUN_004f67f0(int*, ...);
int __cdecl FUN_004f6850(int*, int, void*);
int __cdecl FUN_004f6910(int);
int __cdecl FUN_004f6970(int);
int __cdecl FUN_004f7c00(int, int, int, int);
int __cdecl FUN_004ffb70(void);
int __cdecl FUN_005042d0(int*);
int __cdecl FUN_005048e0(int*);
int __cdecl FUN_00509d70(int);
int __cdecl FUN_0050ab00(int, int);
int __cdecl FUN_00565da0(const char*, ...);
int __cdecl FUN_0059fb80(void);
int __cdecl FUN_005a08b0(void);
extern int DAT_006b9172; extern int DAT_006ca778; extern int DAT_006cc578; extern int DAT_006f889c; extern int DAT_00735730;
extern int DAT_0073578c; extern int DAT_00735ec1; extern int DAT_00744ff0; extern int* DAT_00745728; extern int DAT_00746104;
extern int DAT_00777b4c;
void FUN_0050ada0(int p1) {
  int* p_state = (int*)*(int*)(p1 + 0x40);
  int esi = (int)p_state;
  int uVar2, iVar3;
  FUN_005048e0(&DAT_00744ff0);
  FUN_00495f00(DAT_00735730);
  uVar2 = FUN_005042d0(&DAT_00744ff0);
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (iVar3 && *(int*)(iVar3 + 0x18) && *(int*)(iVar3 + 0x14)) {
     FUN_004f7c00(uVar2, 0, 0, *(int*)(iVar3 + 0x18));
  }
  iVar3 = *(int*)(esi + 8);
  if (!iVar3) uVar2 = FUN_004f42f0("MOD_DESC_STOCK");
  else {
    switch(DAT_006f889c) {
       case 0: uVar2 = FUN_004f42f0("MOD_DESC_WEIGHT_%d", iVar3); break;
    }
  }
}
