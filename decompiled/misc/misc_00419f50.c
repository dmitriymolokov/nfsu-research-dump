/* spd-match: far pct=14.23 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00419f50 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void  FUN_00419f50(int param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  switch(param_3) {
  case 0:
    param_1 = param_1 + 0x2498;
    goto LAB_00419f6f;
  case 1:
    param_1 = param_1 + 0x24e8;
    goto LAB_00419f6f;
  case 2:
    param_1 = param_1 + 0x2498;
    goto LAB_00419fc0;
  case 3:
    param_1 = param_1 + 0x24e8;
    goto LAB_00419fc0;
  case 4:
    param_1 = param_1 + 0x2538;
LAB_00419f6f:
    cVar3 = FUN_0041bc20(param_1);
    if (cVar3 != '\0') {
      FUN_0041bb30(param_2);
      return;
    }
    break;
  case 5:
    param_1 = param_1 + 0x2538;
LAB_00419fc0:
    cVar3 = FUN_0041bc20(param_1);
    if (cVar3 != '\0') {
      FUN_0041bb30(param_2);
      return;
    }
    break;
  case 6:
    cVar3 = FUN_0041bc20(param_1 + 0x2538);
    if (cVar3 != '\0') {
      FUN_0041bb30(param_2);
      return;
    }
    break;
  case 7:
    cVar3 = FUN_0041bc20(param_1 + 0x2498);
    if (cVar3 != '\0') {
      FUN_0041bb30(param_2);
    }
    if (*(char *)(param_2 + 0x25d8 + param_1) != '\0') {
      FUN_0041a6c0(param_1);
      *(undefined1 *)(param_1 + 0x2499 + param_2 * 8) = 1;
      *(undefined1 *)(param_2 + 0x25d8 + param_1) = 0;
    }
    if (*(char *)(param_2 + 0x25da + param_1) != '\0') {
      FUN_0041a250(param_1,*(undefined4 *)(param_1 + (param_2 * 3 + 0xae9) * 4),
                   *(undefined4 *)(param_1 + 0x2ba8 + param_2 * 0xc));
      *(undefined1 *)(param_1 + 0x2498 + param_2 * 8) = 1;
      *(undefined1 *)(param_2 + 0x25da + param_1) = 0;
      return;
    }
    break;
  case 8:
    cVar3 = FUN_0041bc20(param_1 + 0x2538);
    if (cVar3 != '\0') {
      FUN_0041bb30(param_2);
      return;
    }
    break;
  case 9:
    if (*(char *)(param_2 + 0x2220 + param_1) == '\x01') {
      iVar2 = param_1 + param_2 * 10;
      pcVar1 = (char *)(iVar2 + 0x25dc);
      *(undefined1 *)(param_2 + 0x2220 + param_1) = 0;
      if (*pcVar1 == '\x01') {
        FUN_0041a250(param_1,*(undefined4 *)(param_1 + (param_2 * 3 + 0xae9) * 4),
                     *(undefined4 *)(param_1 + 0x2ba8 + param_2 * 0xc));
      }
      if (*(char *)(iVar2 + 0x25dd) == '\x01') {
        FUN_0041a640(param_2,*(undefined4 *)(param_1 + 0x2bb8 + param_2 * 8));
      }
      if (*(char *)(iVar2 + 0x25de) == '\x01') {
        FUN_0041a6c0(param_1);
      }
      if (*(char *)(iVar2 + 0x25e1) == '\x01') {
        FUN_0041ab00(param_1,*(undefined4 *)(param_1 + 0x2be8 + param_2 * 4));
      }
      if (*(char *)(iVar2 + 0x25e2) == '\x01') {
        FUN_0041ad20(param_1,*(undefined4 *)(param_1 + 0x2bf0 + param_2 * 4));
      }
      if (*(char *)(iVar2 + 0x25e3) == '\x01') {
        FUN_0041af40(param_1,*(undefined4 *)(param_1 + 0x2bf8 + param_2 * 4));
      }
      if (*(char *)(param_1 + (param_2 * 5 + 0x12f2) * 2) == '\x01') {
        FUN_0041b210(param_1,*(undefined4 *)(param_1 + param_2 * 0xc + 0x2c00),
                     *(undefined4 *)(param_1 + (param_2 * 3 + 0xb01) * 4),
                     *(undefined4 *)(param_1 + 0x2c08 + param_2 * 0xc));
      }
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      *(undefined4 *)(iVar2 + 0x25e0) = 0;
      *(undefined2 *)(iVar2 + 0x25e4) = 0;
    }
  }
  return;
}
