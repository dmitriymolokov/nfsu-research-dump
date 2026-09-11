/* Decompiled from Speed.exe @ 0058d620 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058d620(undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  
  fVar1 = DAT_006cc7a4;
  if (DAT_0078a336 != '\0') {
    fVar1 = (float)*(ushort *)(param_2 + 0x28) * _DAT_006cc7c8;
  }
  fVar2 = (float)*(ushort *)(param_2 + 0x4a) * _DAT_006cc7c8;
  if (fVar1 != fVar2) {
    fVar1 = DAT_006cc7a4;
    if (DAT_0078a336 != '\0') {
      fVar1 = (float)*(ushort *)(param_2 + 0x28) * _DAT_006cc7c8;
    }
    if (((_DAT_006cc7d0 < ABS(fVar1 - fVar2)) || (DAT_0078a336 == '\0')) ||
       ((float)*(ushort *)(param_2 + 0x28) * _DAT_006cc7c8 == DAT_006cc7a4)) {
      if (0 < *(int *)(param_2 + 0x5c)) {
        puVar3 = (undefined4 *)(param_2 + 0x74);
        iVar5 = 0;
        do {
          if (puVar3[-3] != 0) {
            *puVar3 = 0;
            puVar3[1] = 0;
          }
          iVar5 = iVar5 + 1;
          puVar3 = puVar3 + 7;
        } while (iVar5 < *(int *)(param_2 + 0x5c));
      }
      sVar6 = 0;
      iVar5 = 0;
      do {
        if (DAT_0078a336 == '\0') {
          uVar4 = 0;
        }
        else {
          uVar4 = (ushort)*(byte *)(iVar5 + 8 + param_2);
        }
        sVar6 = sVar6 + uVar4;
        *(char *)(param_2 + 0x2a + iVar5) = (char)uVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x20);
      *(short *)(param_2 + 0x4a) = sVar6;
    }
  }
  return;
}

