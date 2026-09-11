/* Decompiled from Speed.exe @ 00520e90 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00520e90(undefined4 param_1,uint *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *unaff_EBX;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  puVar4 = &DAT_00758b58;
  do {
    cVar1 = *(char *)(puVar4 + 1);
    cVar2 = (char)*puVar4;
    if (cVar1 == '\x01') {
      uVar5 = uVar5 | 1 << (cVar2 + 1U & 0x1f);
    }
    else if (cVar1 == '\x02') {
      uVar6 = uVar6 | 1 << (cVar2 + 1U & 0x1f);
    }
    else if (cVar1 == '\x03') {
      uVar3 = 1 << (cVar2 + 1U & 0x1f);
      uVar5 = uVar5 | uVar3;
      uVar6 = uVar6 | uVar3;
    }
    puVar4 = puVar4 + 2;
  } while ((int)puVar4 < 0x758c28);
  if (unaff_EBX != (uint *)0x0) {
    *unaff_EBX = uVar5;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar6;
  }
  if ((DAT_00758930 == 0) || (DAT_007356b8 != uVar5)) {
    DAT_007356b8 = uVar5;
    DAT_00758930 = uVar5;
  }
  if ((DAT_00758934 == 0) || (DAT_007356bc != uVar6)) {
    DAT_007356bc = uVar6;
    DAT_00758934 = uVar6;
  }
  if (param_3 == 1) {
    DAT_007356b8 = uVar5;
    DAT_007356bc = uVar6;
    DAT_00758930 = uVar5;
    DAT_00758934 = uVar6;
  }
  return;
}

