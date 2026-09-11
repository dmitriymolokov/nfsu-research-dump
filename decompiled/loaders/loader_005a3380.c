/* Decompiled from Speed.exe @ 005a3380 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a3380(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EDI;
  undefined4 local_b00;
  undefined4 local_af4;
  undefined4 local_af0;
  undefined4 local_aec;
  undefined4 local_ae8;
  undefined1 local_ae4 [2788];
  
  iVar5 = FUN_004ab510();
  iVar7 = 8;
  do {
    FUN_00438860();
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 0;
  if (0 < *(int *)(iVar5 + 0x20)) {
    puVar8 = (undefined4 *)(iVar5 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar2 = *puVar8;
      uVar3 = puVar8[1];
      iVar4 = *(int *)(unaff_EDI + 0x5868);
      if (iVar4 < 8) {
        *(int *)(unaff_EDI + 0x5868) = iVar4 + 1;
        if (((iVar4 < 0) || (iVar4 + 1 <= iVar4)) || (7 < iVar4)) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = (undefined4 *)(iVar4 * 0xb0c + 4 + unaff_EDI);
        }
        *puVar6 = uVar1;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = local_b00;
        puVar6[4] = 0;
        puVar6[5] = 1;
        puVar6[6] = local_af4;
        puVar6[7] = local_af0;
        puVar6[8] = local_aec;
        puVar6[9] = local_ae8;
        FUN_0059ffd0(puVar6 + 10,local_ae4);
      }
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar7 < *(int *)(iVar5 + 0x20));
  }
  *(undefined4 *)(unaff_EDI + 0x58a0) = 0xfffffffe;
  *(undefined4 *)(unaff_EDI + 0x58a4) = 1;
  return;
}

