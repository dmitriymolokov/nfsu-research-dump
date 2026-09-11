/* spd-match: far pct=8.31 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005826C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00564ad0();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_0078efa0;
extern int _DAT_0078efa0;
extern int _DAT_0078efa4;
extern int _DAT_0078efa8;
extern int _DAT_0078efb0;
extern void LAB_00582700(void);
extern void LAB_00582710(void);
undefined * __fastcall FUN_005826c0(int obj, float param_1)

{
  float *pfVar1;

  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float local_24;
  
  if ((_DAT_0078efb0 & 1) == 0) {
    _DAT_0078efb0 = _DAT_0078efb0 | 1;
  }
  iVar4 = *(int *)(obj + 8);
  if (iVar4 == 0) {
LAB_00582700:
    iVar2 = *(int *)(obj + 4) + -1;
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 != 2) {
        local_24 = 0.0;
        goto LAB_00582710;
      }
      goto LAB_00582700;
    }
    iVar2 = *(int *)(obj + 4);
  }
  local_24 = (float)iVar2;
LAB_00582710:
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      FUN_00564ad0(param_1,local_24);
    }
    else if (iVar4 == 2) {
      if (param_1 < DAT_006cc7a4) {
        pfVar1 = *(float **)(obj + 0xc);
        pfVar3 = *(float **)(obj + 0xc);
        _DAT_0078efa0 = (pfVar1[4] - *pfVar1) * param_1 + *pfVar3;
        _DAT_0078efa4 = pfVar3[1] + (pfVar1[5] - pfVar1[1]) * param_1;
        _DAT_0078efa8 = pfVar3[2] + (pfVar1[6] - pfVar1[2]) * param_1;
        return &DAT_0078efa0;
      }
      if (local_24 < param_1) {
        iVar2 = *(int *)(obj + 0xc);
        pfVar3 = (float *)((*(int *)(obj + 4) + -2) * 0x10 + iVar2);
        iVar5 = *(int *)(obj + 4) * 0x10;
        iVar4 = iVar5 + -0x10 + iVar2;
        param_1 = param_1 - local_24;
        pfVar1 = (float *)(*(int *)(obj + 4) * 0x10 + -0x10 + *(int *)(obj + 0xc));
        _DAT_0078efa0 = (*(float *)(iVar5 + -0x10 + iVar2) - *pfVar3) * param_1 + *pfVar1;
        _DAT_0078efa4 = pfVar1[1] + param_1 * (*(float *)(iVar4 + 4) - pfVar3[1]);
        _DAT_0078efa8 = pfVar1[2] + param_1 * (*(float *)(iVar4 + 8) - pfVar3[2]);
        return &DAT_0078efa0;
      }
    }
  }
  iVar4 = FUN_00674898();
  return (undefined *)(iVar4 * 0x10 + *(int *)(obj + 0xc));
}
