/* spd-match: far pct=16.83 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00450B40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_0044d5f0();
int __cdecl FUN_00647b70();
extern int _DAT_00700674;
undefined4 __fastcall FUN_00450b40(int obj, int *param_1, char param_2)

{
  int iVar1;
  float10 fVar2;

  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  bool bVar5;
  float10 fVar6;
  
  iVar1 = *(int *)(obj + 0x34);
  iVar3 = FUN_00647b70();
  if ((iVar3 != 6) ||
     (iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x1d4) + 0x90) + 0x14),
     bVar5 = *(int *)(iVar1 + 4) == 3, uVar4 = CONCAT31((int3)((uint)iVar1 >> 8),bVar5), !bVar5)) {
    fVar6 = (float10)FUN_0044d5f0();
    fVar2 = (float10)_DAT_00700674;
    uVar4 = CONCAT22(extraout_var,
                     (ushort)(fVar6 < fVar2) << 8 | (ushort)(NAN(fVar6) || NAN(fVar2)) << 10 |
                     (ushort)(fVar6 == fVar2) << 0xe);
    if (fVar6 < fVar2 == 0 && (fVar6 == fVar2) == 0) {
      if ((*param_1 != 1) && (param_2 == '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}
