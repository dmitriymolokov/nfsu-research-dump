/* spd-match: far pct=8.93 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_0048DD00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004831c0(...);
int __cdecl FUN_00483430(...);
int __cdecl FUN_0048da20(...);
int __cdecl FUN_0048dc10(...);
extern int DAT_006cc7a4;
extern int DAT_00705cf0;
extern int DAT_00705cf4;
extern int DAT_00705cf8;
extern int DAT_00736860;
extern int DAT_00736864;
extern int DAT_00736868;
extern int DAT_007788bc;

struct ThisCallBox {
  void FUN_0048dd00(undefined4 val, undefined4 param_2, undefined4 param_3, int param_4);
};
void ThisCallBox::FUN_0048dd00(undefined4 val, undefined4 param_2, undefined4 param_3, int param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  uint uVar12;
  
  FUN_0048da20(val);
  FUN_0048dc10();
  fVar11 = DAT_00736868;
  fVar10 = DAT_00736864;
  fVar9 = DAT_00736860;
  fVar8 = DAT_00705cf8;
  fVar7 = DAT_00705cf4;
  fVar6 = DAT_00705cf0;
  fVar3 = *(float *)(param_4 + 0x10) * DAT_006cc7a4;
  fVar4 = *(float *)(param_4 + 0x14) * DAT_006cc7a4;
  fVar5 = *(float *)(param_4 + 0x18) * DAT_006cc7a4;
  FUN_00483430();
  FUN_004831c0(fVar3 + fVar6,fVar4 + fVar7,fVar5 + fVar8);
  fVar3 = *(float *)(param_4 + 0x40) * DAT_006cc7a4;
  fVar4 = *(float *)(param_4 + 0x44) * DAT_006cc7a4;
  fVar5 = *(float *)(param_4 + 0x48) * DAT_006cc7a4;
  FUN_00483430();
  FUN_004831c0(fVar3 + fVar9,fVar4 + fVar10,fVar5 + fVar11);
  uVar12 = (uint)DAT_007788bc;
  pfVar1 = *(float **)(((int)this) + 0x80);
  pfVar1[2] = (float)uVar12;
  if ((float)uVar12 != *pfVar1) {
    *(undefined2 *)(pfVar1 + 0xb) = 2;
  }
  puVar2 = *(undefined4 **)(((int)this) + 0x80);
  puVar2[1] = puVar2[3];
  *puVar2 = puVar2[2];
  *(undefined2 *)(puVar2 + 0xb) = 0;
  puVar2 = *(undefined4 **)(((int)this) + 0x84);
  *puVar2 = puVar2[2];
  puVar2[1] = puVar2[3];
  *(undefined2 *)(puVar2 + 0xb) = 0;
  puVar2[0xc] = puVar2[0xe];
  puVar2[0xd] = puVar2[0xf];
  *(undefined2 *)(puVar2 + 0x17) = 0;
  puVar2[0x18] = puVar2[0x1a];
  puVar2[0x19] = puVar2[0x1b];
  *(undefined2 *)(puVar2 + 0x23) = 0;
  puVar2 = *(undefined4 **)(((int)this) + 0x88);
  *puVar2 = puVar2[2];
  puVar2[1] = puVar2[3];
  *(undefined2 *)(puVar2 + 0xb) = 0;
  puVar2[0xc] = puVar2[0xe];
  puVar2[0xd] = puVar2[0xf];
  *(undefined2 *)(puVar2 + 0x17) = 0;
  puVar2[0x18] = puVar2[0x1a];
  puVar2[0x19] = puVar2[0x1b];
  *(undefined2 *)(puVar2 + 0x23) = 0;
  return;
}
