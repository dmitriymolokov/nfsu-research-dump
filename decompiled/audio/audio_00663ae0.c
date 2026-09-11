/* spd-match: far pct=7.53 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00663AE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00662620();
int __cdecl FUN_00662640();
int __cdecl FUN_00663980();
undefined4 __fastcall FUN_00663ae0(int * obj)

{
  undefined4 *puVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort uVar7;
  short sVar8;

  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int local_14;
  int iStack_10;
  undefined4 uStack_4;
  
  if (obj[99] - obj[0x62] < 0x21b) {
    return 0;
  }
  puVar13 = (uint *)(obj[0x61] + obj[0x62]);
  iVar9 = (**(code **)(*obj + 0x34))(*obj,puVar13 + 2,0x210,&local_14);
  if ((0 < iVar9) && (iVar9 < 0x20f)) {
    *(short *)(puVar13 + 1) = (short)iVar9;
    iVar9 = (**(code **)(*obj + 0x28))(*obj);
    obj[9] = iVar9;
    obj[10] = obj[10] + 1;
    obj[0x11] = iVar9;
    obj[0xf] = obj[0xf] + (uint)(ushort)puVar13[1];
    if ((obj[0x13] != 0) && (100 < (uint)(iVar9 - obj[0x13]))) {
      obj[0x13] = 0;
      obj[0x15] = iVar9;
    }
    if ((obj[0x15] != 0) && (100 < (uint)(iVar9 - obj[0x15]))) {
      obj[0x15] = 0;
      obj[0x13] = iVar9;
    }
    *(short *)(puVar13 + 1) = (short)puVar13[1] + -1;
    bVar3 = *(byte *)((ushort)puVar13[1] + 8 + (int)puVar13);
    *(byte *)((int)puVar13 + 6) = bVar3;
    if ((bVar3 & 0x40) != 0) {
      uVar7 = (ushort)puVar13[1] - 0xc;
      *(ushort *)(puVar13 + 1) = uVar7;
      puVar1 = (undefined4 *)(uVar7 + 8 + (int)puVar13);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uStack_4 = puVar1[2];
      *(byte *)((int)puVar13 + 6) = *(byte *)((int)puVar13 + 6) ^ 0x40;
      iVar9 = local_14 - obj[3];
      if (iVar9 < 10) {
        iVar9 = 10;
      }
      obj[3] = local_14;
      iVar10 = FUN_00662640(uVar6);
      obj[4] = iVar10;
      uVar11 = FUN_00662620(uStack_4);
      obj[0xc] = uVar11 & 0xffff;
      sVar8 = FUN_00662640(uVar5);
      sVar8 = (short)obj[3] - sVar8;
      if ((-1 < sVar8) && (sVar8 < 0x9c5)) {
        iVar10 = (int)sVar8;
        if (iVar9 < 0x400) {
          iStack_10 = 0x400 - iVar9;
          iVar12 = iVar10 - obj[7];
          if (iVar12 < 0) {
            iVar12 = -iVar12;
          }
          iVar12 = obj[8] * iStack_10 + iVar12 * iVar9;
          obj[8] = (int)(iVar12 + (iVar12 >> 0x1f & 0x3ffU)) >> 10;
          iVar9 = obj[7] * iStack_10 + iVar10 * iVar9;
          obj[7] = (int)(iVar9 + (iVar9 >> 0x1f & 0x3ffU)) >> 10;
        }
        else {
          obj[7] = iVar10;
          obj[8] = 0;
        }
        obj[0xb] = obj[8] + obj[7];
        if ((uint)(local_14 - obj[6]) < 0xfa) {
          piVar2 = obj + obj[0x1c] * 2 + 0x1d;
          if (iVar10 < (int)(uint)*(ushort *)(obj + obj[0x1c] * 2 + 0x1d)) {
            *(short *)piVar2 = sVar8;
          }
          if ((int)(uint)*(ushort *)((int)piVar2 + 2) < iVar10) {
            *(short *)((int)piVar2 + 2) = sVar8;
          }
          uVar7 = *(ushort *)((int)piVar2 + 6);
          *(ushort *)((int)piVar2 + 6) = uVar7 + 1;
          *(short *)(piVar2 + 1) =
               (short)((int)((uint)*(ushort *)(piVar2 + 1) * (uint)uVar7 + iVar10) /
                      (int)(uVar7 + 1));
        }
        else {
          obj[6] = local_14;
          uVar11 = obj[0x1c] + 1U & 0x1f;
          obj[0x1c] = uVar11;
          *(short *)(obj + uVar11 * 2 + 0x1d) = sVar8;
          *(short *)((int)obj + uVar11 * 8 + 0x76) = sVar8;
          *(short *)(obj + uVar11 * 2 + 0x1e) = sVar8;
          *(undefined2 *)((int)obj + uVar11 * 8 + 0x7a) = 1;
        }
        obj[0x1b] = local_14;
      }
    }
    cVar4 = *(char *)((int)puVar13 + 6);
    if (cVar4 == '\x01') {
      if (0 < (short)puVar13[2]) {
        *(short *)(puVar13 + 2) = (short)puVar13[2] + -1;
        FUN_00663980();
      }
      return 1;
    }
    if (cVar4 == '\x03') {
      (**(code **)(*obj + 0x1c))(*obj);
      return 1;
    }
    if (cVar4 != '\0') {
      uVar11 = (ushort)puVar13[1] + 0xb & 0x7ffc;
      *puVar13 = uVar11;
      obj[0x62] = obj[0x62] + uVar11;
    }
    return 1;
  }
  return 0;
}
