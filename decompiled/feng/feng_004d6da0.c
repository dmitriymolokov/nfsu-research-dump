/* spd-match: far pct=21.48 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D6DA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004d6b80();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004f6d10();
int __cdecl FUN_004f7000();
int __cdecl FUN_004f7350();
extern int DAT_00735710;
int unaff_EBX;
float10 __fastcall FUN_004d6da0(int obj, float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;

  undefined4 unaff_EBX;
  bool bVar4;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  cVar3 = FUN_004d6b80();
  if ((cVar3 == '\0') && (iVar1 = *(int *)(obj + 8), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    puVar2 = DAT_00735710;
    bVar4 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar1 + 0x5c) = unaff_EBX;
    if (bVar4) {
      (**(code **)*puVar2)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  FUN_004f6d10(&local_8,local_4);
  FUN_004f7000(local_8,param_1);
  FUN_004f6910(*(undefined4 *)(obj + 8));
  FUN_004f6970(*(undefined4 *)(obj + 8));
  FUN_004f7350(local_4,&param_1);
  return (float10)param_1;
}
