/* spd-match: far pct=6.41 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004216b0();
int __cdecl FUN_00421a30();
int __cdecl FUN_00424b50();
int __cdecl FUN_004420e0();
int __cdecl FUN_00442110();
int __cdecl FUN_0044bd10();
int __cdecl FUN_00458f10();
int __cdecl FUN_00459ac0();
int __cdecl FUN_00465430();
int __cdecl FUN_004654f0();
int __cdecl FUN_0059bb80();
extern int DAT_006b77f8;
extern int DAT_006cc7a4;
extern int DAT_00736090;
extern int DAT_007360b8;
extern int DAT_0073ad34;
extern unsigned char *DAT_0077a00c;
extern int DAT_0077a048;
extern int _DAT_006cc798;
extern int _DAT_006cc83c;
extern int _DAT_006cca38;
extern int _DAT_006ccac0;
extern int _DAT_0077a498;
extern void LAB_0044c7b7(void);

void FUN_0044c550(int *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  (**(code **)(*(int *)param_1[2] + 0x3c))(param_1[0xfe] + 0x20);
  FUN_0044bd10();
  fVar10 = (float10)DAT_006cc7a4;
  fStack_1c = DAT_006cc7a4;
  uVar2 = 1;
  if (*(int *)param_1[0xf6] == 0) {
    fStack_24 = DAT_006cc7a4;
  }
  else if (DAT_007360b8 == 0) {
    if (DAT_00736090 == 0) {
      iVar6 = param_1[0xfe];
      if (*(char *)(iVar6 + 0x1f0) == '\0') {
        fStack_24 = *(float *)(iVar6 + 0x1e4);
        fStack_20 = *(float *)(iVar6 + 0x1e8);
      }
      else {
        uVar5 = (**(code **)(*param_1 + 0x58))();
        if (param_1[0x11e] == -1) {
          iVar6 = FUN_00421a30();
          fStack_24 = _DAT_006cc798;
          if (iVar6 == 0) {
            if (((-1 < (int)uVar5) && ((int)uVar5 < 10)) &&
               (_DAT_0077a498 < (float)(DAT_0073ad34 - param_1[0x100]) * _DAT_006cca38)) {
              bVar1 = (&DAT_0077a048)[uVar5 * 0x54];
              iVar6 = FUN_004216b0((bVar1 + 1) * 2);
              param_1[0x101] = iVar6 - (bVar1 + 1);
              param_1[0x100] = DAT_0073ad34;
            }
            iVar6 = *(int *)param_1[0xf6];
            iVar7 = FUN_004420e0();
            uVar9 = (int)*(short *)(iVar6 + 0x10) - 1;
            uVar8 = (iVar7 + param_1[0x101] < 1) - 1 & iVar7 + param_1[0x101];
            if ((int)uVar9 < (int)uVar8) {
              uVar8 = uVar9;
            }
            iVar7 = FUN_0059bb80();
            fVar3 = (float)((uint)*(byte *)(uVar8 * 0x88 + iVar7 + 0x2e6 + iVar6) << 0x10) *
                    _DAT_006cc83c;
            iVar6 = FUN_00424b50(fVar3,0,0x3a83126f);
            if (iVar6 != 0) {
              fVar3 = _DAT_006ccac0;
            }
            fStack_24 = fVar3 * *(float *)(&DAT_0077a00c + (uVar5 & ((int)uVar5 < 1) - 1) * 0x54);
          }
        }
        else {
          iVar6 = FUN_00442110();
          fStack_24 = (float)((uint)*(byte *)(iVar6 + 0x6a + *(int *)(param_1[0xf6] + 8)) << 0x10) *
                      _DAT_006cc83c;
        }
        fStack_24 = fStack_24 * (float)param_1[0x12e];
        fStack_20 = 0.0;
      }
      uVar2 = *(undefined1 *)(param_1[0xfe] + 0x1f1);
      fStack_1c = *(float *)(param_1[0xfe] + 0x1ec);
      goto LAB_0044c7b7;
    }
    iVar6 = ((int *)param_1[0xf6])[1];
    iVar7 = FUN_0059bb80();
    fStack_24 = (float)((uint)*(byte *)(iVar7 + 0x6a + iVar6) << 0x10) * _DAT_006cc83c;
    fVar10 = extraout_ST0;
  }
  else {
    fStack_24 = 15.0;
    fStack_1c = DAT_006b77f8;
  }
  fStack_20 = (float)fVar10;
LAB_0044c7b7:
  fVar10 = (float10)(**(code **)(*(int *)param_1[0xff] + 0x10))();
  if (fVar10 < (float10)fStack_24) {
    fStack_24 = (float)fVar10;
  }
  (**(code **)(*(int *)param_1[2] + 0x38))(fStack_24,fStack_20,fStack_1c,uVar2);
  if ((param_1[0xfe] != 0) && (*(char *)(param_1[0xfe] + 499) != '\0')) {
    cVar4 = FUN_00465430();
    if (cVar4 == '\0') {
      (**(code **)(*param_1 + 0x7c))();
    }
    FUN_004654f0();
  }
  if (*(char *)(param_1[0xfe] + 0x20) < '\x06') {
    FUN_00459ac0(param_1[0xfe] + 0x20,param_1[1],0);
  }
  FUN_00458f10(0,0);
  return;
}
