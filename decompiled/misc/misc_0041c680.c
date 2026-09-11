/* Decompiled from Speed.exe @ 0041c680 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0041c680(void)

{
  undefined **ppuVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined2 *puVar11;
  float10 fVar12;
  char local_100 [256];
  
  if ((DAT_00736228 != 0) && (FUN_0041e330(&DAT_0078a478), PTR_DAT_00700ec4 != (undefined *)0x0)) {
    ppuVar9 = &PTR_DAT_00700ec4;
    iVar10 = DAT_00736228;
    do {
      *(undefined4 *)(iVar10 + 0x3c) = 0;
      *(undefined4 *)(iVar10 + 0x40) = 0;
      pcVar8 = ppuVar9[-1];
      iVar10 = -(int)pcVar8;
      do {
        cVar2 = *pcVar8;
        pcVar8[(int)(local_100 + iVar10)] = cVar2;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      puVar11 = (undefined2 *)&stack0xfffffeff;
      do {
        pcVar8 = (char *)((int)puVar11 + 1);
        puVar11 = (undefined2 *)((int)puVar11 + 1);
      } while (*pcVar8 != '\0');
      *puVar11 = DAT_006cb154;
      iVar6 = FUN_004051f0(local_100);
      iVar5 = DAT_00736228;
      iVar10 = DAT_00736228;
      if (((iVar6 != 0) && (*(int *)(DAT_00736228 + 0x3c) != 0)) &&
         (*(int *)(DAT_00736228 + 0x40) != *(int *)(DAT_00736228 + 0x3c) + 0x3c)) {
        puVar3 = ppuVar9[1];
        if (puVar3 == (undefined *)0x0) {
          uVar7 = FUN_00405260();
          *(undefined4 *)*ppuVar9 = uVar7;
          iVar10 = DAT_00736228;
        }
        else if (puVar3 == (undefined *)0x1) {
          fVar12 = (float10)FUN_00405300();
          *(float *)*ppuVar9 = (float)fVar12;
          iVar10 = DAT_00736228;
        }
        else if (puVar3 == (undefined *)0x2) {
          if ((*(int *)(DAT_00736228 + 0x3c) == 0) ||
             (*(int *)(DAT_00736228 + 0x40) == *(int *)(DAT_00736228 + 0x3c) + 0x3c)) {
            uVar7 = FUN_004051a0();
            FUN_00404ab0("Not enough arguments %s\n",uVar7);
          }
          iVar10 = DAT_00736228;
          puVar4 = *(undefined4 **)(iVar5 + 0x40);
          *(undefined4 *)(iVar5 + 0x40) = *puVar4;
          *ppuVar9 = (undefined *)puVar4[2];
        }
      }
      ppuVar1 = ppuVar9 + 3;
      ppuVar9 = ppuVar9 + 3;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  FUN_00410ce0();
  return;
}

