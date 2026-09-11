/* spd-match: far pct=11.89 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_c2440_uint_uint/batches/20260724T132831Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl FUN_005b1f01(...);
int __cdecl FUN_005d7899(...);
int __cdecl FUN_005d78db(...);
int __cdecl FUN_005d7ac2(...);
int __cdecl FUN_005e5695(...);
int __cdecl FUN_005e605e(...);
int __cdecl FUN_005e6111(...);
int __cdecl FUN_005e62bd(...);
int __cdecl FUN_005e7477(...);
int __cdecl FUN_00613405(...);
int __cdecl FUN_00613593(...);
extern int _DAT_0069f210;
extern void LAB_005e7aab(...);
extern void LAB_005e7aed(...);
extern void LAB_005e7caf(...);
extern void LAB_005e7d2b(...);
extern void LAB_005e7e91(...);
extern void LAB_005e7e93(...);
extern void LAB_005e7ed5(...);
extern void LAB_005e7ed7(...);

struct ThisCallBox {
  void FUN_005e79cd(uint param_2, uint param_3);
};
void ThisCallBox::FUN_005e79cd(uint param_2, uint param_3) {
  double dVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *local_48 [16];
  uint local_8;
  
  if (((undefined4 *)this)[0x14] != 0) {
    return;
  }
  local_8 = param_3;
  puVar9 = local_48[1];
  puVar4 = local_48[0];
  while (local_48[0] = puVar4, local_48[1] = puVar9, local_8 != 0) {
    puVar9 = (undefined4 *)((undefined4 *)this)[0xd];
    local_8 = local_8 - 1;
    if (puVar9 == (undefined4 *)0x0) {
      FUN_005b1f01(*((undefined4 *)this),((undefined4 *)this) + 4,0,"internal error: stack underflow");
      ((undefined4 *)this)[0x13] = 1;
      return;
    }
    local_48[local_8] = (undefined4 *)puVar9[2];
    ((undefined4 *)this)[0xd] = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 0;
    (**(code **)*puVar9)(1);
    puVar9 = local_48[1];
    puVar4 = local_48[0];
  }
  puVar5 = (undefined4 *)0x0;
  puVar2 = ((undefined4 *)this);
  switch(param_2) {
  case 0:
  case 6:
    goto switchD_005e7a2d_caseD_0;
  case 1:
  case 2:
  case 4:
  case 5:
  case 10:
  case 0x17:
  case 0x19:
  case 0x1d:
  case 0x23:
  case 0x29:
  case 0x2a:
  case 0x2f:
  case 0x30:
    goto LAB_005e7aed;
  case 3:
    puVar5 = (undefined4 *)FUN_005d7899(puVar9,puVar4);
    local_48[0] = (undefined4 *)0x0;
    local_48[1] = (undefined4 *)0x0;
    break;
  case 7:
    if (((undefined4 *)this)[0x1d] == 0) {
      ((undefined4 *)this)[0x1d] = puVar4[6];
    }
    goto switchD_005e7a2d_caseD_0;
  case 8:
    goto LAB_005e7aab;
  case 9:
    local_48[0] = (undefined4 *)0x0;
    if (((int)((undefined4 *)this)[0xe] < 6) || (9 < (int)((undefined4 *)this)[0xe])) {
      pcVar10 = "instruction coissue is not supported in this shader version";
      uVar8 = 0x7eb;
      puVar5 = puVar4;
      puVar2 = puVar4;
      goto LAB_005e7caf;
    }
    puVar4[0x15] = 1;
LAB_005e7aab:
    local_48[0] = (undefined4 *)0x0;
    FUN_005e62bd(puVar4);
    puVar5 = puVar4;
    break;
  case 0xb:
    iVar7 = ((undefined4 *)this)[0xe];
    local_48[1] = (undefined4 *)0x0;
    if (((iVar7 < 2) || (5 < iVar7)) && ((iVar7 < 0xb || (0xe < iVar7)))) {
      pcVar10 = "instruction predication is not supported in this shader version";
      uVar8 = 0x7ec;
      puVar5 = puVar9;
      puVar2 = puVar9;
      goto LAB_005e7caf;
    }
    puVar9[0x10] = (unsigned int)(puVar4);
    puVar4 = puVar9;
    goto LAB_005e7aed;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    local_48[0] = (undefined4 *)0x0;
    if (1 < (unsigned int)(param_3)) {
      puVar4[0xf] = (unsigned int)(puVar9);
      local_48[1] = (undefined4 *)0x0;
    }
    local_8 = 2;
    puVar5 = puVar4;
    if (2 < (unsigned int)(param_3)) {
      puVar9 = puVar4 + 0x11;
      do {
        uVar3 = local_8;
        local_8 = local_8 + 1;
        puVar2 = local_48[uVar3];
        local_48[uVar3] = (undefined4 *)0x0;
        *puVar9 = (unsigned int)(puVar2);
        puVar9 = puVar9 + 1;
      } while (local_8 < (unsigned int)(param_3));
    }
    break;
  case 0x15:
  case 0x16:
    local_48[0] = (undefined4 *)0x0;
    local_8 = 1;
    puVar5 = puVar4;
    if (1 < (unsigned int)(param_3)) {
      puVar9 = puVar4 + 0x11;
      do {
        uVar3 = local_8;
        local_8 = local_8 + 1;
        puVar2 = local_48[uVar3];
        local_48[uVar3] = (undefined4 *)0x0;
        *puVar9 = (unsigned int)(puVar2);
        puVar9 = puVar9 + 1;
      } while (local_8 < (unsigned int)(param_3));
    }
    break;
  case 0x18:
    local_48[0] = (undefined4 *)0x0;
    if (puVar4[7] == 0) {
      uVar8 = FUN_005e605e(puVar9 + 4);
      puVar4[8] = uVar8;
      puVar5 = puVar4;
    }
    else {
      FUN_005b1f01(*((undefined4 *)this),((undefined4 *)this) + 4,0x7e6,"scalar registers cannot be masked");
      ((undefined4 *)this)[0x13] = 1;
      puVar4[8] = 0xf0000;
      puVar5 = puVar4;
    }
    break;
  case 0x1a:
    local_48[0] = (undefined4 *)0x0;
    if (puVar4[5] == 0) {
      puVar4[5] = 0xd000000;
      puVar5 = puVar4;
      break;
    }
    pcVar10 = "not cannot be used with other modifiers";
    uVar8 = 0x7e2;
    puVar5 = puVar4;
    goto LAB_005e7caf;
  case 0x1b:
    iVar7 = puVar4[5];
    local_48[0] = (undefined4 *)0x0;
    if (iVar7 == 0) {
      puVar4[5] = 0x1000000;
      puVar5 = puVar4;
      break;
    }
    if (iVar7 == 0x2000000) {
      puVar4[5] = 0x3000000;
      puVar5 = puVar4;
      break;
    }
    if (iVar7 == 0x4000000) {
      puVar4[5] = 0x5000000;
      puVar5 = puVar4;
      break;
    }
    if (iVar7 == 0x7000000) {
      puVar4[5] = 0x8000000;
      puVar5 = puVar4;
      break;
    }
    if ((iVar7 != 0x9000000) && (iVar7 != 0xa000000)) {
      puVar5 = puVar4;
      if (iVar7 == 0xb000000) {
        puVar4[5] = 0xc000000;
      }
      break;
    }
    pcVar10 = "negate and divide modifiers cannot be combined";
    uVar8 = 0x7db;
    puVar5 = puVar4;
    goto LAB_005e7caf;
  case 0x1c:
    local_48[1] = (undefined4 *)0x0;
    if (puVar4[6] == 1) {
      if (((int)((undefined4 *)this)[0xe] < 6) || (9 < (int)((undefined4 *)this)[0xe])) {
        pcVar10 = "complement is not supported in this shader version";
        uVar8 = 0x7ed;
        puVar5 = puVar9;
      }
      else {
        if (puVar9[5] == 0) {
          puVar9[5] = 0x6000000;
          puVar5 = puVar9;
          break;
        }
        pcVar10 = "complement cannot be used with other modifiers";
        uVar8 = 0x7dc;
        puVar5 = puVar9;
      }
    }
    else {
      pcVar10 = "invalid complement expression";
      uVar8 = 0x7da;
      puVar5 = puVar9;
    }
    goto LAB_005e7caf;
  case 0x1e:
    local_48[0] = (undefined4 *)0x0;
    if (puVar4[7] == 0) {
      uVar8 = FUN_005e6111(puVar9 + 4);
      puVar4[9] = uVar8;
      puVar5 = puVar4;
    }
    else {
      FUN_005b1f01(*((undefined4 *)this),((undefined4 *)this) + 4,0x7e6,"scalar registers cannot be swizzled");
      ((undefined4 *)this)[0x13] = 1;
      puVar4[9] = 0xe40000;
      puVar5 = puVar4;
    }
    break;
  case 0x21:
    puVar9 = (undefined4 *)0x0;
    goto LAB_005e7d2b;
  case 0x22:
LAB_005e7d2b:
    puVar5 = (undefined4 *)FUN_005e7477(puVar4 + 4,puVar9);
    goto LAB_005e7ed7;
  case 0x24:
    puVar4[6] = puVar4[6] + puVar9[6];
    local_48[0] = (undefined4 *)0x0;
    if (puVar4[10] == 0) {
      puVar4[10] = puVar9[10];
      puVar9[10] = 0;
      puVar5 = puVar4;
      break;
    }
    puVar5 = puVar4;
    if (puVar9[10] == 0) break;
    pcVar10 = "only one address register reference allowed in a relative address expression";
    uVar8 = 0x7d9;
LAB_005e7caf:
    FUN_005b1f01(*((undefined4 *)this),puVar2 + 4,uVar8,pcVar10);
    ((undefined4 *)this)[0x13] = 1;
    break;
  case 0x25:
    pvVar6 = _malloc(0x2c);
    if (pvVar6 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_00613593(0,0,0,0,local_48[0]);
    }
    FUN_005e5695(puVar4);
LAB_005e7aed:
    local_48[0] = (undefined4 *)0x0;
    puVar5 = puVar4;
    break;
  case 0x26:
    pvVar6 = _malloc(0x2c);
    if (pvVar6 == (void *)0x0) {
LAB_005e7ed5:
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00613593(0,0,local_48[0][6],0,0);
    }
    goto LAB_005e7ed7;
  case 0x27:
    pvVar6 = _malloc(0x30);
    if (pvVar6 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_005d7ac2(((undefined4 *)this) + 4);
    }
    FUN_005e5695(puVar5);
    puVar5[4] = 2;
    puVar5[6] = 1;
    break;
  case 0x28:
    pvVar6 = _malloc(0x30);
    if (pvVar6 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_005d7ac2(((undefined4 *)this) + 4);
    }
    FUN_005e5695(puVar5);
    puVar5[4] = 2;
    puVar5[6] = 0;
    break;
  case 0x2b:
    puVar4[6] = -puVar4[6];
    local_48[0] = (undefined4 *)0x0;
    puVar5 = puVar4;
    break;
  case 0x2c:
  case 0x2d:
    dVar1 = (double)(int)puVar4[6];
    local_48[0] = (undefined4 *)0x0;
    puVar4[4] = 5;
    if ((int)puVar4[6] < 0) {
      dVar1 = dVar1 + _DAT_0069f210;
    }
    goto LAB_005e7e93;
  case 0x2e:
    dVar1 = (double)(int)puVar4[6];
    local_48[0] = (undefined4 *)0x0;
    puVar4[4] = 5;
    if ((int)puVar4[6] < 0) {
      dVar1 = dVar1 + _DAT_0069f210;
    }
    goto LAB_005e7e91;
  case 0x31:
    dVar1 = *(double *)(puVar4 + 6);
    local_48[0] = (undefined4 *)0x0;
LAB_005e7e91:
    dVar1 = -dVar1;
LAB_005e7e93:
    local_48[0] = (undefined4 *)0x0;
    *(double *)(puVar4 + 6) = dVar1;
    puVar5 = puVar4;
    break;
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
    pvVar6 = _malloc(0x60);
    if (pvVar6 == (void *)0x0) goto LAB_005e7ed5;
    puVar5 = (undefined4 *)FUN_00613405(((undefined4 *)this) + 4,((undefined4 *)this)[0x10],((undefined4 *)this)[0x11],((undefined4 *)this)[0x12]);
    goto LAB_005e7ed7;
  case 0x3d:
  case 0x3e:
  case 0x3f:
    pvVar6 = _malloc(0x30);
    if (pvVar6 == (void *)0x0) goto LAB_005e7ed5;
    puVar5 = (undefined4 *)FUN_005d7ac2(((undefined4 *)this) + 4);
LAB_005e7ed7:
    FUN_005e5695(puVar5);
  }
switchD_005e7a2d_caseD_1f:
  param_2 = 0;
  if ((unsigned int)(param_3) != 0) {
    do {
      if (local_48[param_2] != (undefined4 *)0x0) {
        (**(code **)*local_48[param_2])(1);
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  if (((undefined4 *)this)[0x14] == 0) {
    pvVar6 = _malloc(0x14);
    if (pvVar6 == (void *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_005d78db(puVar5,((undefined4 *)this)[0xd],"Stack");
    }
    if (iVar7 == 0) {
      FUN_005b1f01(*((undefined4 *)this),((undefined4 *)this) + 4,0,"internal error: out of memory");
      ((undefined4 *)this)[0x14] = 1;
      ((undefined4 *)this)[0x13] = 1;
    }
    else {
      ((undefined4 *)this)[0xd] = iVar7;
    }
  }
  else if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(1);
  }
  return;
switchD_005e7a2d_caseD_0:
  puVar5 = (undefined4 *)0x0;
  goto switchD_005e7a2d_caseD_1f;
}
