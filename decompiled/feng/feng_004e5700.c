/* spd-match: far pct=11.17 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_004aa9d0();
int __cdecl FUN_004b0150();
int __cdecl FUN_004b2330();
int __cdecl FUN_004d9fa0();
int __cdecl FUN_004e21e0();
int __cdecl FUN_004e2250();
int __cdecl FUN_004e23d0();
int __cdecl FUN_004e24a0();
int __cdecl FUN_004e2520();
int __cdecl FUN_004e27e0();
int __cdecl FUN_004e28d0();
int __cdecl FUN_004e3d80();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f6a10();
int __cdecl FUN_00504450();
int __cdecl FUN_005044b0();
int __cdecl FUN_00567c70();
int __cdecl FUN_0057ce10();
int __cdecl FUN_005a3570();
int __cdecl FUN_005a3d50();
int __cdecl FUN_005a3eb0();
extern unsigned char *DAT_006fa1a0;
extern int DAT_00735de4;
extern int DAT_00735df5;
extern int DAT_00735df6;
extern int DAT_00735ec1;
extern int DAT_0073ad40;
extern int DAT_00745c14;
extern int DAT_00745c18;
extern int DAT_00745c1c;
extern int DAT_00745c20;
extern int DAT_00745c24;
extern int DAT_00745c28;
extern int DAT_00745c2c;
extern int DAT_00745c30;
extern int DAT_00745c34;
extern int DAT_00745c38;
extern int DAT_00745c3c;
extern int DAT_00745c40;
extern int DAT_00745c44;
extern int DAT_00745c48;
extern int DAT_00745c4c;
extern int DAT_00745c50;
extern int DAT_00745e40;
extern int DAT_00746104;
extern int DAT_007588c4;
extern int DAT_0075f344;
extern unsigned char *PTR_FUN_006c3194;
extern void LAB_004e57cc(void);
extern void LAB_004e58a8(void);
extern void LAB_004e5c3c(void);
extern void LAB_004e5d03(void);
extern void LAB_004e5d19(void);
extern void LAB_00688c18(void);
void *ExceptionList;

undefined4 * FUN_004e5700(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00688c18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004e21e0(param_1,param_2);
  local_8 = 0;
  *param_1 = &PTR_FUN_006c3194;
  DAT_00735df5 = 0;
  DAT_00735df6 = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  FUN_004f6a10("MU_HorizontalBrowserBack.fng",1);
  iVar7 = FUN_004f3f90(&DAT_00746104);
  if (((iVar7 != 0) && (*(int *)(iVar7 + 0x18) != 0)) && (*(int **)(iVar7 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar7 + 0x14) + 8))(0x50fe5db4,0,0,*(int *)(iVar7 + 0x18));
  }
  puVar2 = DAT_0073ad40;
  puVar8 = (undefined4 *)FUN_0040a880();
  for (; puVar2 != puVar8; puVar2 = (undefined4 *)*puVar2) {
    local_28 = puVar2[3];
    uVar10 = puVar2[4] * 0x30 + local_28;
    for (; local_28 < uVar10; local_28 = local_28 + 0x30) {
      if (*(char *)(local_28 + 0x10) == '\x1f') goto LAB_004e57cc;
    }
  }
  local_28 = 0;
LAB_004e57cc:
  iVar7 = DAT_006fa1a0 + -0x1f;
  local_18 = local_28;
  switch(iVar7) {
  case 0:
    param_1[0x22] = DAT_00745c14;
    param_1[0x23] = DAT_00745c18;
    param_1[0x24] = DAT_00745c1c;
    uVar9 = DAT_00745c20;
    goto LAB_004e58a8;
  case 1:
    param_1[0x22] = DAT_00745c24;
    param_1[0x23] = DAT_00745c28;
    param_1[0x24] = DAT_00745c2c;
    param_1[0x25] = DAT_00745c30;
    break;
  case 2:
    param_1[0x22] = DAT_00745c34;
    param_1[0x23] = DAT_00745c38;
    param_1[0x24] = DAT_00745c3c;
    param_1[0x25] = DAT_00745c40;
    break;
  case 3:
    param_1[0x22] = DAT_00745c44;
    param_1[0x23] = DAT_00745c48;
    param_1[0x24] = DAT_00745c4c;
    uVar9 = DAT_00745c50;
LAB_004e58a8:
    param_1[0x25] = uVar9;
  }
  if (param_1[0x22] == 0) {
    FUN_004d9fa0(&local_1c,&local_20,&local_24);
    switch(iVar7) {
    case 0:
      FUN_005044b0(param_2,0);
      FUN_005044b0(local_1c,0);
      FUN_005044b0(local_20,0);
      break;
    case 1:
      FUN_005044b0(param_2,0);
      FUN_005044b0(local_1c,0);
      FUN_005044b0(local_20,0);
      break;
    case 2:
      FUN_005044b0(param_2,0);
      FUN_005044b0(local_1c,0);
      FUN_005044b0(local_20,0);
      break;
    case 3:
      FUN_005044b0(param_2,0);
      FUN_005044b0(local_1c,0);
      FUN_005044b0(local_20,0);
      break;
    default:
      goto switchD_004e58dd_default;
    }
    FUN_005044b0(local_24,0);
  }
switchD_004e58dd_default:
  switch(DAT_00735de4) {
  case 1:
  case 3:
  case 6:
  case 8:
  case 10:
  case 0xd:
    iVar7 = FUN_004b2330();
    break;
  default:
    iVar7 = FUN_004b2330();
  }
  uVar10 = local_18;
  if (iVar7 != 0) {
    FUN_004b0150();
    uVar10 = local_18;
  }
  do {
    local_18 = uVar10;
    if (local_28 == 0) {
      FUN_004e23d0();
      FUN_00504450();
      ExceptionList = local_10;
      return param_1;
    }
    cVar4 = FUN_004e28d0();
    if (cVar4 != '\0') {
      if (DAT_006fa1a0 == 0x22) {
        iVar7 = 1;
      }
      else if (DAT_006fa1a0 == 0x21) {
        iVar7 = 2;
      }
      else if (DAT_006fa1a0 == 0x20) {
        iVar7 = 3;
      }
      else {
        iVar7 = ((DAT_006fa1a0 != 0x1f) - 1 & 5) - 1;
      }
      local_24 = FUN_004e24a0(iVar7);
      if ((DAT_00735de4 == 0xf) || (DAT_00735de4 == 0x10)) {
        cVar4 = FUN_004e27e0(uVar10);
        if (cVar4 == '\0') {
LAB_004e5c3c:
          bVar3 = false;
        }
        else {
          cVar4 = FUN_005a3570(&DAT_0075f344);
          bVar3 = true;
          if (cVar4 != '\0') goto LAB_004e5c3c;
        }
        uVar9 = *(undefined4 *)(uVar10 + 8);
        cVar4 = FUN_005a3d50();
        if ((cVar4 == '\0') &&
           ((cVar4 = FUN_004e27e0(local_18), cVar4 == '\0' ||
            (cVar4 = FUN_005a3570(&DAT_0075f344), cVar4 == '\0')))) {
          local_20 = local_20 & 0xffffff00;
        }
        else {
          local_20 = CONCAT31(((unsigned int)(local_20) >> 8),1);
        }
        uVar10 = local_18;
        if (bVar3) goto LAB_004e5d19;
        if (DAT_00745e40 != 1) {
          if ((DAT_00745e40 != 2) ||
             (((cVar4 = FUN_004aa9d0(&DAT_007588c4,2,uVar9), local_2c = local_20, cVar4 == '\0' &&
               (DAT_00735ec1 == '\0')) &&
              (cVar4 = FUN_005a3570(&DAT_0075f344), local_2c = local_20, uVar10 = local_18,
              cVar4 == '\0')))) goto LAB_004e5d19;
          goto LAB_004e5d03;
        }
        cVar4 = FUN_004aa9d0(&DAT_007588c4,2,uVar9);
        if (((cVar4 == '\0') && (DAT_00735ec1 == '\0')) &&
           (cVar4 = FUN_005a3570(&DAT_0075f344), uVar10 = local_18, cVar4 == '\0'))
        goto LAB_004e5d19;
        local_2c = local_20;
        uVar9 = 0;
      }
      else {
        if (DAT_00735de4 != 0x11) {
          if (DAT_00745e40 == 1) {
            uVar1 = *(undefined1 *)(uVar10 + 0x11);
            local_11 = *(undefined1 *)(uVar10 + 0x12);
            uVar6 = FUN_005a3eb0();
            cVar4 = FUN_004e3d80(local_11,uVar1,0);
            uVar11 = (uint)(byte)(1 - (cVar4 != '\0'));
          }
          else {
            if ((DAT_00745e40 != 2) ||
               (cVar4 = FUN_004e3d80(*(undefined1 *)(uVar10 + 0x12),*(undefined1 *)(uVar10 + 0x11),0
                                    ), cVar4 == '\0')) goto LAB_004e5d19;
            uVar11 = 0;
            uVar6 = FUN_005a3eb0(0);
          }
          FUN_004e2250(0,uVar10,0,uVar6,uVar11);
          goto LAB_004e5d19;
        }
        local_1c = CONCAT31(((unsigned int)(local_1c) >> 8),1);
        uVar9 = FUN_004e2520(uVar10);
        switch(uVar9) {
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          break;
        case 5:
          break;
        default:
          goto switchD_004e5afd_default;
        }
        uVar9 = FUN_00567c70();
        cVar4 = FUN_004aa9d0(&DAT_007588c4,2,uVar9);
        local_1c = CONCAT31(((unsigned int)(local_1c) >> 8),'\x01' - (cVar4 != '\0'));
switchD_004e5afd_default:
        bVar5 = FUN_005a3d50();
        local_2c = (uint)bVar5;
        uVar9 = local_1c;
        if (DAT_00745e40 != 1) {
          uVar10 = local_18;
          if ((DAT_00745e40 != 2) || ((char)local_1c != '\0')) goto LAB_004e5d19;
LAB_004e5d03:
          uVar9 = 0;
        }
      }
      FUN_004e2250(0,local_18,0,local_2c,uVar9);
      uVar10 = local_18;
    }
LAB_004e5d19:
    local_28 = FUN_0057ce10(0,0x1f,0,uVar10,0xffffffff);
    uVar10 = local_28;
  } while( true );
}
