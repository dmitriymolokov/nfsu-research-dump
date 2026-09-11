/* spd-match: far pct=6.89 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004d6960();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f6850();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb00();
int __cdecl FUN_0059fb80();
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern int _DAT_00777cc0;
extern unsigned char *PTR_FUN_006c3dc0;
extern void LAB_004d637b(void);
extern void LAB_004d63b3(void);
extern void LAB_004d63c9(void);
extern void LAB_004d647b(void);
extern void LAB_004d64b3(void);
extern void LAB_004d64c9(void);
extern void LAB_00688c68(void);
void *ExceptionList;

undefined4 * FUN_004d6270(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *local_4c;
  int local_48;
  byte local_2c;
  byte local_2b [31];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688c68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f78e0(param_1,param_2);
  local_4c = param_1 + 0x15;
  *param_1 = &PTR_FUN_006c3dc0;
  local_4 = 0;
  _DAT_00777cc0 = 4;
  param_2 = 1;
  local_48 = 5;
  do {
    FUN_004f68c0(0x20,"arrow_l_button_option%d",param_2);
    iVar7 = -1;
    pbVar6 = &local_2c;
    bVar3 = local_2c;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar7 = iVar7 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar3 = *pbVar1;
    }
    if (param_1[3] == 0) {
LAB_004d63b3:
      if (DAT_0073578c == 0) goto LAB_004d63c9;
      uVar5 = FUN_004ef050(iVar7);
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
LAB_004d637b:
        (*(unsigned char *)&(local_4)) = 1;
        FUN_004ffb00(iVar4);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        goto LAB_004d63b3;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar4 = FUN_004fd1e0(iVar2 + 0xdc), iVar4 == 0 &&
            (iVar4 = FUN_004fd1e0(iVar2 + 0xec), iVar4 == 0)))) goto LAB_004d63b3;
        goto LAB_004d637b;
      }
LAB_004d63c9:
      uVar5 = 0;
    }
    local_4c[-5] = uVar5;
    FUN_004f68c0(0x20,"arrow_r_button_option%d",param_2);
    iVar7 = -1;
    pbVar6 = &local_2c;
    bVar3 = local_2c;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar7 = iVar7 * 0x21 + (uint)bVar3;
      pbVar6 = pbVar6 + 1;
      bVar3 = *pbVar1;
    }
    if (param_1[3] == 0) {
LAB_004d64b3:
      if (DAT_0073578c == 0) goto LAB_004d64c9;
      uVar5 = FUN_004ef050(iVar7);
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
LAB_004d647b:
        (*(unsigned char *)&(local_4)) = 2;
        FUN_004ffb00(iVar4);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        goto LAB_004d64b3;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar4 = FUN_004fd1e0(iVar2 + 0xdc), iVar4 == 0 &&
            (iVar4 = FUN_004fd1e0(iVar2 + 0xec), iVar4 == 0)))) goto LAB_004d64b3;
        goto LAB_004d647b;
      }
LAB_004d64c9:
      uVar5 = 0;
    }
    *local_4c = uVar5;
    local_4c = local_4c + 1;
    param_2 = param_2 + 1;
    local_48 = local_48 + -1;
    if (local_48 == 0) {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      if (((iVar7 != 0) && (*(int *)(iVar7 + 0x18) != 0)) && (*(int **)(iVar7 + 0x14) != (int *)0x0)
         ) {
        (**(code **)(**(int **)(iVar7 + 0x14) + 8))(0x1122aacc,0,0,*(int *)(iVar7 + 0x18));
      }
      iVar7 = FUN_0059fb80();
      if (iVar7 == 0) {
        iVar7 = FUN_0059fb80();
      }
      FUN_004f6850(iVar7);
      iVar7 = FUN_0059fb80();
      if (iVar7 == 0) {
        iVar7 = FUN_0059fb80();
      }
      FUN_004f6850(iVar7);
      iVar7 = FUN_0059fb80();
      if (iVar7 == 0) {
        iVar7 = FUN_0059fb80();
      }
      FUN_004f6850(iVar7);
      iVar7 = FUN_0059fb80();
      if (iVar7 == 0) {
        iVar7 = FUN_0059fb80();
      }
      FUN_004f6850(iVar7);
      FUN_004d6960();
      iVar7 = FUN_0059fb80();
      if (iVar7 == 0) {
        iVar7 = FUN_0059fb80();
      }
      FUN_004f6850(iVar7);
      ExceptionList = pvStack_c;
      return param_1;
    }
  } while( true );
}
