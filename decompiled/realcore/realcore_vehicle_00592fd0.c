/* spd-match: far pct=7.04 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00592FD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00467700();
int __cdecl FUN_00467df0();
int __cdecl FUN_00468d70();
int __cdecl FUN_0046b790();
int __cdecl FUN_00592e80();
int __cdecl FUN_00593100();
int __cdecl FUN_00593170();
extern unsigned char *DAT_007313f4;
extern unsigned char *DAT_00735fe4;
extern int _DAT_006cc8a8;
void __fastcall FUN_00592fd0(int obj)

{
  int iVar1;
  float fVar2;
  int iVar3;

  undefined4 *puVar4;
  float10 fVar5;
  
  puVar4 = (undefined4 *)FUN_00467df0();
  if (puVar4 == (undefined4 *)0x0) {
    fVar2 = *(float *)(obj + 8) - *(float *)(obj + 0xc);
    fVar5 = (float10)FUN_00467700(fVar2);
    if ((fVar5 != (float10)_DAT_006cc8a8) && ((float)fVar5 <= fVar2)) {
      *(float *)(obj + 0x10) = (float)fVar5 + *(float *)(obj + 0xc);
      FUN_00593100();
      return;
    }
  }
  else {
    DAT_007313f4 = DAT_007313f4 + 1;
    *(int *)(*(int *)(obj + 0x18) + 0x260) = *(int *)(*(int *)(obj + 0x18) + 0x260) + 1;
    FUN_0046b790();
    iVar3 = DAT_00735fe4;
    iVar1 = *(int *)(DAT_00735fe4 + 0x18);
    *puVar4 = *(undefined4 *)(DAT_00735fe4 + 0x10);
    *(int *)(iVar3 + 0x18) = iVar1 + -1;
    *(undefined4 **)(iVar3 + 0x10) = puVar4;
    iVar1 = *(int *)(*(int *)(obj + 0x18) + 600);
    if ((*(char *)(iVar1 + 0x16) != '\0') && (*(char *)(iVar1 + 0x1d) != '\0')) {
      FUN_00468d70(*(float *)(obj + 8) - *(float *)(obj + 0xc));
      FUN_00593170(obj,*(undefined4 *)(*(int *)(obj + 0x18) + 600),1);
    }
    iVar1 = *(int *)(*(int *)(obj + 0x18) + 0x25c);
    if ((*(char *)(iVar1 + 0x16) != '\0') && (*(char *)(iVar1 + 0x1d) != '\0')) {
      FUN_00468d70(*(float *)(obj + 8) - *(float *)(obj + 0xc));
      FUN_00593170(obj,*(undefined4 *)(*(int *)(obj + 0x18) + 0x25c),1);
    }
    if (*(char *)(obj + 0x24) != '\0') {
      return;
    }
  }
  FUN_00592e80();
  FUN_00593100();
  return;
}
