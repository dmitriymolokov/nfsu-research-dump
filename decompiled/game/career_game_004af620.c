/* spd-match: far pct=11.73 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004134d0();
int __cdecl FUN_00486c80();
int __cdecl FUN_00487ba0();
int __cdecl FUN_004ada60();
int __cdecl FUN_004ae930();
int __cdecl FUN_004aee90();
int __cdecl FUN_004af420();
int __cdecl FUN_004b0340();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b1c50();
int __cdecl FUN_004b1d20();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f68a0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ffb70();
int __cdecl FUN_0053f4b0();
int __cdecl FUN_00540680();
int __cdecl FUN_00569c50();
int __cdecl FUN_0056a040();
int __cdecl FUN_0059fb80();
extern int DAT_006cc568;
extern int DAT_006f1dd8;
extern int DAT_006fb02c;
extern int DAT_00734588;
extern unsigned char *DAT_007356a8;
extern int DAT_00735710;
extern int DAT_0073578c;
extern int DAT_00743c70;
extern unsigned char *DAT_00743c74;
extern int DAT_00746dd0;
extern int DAT_007588c4;
extern int DAT_00758ad4;
extern int DAT_00768208;
extern int DAT_00768418;
extern unsigned char *PTR_FUN_006c61e0;
extern void LAB_004afbee(void);
extern void LAB_00689356(void);
void *ExceptionList;

undefined4 *
FUN_004af620(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00689356;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006c61e0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  (*(unsigned char *)&(local_4)) = 1;
  (local_4 = ((unsigned int)(local_4) & 0xff));
  param_1[0x1a] = param_5;
  FUN_004ae930();
  param_1[0x25] = 1;
  param_1[0x26] = 1;
  param_1[0x28] = 1;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x3a] = 0;
  param_1[0x46] = 1;
  param_1[0x43] = 1;
  (*(unsigned char *)&(local_4)) = 2;
  param_1[0x44] = param_3;
  param_1[0x49] = 4;
  *(undefined2 *)(param_1 + 0x19) = 0;
  param_1[0x3b] = 4;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  if (param_5 == 0) {
    uVar5 = FUN_004134d0();
    param_1[0x1b] = uVar5;
    uVar5 = FUN_004134d0();
    param_1[0x1c] = uVar5;
    uVar5 = FUN_004134d0();
    param_1[0x1d] = uVar5;
    FUN_004f68a0(&DAT_006cc568,&DAT_007588c4);
    iVar6 = FUN_0059fb80();
    if (iVar6 == 0) {
      iVar6 = FUN_0059fb80();
    }
    FUN_004f68a0("%s %d",iVar6,DAT_00758ad4);
    if ((((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
        (iVar6 = FUN_004ffb70(), iVar6 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0x19598ef7);
    }
    if ((((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
        (iVar6 = FUN_004ffb70(), iVar6 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0xcd20936b);
    }
    FUN_004aee90();
    if ((((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
        (iVar6 = FUN_004ffb70(), iVar6 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0xe3507743);
    }
    if ((((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
        (iVar6 = FUN_004ffb70(), iVar6 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0xc34fd0d6);
    }
    FUN_004aee90();
    if ((((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
        (iVar6 = FUN_004ffb70(), iVar6 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0x595086e4);
    }
    if ((((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
        (iVar6 = FUN_004ffb70(), iVar6 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0xd178b58);
    }
  }
  else {
    if (param_5 != 1) goto LAB_004afbee;
    uVar5 = FUN_004134d0();
    param_1[0x1b] = uVar5;
    uVar5 = FUN_004134d0();
    param_1[0x1c] = uVar5;
    uVar5 = FUN_004134d0();
    param_1[0x1d] = uVar5;
    FUN_004f68a0(&DAT_006cc568,&DAT_00768208);
    iVar6 = FUN_0059fb80();
    if (iVar6 == 0) {
      iVar6 = FUN_0059fb80();
    }
    FUN_004f68a0("%s %d",iVar6,DAT_00768418);
    if ((((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
        (iVar6 = FUN_004ffb70(), iVar6 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0x19598ef8);
    }
    if ((((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
        (iVar6 = FUN_004ffb70(), iVar6 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0xcd20936c);
    }
    FUN_004aee90();
    if ((((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
        (iVar6 = FUN_004ffb70(), iVar6 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0xe3507744);
    }
    if ((((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
        (iVar6 = FUN_004ffb70(), iVar6 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0xc34fd0d7);
    }
    FUN_004aee90();
    if ((((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
        (iVar6 = FUN_004ffb70(), iVar6 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0x595086e5);
    }
    if ((((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
        (iVar6 = FUN_004ffb70(), iVar6 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0xd178b59);
    }
  }
  FUN_004aee90();
LAB_004afbee:
  uVar5 = FUN_004af420();
  param_1[0x45] = uVar5;
  FUN_004b0e50(param_1,param_4,param_1[0x46]);
  pvVar7 = _malloc(0x9b0);
  (*(unsigned char *)&(local_4)) = 3;
  if (pvVar7 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00569c50(0,param_1[0x44]);
  }
  param_1[0x10] = uVar5;
  pvVar7 = _malloc(0x9b0);
  (*(unsigned char *)&(local_4)) = 4;
  if (pvVar7 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00569c50(0,param_1[0x44]);
  }
  param_1[0x11] = iVar6;
  *(undefined4 *)(iVar6 + 0x994) = 1;
  *(undefined4 *)(param_1[0x11] + 0x99c) = 1;
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
  if ((*(int *)(param_1[0x45] + 0x1ca8) != 0) && (iVar6 = param_1[0x45] + 0x1570, iVar6 != 0)) {
    FUN_0056a040(iVar6);
    FUN_0056a040(iVar6);
  }
  pvVar7 = _malloc(0x1a0);
  if (pvVar7 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00486c80();
  }
  param_1[0x18] = uVar5;
  param_1[0x20] = uVar5;
  FUN_00487ba0();
  param_1[0x21] = 1;
  pcVar9 = "PLATFORM";
  uVar8 = 0x50;
  iVar6 = -1;
  do {
    iVar6 = iVar6 * 0x21 + uVar8;
    pbVar1 = (byte *)(pcVar9 + 1);
    uVar8 = (uint)*pbVar1;
    pcVar9 = pcVar9 + 1;
  } while (*pbVar1 != 0);
  puVar2 = param_1 + 0x12;
  param_1[0x14] = iVar6;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (iVar6 != 0) {
    *DAT_00743c74 = puVar2;
    puVar4 = puVar2;
    param_1[0x13] = DAT_00743c74;
    DAT_00743c74 = puVar4;
    *puVar2 = &DAT_00743c70;
  }
  if (param_1[0x14] != 0) {
    FUN_00540680();
    FUN_0053f4b0();
  }
  FUN_004ada60(&DAT_00746dd0);
  FUN_004f68c0(0x20,"CAR_NAME_%s",*param_4 * 0xc90 + DAT_00734588);
  uVar5 = FUN_004fd230();
  iVar6 = param_1[0x1b];
  if (iVar6 != 0) {
    *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
    puVar2 = DAT_00735710;
    bVar10 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar6 + 0x5c) = uVar5;
    if (bVar10) {
      (**(code **)*puVar2)(iVar6);
    }
    *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffd | 0x400000;
  }
  param_1[0x47] = 0;
  DAT_006fb02c = 0;
  FUN_004b1c50(0);
  FUN_004b1d20();
  FUN_004b0340(0);
  if (((DAT_006f1dd8 != 0) && (*(int *)(DAT_007356a8 + 0x104) != 0)) &&
     (piVar3 = *(int **)(*(int *)(DAT_007356a8 + 0x104) + 0x14), piVar3 != (int *)0x0)) {
    (**(code **)(*piVar3 + 0x98))(0,0xffffffff);
  }
  ExceptionList = pvStack_c;
  return param_1;
}
