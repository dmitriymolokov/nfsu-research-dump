/* spd-match: far pct=9.16 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059C460 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0044a2a0();
int __cdecl FUN_0044a2c0();
int __cdecl FUN_0059c1b0();
int __cdecl FUN_005a5340();
int __cdecl FUN_005a5730();
int __cdecl FUN_005a6700();
int __cdecl FUN_005a67d0();
int __cdecl FUN_005a71f0();
extern int DAT_006cc7a4;
extern int DAT_0077af30;
extern int _DAT_006cc7dc;
extern int _DAT_006ccc30;
extern void LAB_0059c57d(void);
extern void LAB_0059c5d7(void);
void __fastcall FUN_0059c460(int * obj)

{

  int iVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float local_20;
  undefined4 local_1c;
  int local_18;
  float local_14;
  
  local_14 = (*(float *)(*(int *)(obj[1] + 0x3c) + 0x104) -
             *(float *)(*(int *)(obj[1] + 0x3c) + 0xf4)) * _DAT_006cc7dc;
  if (*(int *)(obj[0x11] + 4) == 0) {
LAB_0059c57d:
    (**(code **)(*obj + 0x2c))(1);
    iVar1 = obj[0xb];
    fVar2 = 0.0;
    if (iVar1 == 0) {
      local_20 = 0.0;
    }
    else {
      local_20 = (float)(&DAT_0077af30)[*(byte *)(iVar1 + 0x83)];
    }
    if ((local_20 != 0.0) && (iVar1 != 0)) {
      iVar3 = FUN_0059c1b0(iVar1);
      obj[0x12] = (int)local_20;
      obj[0x13] = iVar1;
      obj[0x14] = iVar3;
      goto LAB_0059c5d7;
    }
    obj[0x12] = 0;
    obj[0x14] = -1;
  }
  else {
    local_18 = FUN_0059c1b0(obj[0x13]);
    local_20 = 0.0;
    local_1c = 0;
    FUN_005a6700(&local_20,&local_1c,local_18);
    iVar1 = obj[0x11];
    FUN_005a67d0(local_20,0);
    fVar2 = DAT_006cc7a4;
    if (*(int *)(iVar1 + 4) != 0) {
      fVar2 = *(float *)(*(int *)(iVar1 + 8) + 0x58);
    }
    if (local_20 < fVar2 - _DAT_006ccc30) goto LAB_0059c57d;
    fVar2 = DAT_006cc7a4;
    if (*(int *)(iVar1 + 4) != 0) {
      fVar2 = *(float *)(*(int *)(iVar1 + 4 + *(int *)(iVar1 + 4) * 4) + 0x58);
    }
    if ((local_20 < fVar2 == (local_20 == fVar2)) ||
       (fVar4 = (float10)FUN_005a71f0(local_1c),
       fVar4 < (float10)local_14 == (fVar4 == (float10)local_14))) goto LAB_0059c57d;
    local_18 = obj[0x14];
    local_14 = (float)FUN_0044a2c0();
    iVar1 = FUN_0044a2a0();
    obj[0x12] = iVar1;
    obj[0x14] = local_18;
    fVar2 = local_14;
  }
  obj[0x13] = (int)fVar2;
LAB_0059c5d7:
  if (obj[0x12] == 0) {
    FUN_005a5340();
    return;
  }
  FUN_005a5730(obj + 0x12,obj[1]);
  return;
}
