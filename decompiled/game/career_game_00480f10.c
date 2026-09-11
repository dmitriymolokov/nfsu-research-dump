/* Decompiled from Speed.exe @ 00480f10 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_00480f10(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  int unaff_ESI;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00480d40();
  FUN_00480e20();
  fVar1 = local_30 - local_20;
  fVar2 = local_2c - local_1c;
  fVar3 = local_28 - local_18;
  uVar4 = FUN_00564db0(fVar1,fVar2);
  *(undefined2 *)(unaff_ESI + 0xcd4) = uVar4;
  uVar4 = FUN_00564db0(SQRT(fVar2 * fVar2 + fVar1 * fVar1),fVar3);
  *(undefined2 *)(unaff_ESI + 0xcd6) = uVar4;
  *(float *)(unaff_ESI + 0xcd8) = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  return;
}

