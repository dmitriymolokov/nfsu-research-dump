/* spd-match: far pct=3.69 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051A8D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_0051c480();
extern int DAT_006f227c;
extern int DAT_00744238;
extern int DAT_0074423c;
extern int DAT_00744244;
extern int DAT_0074424c;
extern int DAT_00744254;
extern int DAT_0074425c;
extern int DAT_00744264;
extern int DAT_00744ab0;
extern unsigned char *DAT_00744ab4;
extern unsigned char *PTR_FUN_006c0130;
extern void LAB_0051a9b6(void);
extern void LAB_0051ac24(void);
undefined4 * __fastcall FUN_0051a8d0(int obj, int param_1)

{
  int *****pppppiVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;

  int *****pppppiVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *****_Memory;
  int iVar14;
  int *local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int ****local_8;
  int ****local_4;
  
  local_8 = (int ****)&local_8;
  local_4 = (int ****)&local_8;
  local_14 = (int *)0x0;
  local_18 = (int *)0x0;
  local_10 = FUN_0051c480(&DAT_00744238,param_1,&local_c,&local_18,&local_8,&local_14,0xffffffff);
  _Memory = (int *****)local_8;
  if (obj != 0) {
    iVar14 = 0;
    *(int **)(obj + 0xc) = local_14;
    *(undefined4 *)(obj + 4) = 0;
    *(undefined4 *)(obj + 8) = 0;
    pppppiVar6 = (int *****)FUN_0040a880();
    for (pppppiVar1 = _Memory; pppppiVar1 != pppppiVar6; pppppiVar1 = (int *****)*pppppiVar1) {
      *(int *)(obj + 4) = *(int *)(obj + 4) + (int)pppppiVar1[2];
      if (iVar14 < (int)local_18) {
        *(int *)(obj + 8) = *(int *)(obj + 8) + (int)pppppiVar1[2];
      }
      iVar14 = iVar14 + 1;
    }
  }
  if (local_10 == 0) {
    if (_Memory != &local_8) {
      do {
        ppppiVar2 = *_Memory;
        ppppiVar3 = _Memory[1];
        *ppppiVar3 = (int ***)ppppiVar2;
        ppppiVar2[1] = (int ***)ppppiVar3;
        _free(_Memory);
        _Memory = (int *****)local_8;
      } while ((int *****)local_8 != &local_8);
    }
    return (undefined4 *)0x0;
  }
  if (obj != 0) {
    iVar14 = 0;
    do {
      if ((&DAT_00744ab0)[iVar14 * 2] == param_1) {
        uVar7 = *(undefined4 *)(&DAT_00744ab4 + iVar14 * 8);
        goto LAB_0051a9b6;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x1b);
    uVar7 = 0;
LAB_0051a9b6:
    *(undefined4 *)(obj + 0x24) = uVar7;
  }
  uVar12 = *(uint *)(local_10 + 0x10);
  if (obj != 0) {
    *(uint *)(obj + 0x10) = uVar12;
  }
  if (uVar12 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = DAT_006f227c % uVar12;
    uVar11 = DAT_006f227c ^ 0x1d872b41;
    uVar8 = uVar11 >> 5 ^ uVar11;
    DAT_006f227c = uVar8 << 0x1b ^ uVar8 ^ uVar11;
  }
  iVar14 = *(int *)(local_10 + 0x28 + uVar12 * 4);
  if (obj != 0) {
    *(uint *)(obj + 0x2c) = uVar12;
  }
  local_18 = DAT_00744244;
  for (iVar9 = 0; (local_18 != (int *)0x0 && (iVar9 < iVar14)); iVar9 = iVar9 + 1) {
    local_18 = (int *)*local_18;
  }
  uVar12 = *(uint *)(local_10 + 0x14);
  if (obj != 0) {
    *(uint *)(obj + 0x14) = uVar12;
  }
  if (uVar12 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = DAT_006f227c % uVar12;
    uVar11 = DAT_006f227c ^ 0x1d872b41;
    uVar8 = uVar11 >> 5 ^ uVar11;
    DAT_006f227c = uVar11 ^ uVar8 << 0x1b ^ uVar8;
  }
  iVar14 = *(int *)(local_10 + 0x68 + uVar12 * 4);
  if (obj != 0) {
    *(uint *)(obj + 0x30) = uVar12;
  }
  local_14 = DAT_0074424c;
  for (iVar9 = 0; (local_14 != (int *)0x0 && (iVar9 < iVar14)); iVar9 = iVar9 + 1) {
    local_14 = (int *)*local_14;
  }
  uVar12 = *(uint *)(local_10 + 0x18);
  if (obj != 0) {
    *(uint *)(obj + 0x20) = uVar12;
  }
  if (uVar12 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = DAT_006f227c % uVar12;
    uVar11 = DAT_006f227c ^ 0x1d872b41;
    uVar8 = uVar11 >> 5 ^ uVar11;
    DAT_006f227c = uVar11 ^ uVar8 << 0x1b ^ uVar8;
  }
  iVar14 = *(int *)(local_10 + 0xa8 + uVar12 * 4);
  if (obj != 0) {
    *(uint *)(obj + 0x3c) = uVar12;
  }
  if (iVar14 == -1) {
    local_c = (int *)0x0;
  }
  else {
    local_c = DAT_00744254;
    for (iVar9 = 0; (local_c != (int *)0x0 && (iVar9 < iVar14)); iVar9 = iVar9 + 1) {
      local_c = (int *)*local_c;
    }
  }
  uVar12 = *(uint *)(local_10 + 0x1c);
  if (obj != 0) {
    *(uint *)(obj + 0x18) = uVar12;
  }
  if (uVar12 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = DAT_006f227c % uVar12;
    uVar11 = DAT_006f227c ^ 0x1d872b41;
    uVar8 = uVar11 >> 5 ^ uVar11;
    DAT_006f227c = uVar11 ^ uVar8 << 0x1b ^ uVar8;
  }
  iVar14 = *(int *)(local_10 + 0xe8 + uVar12 * 4);
  if (obj != 0) {
    *(uint *)(obj + 0x34) = uVar12;
  }
  puVar4 = DAT_0074425c;
  for (iVar9 = 0; (puVar4 != (undefined4 *)0x0 && (iVar9 < iVar14)); iVar9 = iVar9 + 1) {
    puVar4 = (undefined4 *)*puVar4;
  }
  uVar12 = *(uint *)(local_10 + 0x20);
  if (obj != 0) {
    *(uint *)(obj + 0x1c) = uVar12;
  }
  if (uVar12 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = DAT_006f227c % uVar12;
    uVar11 = DAT_006f227c ^ 0x1d872b41;
    uVar8 = uVar11 >> 5 ^ uVar11;
    DAT_006f227c = uVar8 << 0x1b ^ uVar8 ^ uVar11;
  }
  iVar14 = *(int *)(local_10 + 0x128 + uVar12 * 4);
  if (obj != 0) {
    *(uint *)(obj + 0x38) = uVar12;
  }
  puVar5 = DAT_00744264;
  for (iVar9 = 0; (puVar5 != (undefined4 *)0x0 && (iVar9 < iVar14)); iVar9 = iVar9 + 1) {
    puVar5 = (undefined4 *)*puVar5;
  }
  puVar10 = _malloc(0x28);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    iVar14 = 0;
    puVar13 = DAT_0074423c;
    if ((undefined4 **)DAT_0074423c != &DAT_0074423c) {
      do {
        if (puVar13[2] == param_1) goto LAB_0051ac24;
        puVar13 = (undefined4 *)*puVar13;
        iVar14 = iVar14 + 1;
      } while ((undefined4 **)puVar13 != &DAT_0074423c);
    }
    iVar14 = -1;
LAB_0051ac24:
    puVar13 = DAT_0074423c;
    for (iVar9 = 0; (puVar13 != (undefined4 *)0x0 && (iVar9 < iVar14)); iVar9 = iVar9 + 1) {
      puVar13 = (undefined4 *)*puVar13;
    }
    puVar10[3] = puVar13;
    puVar10[4] = local_18;
    puVar10[5] = local_14;
    puVar10[8] = puVar5;
    *puVar10 = &PTR_FUN_006c0130;
    puVar10[6] = puVar4;
    puVar10[7] = local_c;
    puVar10[9] = local_10;
  }
  if ((int *****)local_8 != &local_8) {
    do {
      ppppiVar2 = (int ****)*local_8;
      ppppiVar3 = (int ****)local_8[1];
      *ppppiVar3 = (int ***)ppppiVar2;
      ppppiVar2[1] = (int ***)ppppiVar3;
      _free(local_8);
    } while ((int *****)local_8 != &local_8);
  }
  return puVar10;
}
