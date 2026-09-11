/* Decompiled from Speed.exe @ 0064ee30 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064ee30(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (*(uint *)(param_1 + 8) & 0x7f) * 0x60;
  iVar4 = iVar3 + DAT_00713c8c;
  if (*(uint *)(param_1 + 8) == *(uint *)(iVar3 + 8 + DAT_00713c8c)) {
    iVar3 = 0;
    pbVar2 = (byte *)(param_1 + 0x1c);
    if (*(char *)(param_1 + 0xe) != '\0') {
      do {
        bVar1 = *pbVar2;
        if ((bVar1 == 0) || (bVar1 == 2)) {
          *(undefined4 *)(iVar4 + 0x30 + (uint)bVar1 * 4) = *(undefined4 *)(pbVar2 + 8);
        }
        pbVar2 = pbVar2 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0xe));
    }
    iVar3 = *(int *)(iVar4 + 0x30);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0xffff < iVar3) {
      iVar3 = 0xffff;
    }
    FUN_00650cb0(*(undefined4 *)(iVar4 + 0x18),iVar3);
    param_1 = *(int *)(iVar4 + 0x38);
    if (param_1 < 0) {
      param_1 = 0;
    }
    else if (0x7fff < param_1) {
      param_1 = 0x7fff;
    }
    FUN_00650d90(*(undefined4 *)(iVar4 + 0x18),0xffffffff,(float)param_1 * _DAT_006aa9b8);
  }
  return;
}

