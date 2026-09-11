/* spd-match: far pct=9.97 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00417600();
int __cdecl FUN_00431df0();
int __cdecl FUN_004322a0();
int __cdecl FUN_0043de90();
int __cdecl FUN_004ac5a0();
int __cdecl FUN_004b26f0();
int __cdecl FUN_004b3ac0();
int __cdecl FUN_004b4040();
int __cdecl FUN_004b47a0();
int __cdecl FUN_004b6300();
int __cdecl FUN_005748c0();
int __cdecl FUN_005809c0();
int __cdecl FUN_005a05b0();
int __cdecl FUN_00674898();
extern int DAT_00736168;
extern int DAT_0073616c;
extern int DAT_007361a4;
extern unsigned char *DAT_0073b3e8;
extern int DAT_00748f78;
extern int DAT_007588c4;
extern int DAT_0075896c;
extern int DAT_00758974;
extern int DAT_0075eef8;
extern int DAT_0075f240;
extern int DAT_00777ccc;
extern int DAT_0077a904;
extern int DAT_0077a918;
extern int DAT_0078a2f0;
extern int DAT_0078a2fc;
extern int DAT_0078a300;
extern int DAT_0078a30c;
extern int DAT_0078a310;
extern int DAT_0078a318;
extern int DAT_0078a31c;
extern int DAT_0078a320;
extern int DAT_0078a324;
extern int DAT_0078a334;
extern int DAT_0078a335;
extern int DAT_0078a336;
extern int DAT_0078a337;
extern int DAT_0078a33c;
extern int DAT_0078a344;
extern int DAT_0078a345;
extern int DAT_0078a346;
extern int DAT_0078a347;
extern int DAT_0078a348;
extern int DAT_0078a350;
extern int DAT_0078a387;
extern int DAT_0078a3fc;
extern int DAT_0078a400;
extern int DAT_0078a40c;
extern int DAT_0078a41c;
extern int _DAT_0077a90c;
extern int _DAT_0078a304;
extern int _DAT_0078a330;
extern int _DAT_0078a380;
extern int _DAT_0078a404;
extern unsigned char *PTR_LAB_006c5fb8;
extern void LAB_00448d10(void);
extern void LAB_004b5efb(void);
extern void LAB_006897e6(void);
int unaff_EBX;
void *ExceptionList;

void FUN_004b5df0(void)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  char *pcVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined **local_eb0 [5];
  undefined **local_e9c;
  undefined4 local_e98;
  undefined4 local_e94;
  undefined1 local_e90 [8];
  undefined4 local_e88 [271];
  int local_a4c;
  int local_a48;
  float local_38;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_006897e6;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00431df0();
  DAT_0078a347 = 0;
  DAT_0078a320 = 1;
  FUN_005748c0(5);
  *(undefined ***)(&DAT_0073b3e8 + DAT_00748f78 * 0x18c) = local_eb0[DAT_00758974];
  switch(*(undefined4 *)(unaff_EBX + 0x59d4)) {
  default:
    DAT_0078a300 = 0;
    break;
  case 1:
    DAT_0078a300 = 1;
    break;
  case 2:
    DAT_0078a300 = 2;
    break;
  case 3:
    DAT_0078a300 = 3;
  }
  iVar3 = 0;
  DAT_0078a3fc = DAT_0075f240;
  DAT_0078a334 = '\x04';
  DAT_0078a335 = 3;
  _DAT_0078a304 = 0x3f000000;
  _DAT_0078a330 = 0;
  piVar2 = *(int **)(unaff_EBX + 0x5864);
  iVar4 = DAT_00736168;
  if (0 < DAT_0073616c) {
    do {
      if ((int)*(short *)(iVar4 + 0x6c) == *piVar2) goto LAB_004b5efb;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xfc;
    } while (iVar3 < DAT_0073616c);
  }
  iVar4 = 0;
LAB_004b5efb:
  DAT_0078a2f0 = (int)*(short *)(iVar4 + 0x6c);
  DAT_0078a318 = (int)*(char *)(iVar4 + 0x69);
  DAT_0078a2fc = piVar2[1];
  DAT_0078a31c = piVar2[2];
  DAT_0078a30c = 1;
  DAT_0078a33c = 1;
  DAT_0078a344 = 0;
  DAT_0078a345 = '\0';
  DAT_0078a346 = 0;
  DAT_0078a400 = 1;
  _DAT_0078a404 = *(undefined4 *)(unaff_EBX + 0x59cc);
  iVar4 = 0;
  _DAT_0078a380 = *(undefined4 *)(unaff_EBX + 0x59dc + DAT_0075f240 * 4);
  DAT_0078a40c = *(undefined4 *)(unaff_EBX + 0x59e8);
  DAT_0078a324 = 3;
  do {
    (&DAT_0078a348)[iVar4] = (&DAT_00748f78)[iVar4];
    iVar4 = iVar4 + 1;
  } while (iVar4 < DAT_0078a320);
  switch(*(undefined4 *)(unaff_EBX + 0x58a8)) {
  case 1:
    DAT_0078a344 = 1;
    break;
  case 3:
    DAT_0078a345 = '\x01';
    break;
  case 4:
    DAT_0078a30c = 2;
    DAT_0078a310 = FUN_00674898();
    break;
  case 5:
    DAT_0078a30c = 3;
  }
  DAT_0078a324 = *(undefined4 *)(unaff_EBX + 0x59c8);
  if (*(int *)(unaff_EBX + 0x58a8) == 3) {
    DAT_0078a324 = 0;
  }
  DAT_0078a350 = 0;
  DAT_0078a336 = DAT_0075896c;
  DAT_0078a337 = 0;
  FUN_004b47a0();
  if (*(int *)(unaff_EBX + 0x58a8) == 1) {
    DAT_0078a387 = 1;
  }
  DAT_0078a41c = 0;
  FUN_00417600();
  iVar4 = (int)DAT_0078a334;
  if (*(int *)(unaff_EBX + 0x5970) == 0) {
    FUN_004ac5a0(&DAT_0075eef8,0,local_e90);
  }
  else {
    pcVar6 = "DUMMY_SKIN1";
    local_a4c = -1;
    uVar5 = 0x44;
    do {
      local_a4c = local_a4c * 0x21 + uVar5;
      pbVar1 = (byte *)(pcVar6 + 1);
      uVar5 = (uint)*pbVar1;
      pcVar6 = pcVar6 + 1;
    } while (*pbVar1 != 0);
    pcVar6 = "DUMMY_WHEEL1";
    local_a48 = -1;
    uVar5 = 0x44;
    do {
      local_a48 = local_a48 * 0x21 + uVar5;
      pbVar1 = (byte *)(pcVar6 + 1);
      uVar5 = (uint)*pbVar1;
      pcVar6 = pcVar6 + 1;
    } while (*pbVar1 != 0);
    FUN_004b26f0(local_e90);
  }
  if (*(int *)(unaff_EBX + 0x58a0) == 0) {
    puVar7 = local_e88;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 1;
      puVar7 = puVar7 + 1;
    }
  }
  FUN_005809c0(0,1,local_e90,&DAT_007588c4,0xfffffffe,0,iVar4);
  fVar8 = (float10)FUN_005a05b0();
  local_38 = (float)fVar8;
  FUN_004322a0(&DAT_0078a2f0);
  local_e9c = &PTR_LAB_006c5fb8;
  iVar4 = *(int *)(unaff_EBX + 0x589c);
  local_14 = 0;
  local_e98 = 0;
  local_e94 = 1;
  if (iVar4 < 4) {
    *(int *)(unaff_EBX + 0x589c) = iVar4 + 1;
    if ((iVar4 < 0) || (iVar4 + 1 <= iVar4)) {
      iVar4 = 0;
    }
    else {
      iVar4 = unaff_EBX + 0x586c + iVar4 * 0xc;
    }
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(iVar4 + 8) = 1;
  }
  if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
    FUN_004b4040(DAT_0078a324);
  }
  else {
    local_eb0[0] = &PTR_LAB_006c5fb8;
    iVar4 = *(int *)(unaff_EBX + 0x589c);
    (*(unsigned char *)&(local_14)) = 1;
    (local_14 = ((unsigned int)(local_14) & 0xff));
    if (iVar4 < 4) {
      *(int *)(unaff_EBX + 0x589c) = iVar4 + 1;
      if ((iVar4 < 0) || (iVar4 + 1 <= iVar4)) {
        iVar4 = 0;
      }
      else {
        iVar4 = unaff_EBX + 0x586c + iVar4 * 0xc;
      }
      *(undefined4 *)(iVar4 + 4) = 100;
      *(undefined4 *)(iVar4 + 8) = 1;
    }
    iVar4 = *(int *)(unaff_EBX + 0x589c);
    if (iVar4 < 4) {
      *(int *)(unaff_EBX + 0x589c) = iVar4 + 1;
      if ((iVar4 < 0) || (iVar4 + 1 <= iVar4)) {
        iVar4 = 0;
      }
      else {
        iVar4 = unaff_EBX + 0x586c + iVar4 * 0xc;
      }
      *(undefined4 *)(iVar4 + 4) = 0x65;
      *(undefined4 *)(iVar4 + 8) = 1;
    }
    iVar4 = *(int *)(unaff_EBX + 0x589c);
    local_eb0[1] = (undefined **)0x66;
    local_eb0[2] = (undefined **)0x1;
    if (iVar4 < 4) {
      *(int *)(unaff_EBX + 0x589c) = iVar4 + 1;
      if ((iVar4 < 0) || (iVar4 + 1 <= iVar4)) {
        iVar4 = 0;
      }
      else {
        iVar4 = unaff_EBX + 0x586c + iVar4 * 0xc;
      }
      *(undefined4 *)(iVar4 + 4) = 0x66;
      *(undefined4 *)(iVar4 + 8) = 1;
    }
    FUN_0043de90();
    local_14 = (uint)((unsigned int)(local_14) >> 8) << 8;
  }
  FUN_004b3ac0();
  FUN_004b6300(*(undefined4 *)(unaff_EBX + 23000));
  DAT_00777ccc = unaff_EBX;
  _DAT_0077a90c = "UnloadingFrontEnd";
  DAT_0077a904 = &LAB_00448d10;
  if (DAT_0077a918 != '\0') {
    DAT_0077a918 = '\0';
  }
  ExceptionList = local_1c;
  return;
}
