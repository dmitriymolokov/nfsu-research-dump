/* Decompiled from Speed.exe @ 006677e0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006677e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint unaff_retaddr;
  undefined1 local_124 [288];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  pcVar4 = (char *)FUN_006672e0();
  bVar8 = (byte)param_4;
  bVar2 = (byte)(param_4 >> 8);
  uVar9 = param_4 >> 0x10;
  bVar7 = (byte)(param_4 >> 0x10);
  uVar5 = param_4 >> 0x18;
  bVar3 = (byte)(param_4 >> 0x18);
  if (9 < bVar3) {
    if (99 < bVar3) {
      uVar1 = (ulonglong)uVar5;
      uVar5 = uVar5 % 100;
      *pcVar4 = (char)(uVar1 / 100) + '0';
      pcVar4 = pcVar4 + 1;
    }
    *pcVar4 = (char)((ulonglong)uVar5 / 10) + '0';
    bVar3 = (byte)((ulonglong)uVar5 % 10);
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = bVar3 + 0x30;
  pcVar4[1] = '.';
  pcVar6 = pcVar4 + 2;
  if (9 < bVar7) {
    if (99 < bVar7) {
      *pcVar6 = (char)((ulonglong)(uVar9 & 0xff) / 100) + '0';
      pcVar6 = pcVar4 + 3;
      uVar9 = (uint)(byte)((ulonglong)(uVar9 & 0xff) % 100);
    }
    *pcVar6 = (char)((ulonglong)(uVar9 & 0xff) / 10) + '0';
    bVar7 = (byte)((ulonglong)(uVar9 & 0xff) % 10);
    pcVar6 = pcVar6 + 1;
  }
  *pcVar6 = bVar7 + 0x30;
  pcVar6[1] = '.';
  pcVar4 = pcVar6 + 2;
  uVar5 = (uint)bVar2;
  if (9 < bVar2) {
    if (99 < bVar2) {
      uVar5 = (uint)bVar2 % 100;
      *pcVar4 = (char)((ulonglong)(uint)bVar2 / 100) + '0';
      pcVar4 = pcVar6 + 3;
    }
    *pcVar4 = (char)((ulonglong)uVar5 / 10) + '0';
    pcVar4 = pcVar4 + 1;
    bVar2 = (byte)(uVar5 % 10);
  }
  *pcVar4 = bVar2 + 0x30;
  pcVar4[1] = '.';
  pcVar6 = pcVar4 + 2;
  if (9 < bVar8) {
    if (99 < bVar8) {
      bVar3 = bVar8 / 100;
      bVar8 = bVar8 % 100;
      *pcVar6 = bVar3 + 0x30;
      pcVar6 = pcVar4 + 3;
    }
    bVar3 = bVar8 / 10;
    bVar8 = bVar8 % 10;
    *pcVar6 = bVar3 + 0x30;
    pcVar6 = pcVar6 + 1;
  }
  *pcVar6 = bVar8 + 0x30;
  pcVar6[1] = '\0';
  FUN_00667300(param_1,param_2,local_124);
  return;
}

