/* spd-match: far pct=2.06 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_006511b0();
int __cdecl FUN_00651490();
int __cdecl FUN_00651a00();
int __cdecl FUN_00652270();
int __cdecl FUN_006525f0();
int __cdecl FUN_00652b60();
int __cdecl FUN_00652ca0();
int __cdecl FUN_00659a70();
extern unsigned char *DAT_006aaa32;
extern int DAT_00713ce0;
extern int DAT_00713f48;
extern unsigned char *DAT_00713f70;
extern int _DAT_006ccbec;
int __cdecl func_0x0065bfa0();
int __cdecl func_0x0065c060();
int __cdecl func_0x0065c070();

undefined4
FUN_00657DD0(undefined2 param_1,undefined2 param_2,undefined4 param_3,char *param_4,int param_5,
           short param_6,int param_7,int param_8)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  float fStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  int iStack_4;
  
  iStack_18 = (int)param_4[1];
  iStack_8 = (int)param_4[5];
  uStack_24 = 0;
  while( true ) {
    uStack_2c = 0xfffffff7;
    do {
      iStack_10 = FUN_00659a70(&uStack_24,param_5);
      if (iStack_10 == 0) {
        return uStack_2c;
      }
      FUN_00651a00(iStack_10,&uStack_1c,&uStack_20);
      iStack_28 = FUN_00652270((int)*(char *)(param_5 + 3),(int)*(char *)(param_5 + 0xc),&uStack_2c,
                               uStack_1c,uStack_20);
    } while (iStack_28 < 0);
    iVar8 = (int)*(char *)(param_5 + 0x11);
    iStack_4 = iStack_28 * 0x8c;
    iVar11 = iStack_4 + DAT_00713f48;
    if (*(char *)(param_5 + 0x12) != '\0') {
      iVar6 = func_0x0065c070((int)*(char *)(param_5 + 0x12));
      iVar8 = iVar8 + iVar6;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0x7f < iVar8) {
        iVar8 = 0x7f;
      }
    }
    uVar4 = func_0x0065c060(iVar8);
    *(undefined2 *)(iVar11 + 0x4c) = uVar4;
    sVar5 = *(short *)(param_5 + 4);
    *(short *)(iVar11 + 0x84) = sVar5;
    sVar5 = sVar5 + (param_6 - *(char *)(param_5 + 0xd)) * 100;
    *(short *)(iVar11 + 0x84) = sVar5;
    if (param_8 != 0) {
      *(short *)(iVar11 + 0x84) = sVar5 + (short)param_8;
    }
    if (*(short *)(param_5 + 6) != 0) {
      sVar5 = func_0x0065c070((int)*(short *)(param_5 + 6));
      *(short *)(iVar11 + 0x84) = *(short *)(iVar11 + 0x84) + sVar5;
    }
    *(undefined4 *)(iVar11 + 0x74) = *(undefined4 *)(param_5 + 0x24);
    iVar8 = (int)*(char *)(param_5 + 0x14);
    if (*(char *)(param_5 + 0x15) != '\0') {
      iVar6 = func_0x0065c070((int)*(char *)(param_5 + 0x15));
      iVar8 = iVar8 + iVar6;
    }
    if (iVar8 < 0x80) {
      if (iVar8 < 0) {
        iVar8 = 0;
      }
    }
    else {
      iVar8 = 0x7f;
    }
    puStack_c = (undefined *)((iVar8 * param_7) / 0x7f);
    *(short *)(iVar11 + 0x82) = *(char *)(param_5 + 0x10) * 100;
    *(undefined1 *)(iVar11 + 100) = (undefined1)iStack_18;
    piVar3 = *(int **)(param_5 + 0x28);
    *(int **)(iVar11 + 0x6c) = piVar3;
    *(int *)(iVar11 + 0x40) = (int)*(char *)(param_5 + 0x1a) << 0x10;
    iVar8 = *piVar3;
    iVar6 = 0;
    *(int *)(iVar11 + 0x44) = iVar8;
    if (iVar8 < 0) {
      *(undefined4 *)(iVar11 + 0x44) = 0x7fffffff;
    }
    *(int *)(iVar11 + 0x3c) =
         (piVar3[1] * 0x10000 - *(int *)(iVar11 + 0x40)) / *(int *)(iVar11 + 0x44);
    *(undefined4 *)(iVar11 + 0x7c) = *(undefined4 *)(param_5 + 0x30);
    *(undefined1 *)(iVar11 + 0x66) = *(undefined1 *)(param_5 + 0x1d);
    *(undefined2 *)(iVar11 + 0x80) = *(undefined2 *)(param_5 + 0x54);
    if (*(char *)(param_5 + 0x1c) == '\0') {
      *(undefined1 *)(iVar11 + 0x67) = 0;
    }
    else {
      uVar7 = FUN_006511b0();
      *(char *)(iVar11 + 0x67) = (char)(uVar7 % (uint)(int)*(char *)(param_5 + 0x1c));
    }
    if (*(char *)(param_5 + 0x1e) == '\0') {
      *(undefined1 *)(iVar11 + 0x68) = 0;
    }
    else {
      uVar7 = FUN_006511b0();
      *(char *)(iVar11 + 0x68) = (char)(uVar7 % (uint)*(byte *)(param_5 + 0x1d));
    }
    *(undefined2 *)(iVar11 + 0x6a) = *(undefined2 *)(param_4 + 0xe);
    *(undefined2 *)(iVar11 + 0x88) = *(undefined2 *)(param_4 + 0xc);
    *(undefined2 *)(iVar11 + 0x86) = 0;
    FUN_00652ca0(iStack_28);
    *(undefined2 *)(iVar11 + 0x12) = param_1;
    *(undefined2 *)(iVar11 + 0x10) = param_2;
    *(undefined4 *)(iVar11 + 0x18) = *(undefined4 *)(param_5 + 0x60);
    *(undefined4 *)(iVar11 + 0x14) = *(undefined4 *)(param_5 + 0x58);
    *(undefined2 *)(iVar11 + 0x20) = *(undefined2 *)(param_5 + 0x56);
    *(undefined1 *)(iVar11 + 0x22) = *(undefined1 *)(param_5 + 0x13);
    *(undefined1 *)(iVar11 + 0x23) = *(undefined1 *)(param_5 + 3);
    iVar8 = (int)*(char *)(param_5 + 3);
    fStack_14 = (float)(int)*param_4 * _DAT_006ccbec;
    if (0 < iVar8) {
      do {
        *(short *)(iVar11 + 0x50 + iVar6 * 2) =
             *(short *)(param_5 + 0xbc + iVar6 * 2) -
             *(short *)(&DAT_00713f70 + (iVar6 + iVar8 * 6) * 2);
        iVar8 = (int)*(short *)(iVar11 + 4 + iVar6 * 2);
        iVar10 = iVar8 * 0x8c + DAT_00713f48;
        *(undefined2 *)(iVar10 + 0x24) = (undefined2)iStack_10;
        *(undefined1 *)(iVar10 + 0x2b) = (*(unsigned char *)&(puStack_c));
        *(char *)(iVar10 + 0x5f) = param_4[4];
        *(float *)(iVar10 + 0x38) = fStack_14;
        *(undefined4 *)(iVar10 + 0x70) = *(undefined4 *)(param_5 + 0x20);
        *(undefined4 *)(iVar10 + 0x30) = 0;
        *(undefined1 *)(iVar10 + 0x5c) = *(undefined1 *)(param_5 + 0xf);
        *(undefined1 *)(iVar10 + 0x5e) = *(undefined1 *)(param_5 + 0xe);
        *(undefined1 *)(iVar10 + 0x5d) = 0;
        *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(iVar11 + 0x40);
        *(undefined4 *)(iVar10 + 0x44) = *(undefined4 *)(iVar11 + 0x44);
        *(undefined4 *)(iVar10 + 0x3c) = *(undefined4 *)(iVar11 + 0x3c);
        *(undefined4 *)(iVar10 + 0x6c) = *(undefined4 *)(iVar11 + 0x6c);
        *(undefined1 *)(iVar10 + 0x65) = *(undefined1 *)(param_5 + 0x1b);
        *(undefined1 *)(iVar10 + 0x67) = *(undefined1 *)(iVar11 + 0x67);
        *(undefined4 *)(iVar10 + 0x78) = *(undefined4 *)(param_5 + 0x2c);
        FUN_00652b60(iVar8);
        *(bool *)(iVar10 + 0x4e) = iVar6 == 5;
        iVar8 = (int)*(char *)(param_5 + 3);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar8);
    }
    iVar8 = iStack_28;
    cVar1 = *(char *)(param_5 + 3);
    if (cVar1 == '\x01') {
      *(short *)(iVar11 + 0x1c) =
           *(short *)(iVar11 + 0x50) + *(short *)(param_4 + 8) + *(short *)(iVar11 + 0x4c);
      *(undefined2 *)(iVar11 + 0x1e) = *(undefined2 *)(param_4 + 10);
    }
    else {
      puStack_c = &DAT_006aaa32 + ((int)cVar1 + DAT_00713ce0 * 6) * 6;
      iVar6 = 0;
      if (0 < cVar1) {
        psVar9 = (short *)(iVar11 + 0x50);
        do {
          iVar10 = psVar9[-0x26] * 0x8c + DAT_00713f48;
          bVar2 = puStack_c[iVar6];
          *(ushort *)(iVar10 + 0x1c) = (ushort)bVar2 * 0x100;
          *(ushort *)(iVar10 + 0x1c) = *psVar9 + (ushort)bVar2 * 0x100;
          *(undefined2 *)(iVar10 + 0x1e) = 0;
          iVar6 = iVar6 + 1;
          psVar9 = psVar9 + 1;
        } while (iVar6 < *(char *)(param_5 + 3));
      }
    }
    *(undefined1 *)(iVar11 + 0x60) = *(undefined1 *)(param_5 + 0x16);
    *(undefined1 *)(iVar11 + 0x61) = (undefined1)iStack_8;
    FUN_00651490(0,iStack_28);
    iVar8 = func_0x0065bfa0(param_5,param_3,iVar8,*(undefined2 *)(param_4 + 0xe),
                            *(undefined2 *)(param_4 + 0x12),*(undefined2 *)(param_4 + 0x14),
                            *(undefined2 *)(param_4 + 0x16));
    if (-1 < iVar8) break;
    iVar8 = 0;
    if ('\0' < *(char *)(param_5 + 3)) {
      iVar11 = iStack_4 + 4;
      do {
        FUN_006525f0((int)*(short *)(iVar11 + DAT_00713f48));
        iVar8 = iVar8 + 1;
        iVar11 = iVar11 + 2;
      } while (iVar8 < *(char *)(param_5 + 3));
    }
  }
  return uStack_2c;
}
