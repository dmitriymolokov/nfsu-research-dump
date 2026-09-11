/* Decompiled from Speed.exe @ 004d6f40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d6f40(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *unaff_EDI;
  float10 fVar6;
  undefined8 uVar7;
  float local_4;
  
  iVar2 = FUN_004f65d0();
  iVar5 = *(int *)(iVar2 + 0x44);
  iVar2 = *(int *)(iVar2 + 0x40);
  iVar3 = FUN_004fd230();
  while( true ) {
    if (*(int *)(iVar2 + 0x10) == iVar3) {
      piVar4 = _malloc(0xc);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4[2] = iVar2;
      }
      puVar1 = (undefined4 *)unaff_EDI[4];
      *puVar1 = piVar4;
      unaff_EDI[4] = (int)piVar4;
      piVar4[1] = (int)puVar1;
      *piVar4 = (int)(unaff_EDI + 3);
    }
    if (iVar2 == iVar5) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  iVar5 = 0;
  do {
    if ((iVar5 < 0x2fe) || (0x30d < iVar5)) {
      FUN_004f42f0("CREDITS_LINE_%05d",iVar5);
      uVar7 = FUN_0059fb80();
      if ((int)uVar7 != 0) {
        *(int *)(*unaff_EDI + unaff_EDI[1] * 4) = (int)((ulonglong)uVar7 >> 0x20);
        unaff_EDI[1] = unaff_EDI[1] + 1;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 1000);
  piVar4 = (int *)unaff_EDI[3];
  local_4 = 240.0;
  for (; piVar4 != unaff_EDI + 3; piVar4 = (int *)*piVar4) {
    unaff_EDI[7] = unaff_EDI[7] + 1;
    fVar6 = (float10)FUN_004d6da0(local_4);
    local_4 = (float)(fVar6 + (float10)local_4);
  }
  return;
}

