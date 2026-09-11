/* Decompiled from Speed.exe @ 00548ad0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_00548ad0(undefined4 param_1,char *param_2,float param_3,float param_4,float param_5)

{
  char cVar1;
  float fVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *unaff_ESI;
  
  cVar1 = *param_2;
  *unaff_ESI = cVar1;
  if (cVar1 != '\0') {
    pcVar3 = unaff_ESI;
    do {
      cVar1 = pcVar3[(int)(param_2 + (1 - (int)unaff_ESI))];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar1;
    } while (cVar1 != '\0');
  }
  *(float *)(unaff_ESI + 0x130) = param_3;
  *(float *)(unaff_ESI + 0x13c) = param_5 + param_5;
  *(float *)(unaff_ESI + 0x134) = param_4;
  *(float *)(unaff_ESI + 0x138) = param_5;
  iVar4 = FUN_00674898();
  unaff_ESI[300] = '\0';
  unaff_ESI[0x12d] = '\0';
  unaff_ESI[0x12e] = '\0';
  unaff_ESI[0x12f] = '\0';
  uVar6 = 0;
  if (iVar4 != -1) {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      uVar6 = 1 << ((byte)iVar5 & 0x1f);
    } while (uVar6 < iVar4 + 1U);
    *(int *)(unaff_ESI + 300) = iVar5;
  }
  fVar2 = (float)(int)(uVar6 - 1);
  if ((int)(uVar6 - 1) < 0) {
    fVar2 = fVar2 + _DAT_006cc858;
  }
  fVar2 = (param_4 - param_3) / fVar2;
  unaff_ESI[0x140] = -1;
  unaff_ESI[0x141] = -1;
  unaff_ESI[0x142] = '\x7f';
  unaff_ESI[0x143] = '\x7f';
  unaff_ESI[0x144] = -1;
  unaff_ESI[0x145] = -1;
  unaff_ESI[0x146] = '\x7f';
  unaff_ESI[0x147] = -1;
  unaff_ESI[0x148] = '\x01';
  *(float *)(unaff_ESI + 0x13c) = fVar2;
  *(float *)(unaff_ESI + 0x138) = fVar2 * _DAT_006cc7dc;
  return;
}

