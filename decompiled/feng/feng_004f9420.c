/* spd-match: far pct=6.21 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb00();
int __cdecl FUN_004ffb70();
int __cdecl FUN_00503f60();
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern unsigned char *PTR_FUN_006c1884;
extern void LAB_004f94a3(void);
extern void LAB_004f955b(void);
extern void LAB_004f9593(void);
extern void LAB_004f95a9(void);
extern void LAB_004f963d(void);
extern void LAB_004f9641(void);
extern void LAB_004f96d5(void);
extern void LAB_00687938(void);
void *ExceptionList;

undefined4 * FUN_004f9420(undefined4 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte local_2c;
  byte local_2b [31];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006c1884;
  param_1[0x10] = 0;
  local_4 = 0;
  if (((param_1[3] == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c == 0) {
      iVar4 = 0;
      goto LAB_004f94a3;
    }
    uVar5 = FUN_004ef050(0x12dfbc68);
    FUN_004f6910(uVar5);
    iVar4 = 0;
  }
  else {
LAB_004f94a3:
    FUN_004f6910(iVar4);
    iVar4 = 0;
  }
  do {
    iVar4 = iVar4 + 1;
    FUN_004f68c0(0x20,"Crumb_0%d",iVar4);
    iVar8 = -1;
    pbVar7 = &local_2c;
    bVar3 = local_2c;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar7 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar3;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    if (param_1[3] == 0) {
LAB_004f9593:
      if (DAT_0073578c == 0) goto LAB_004f95a9;
      uVar5 = FUN_004ef050(iVar8);
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_004f955b:
        (*(unsigned char *)&(local_4)) = 1;
        FUN_004ffb00(iVar6);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        goto LAB_004f9593;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_004f9593;
        goto LAB_004f955b;
      }
LAB_004f95a9:
      uVar5 = 0;
    }
    FUN_004f6910(uVar5);
  } while (iVar4 < 6);
  param_1[0x13] = 6;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (param_1[3] != 0) {
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
      if (DAT_0073578c == 0) goto LAB_004f96d5;
      iVar8 = *(int *)(DAT_0073578c + 8);
      if (iVar8 != 0) {
        iVar4 = FUN_004fd1e0(iVar8 + 0xdc);
        if (iVar4 != 0) goto LAB_004f9641;
        iVar4 = FUN_004fd1e0(iVar8 + 0xec);
        if (iVar4 != 0) goto LAB_004f963d;
      }
    }
    else {
LAB_004f963d:
      if (iVar4 != 0) {
LAB_004f9641:
        (*(unsigned char *)&(local_4)) = 2;
        FUN_004ffb00(iVar4);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      }
    }
  }
  if (DAT_0073578c != 0) {
    FUN_004ef050(0x12dfbc68);
  }
LAB_004f96d5:
  uVar5 = FUN_00503f60();
  param_1[0x12] = uVar5;
  ExceptionList = local_c;
  return param_1;
}
