/* Decompiled from Speed.exe @ 0066e6a0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4
FUN_0066e6a0(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  FUN_0066e080(param_1);
  if ((int)param_5 < 0) {
    param_5 = param_4;
    do {
      cVar1 = *param_5;
      param_5 = param_5 + 1;
    } while (cVar1 != '\0');
    param_5 = param_5 + (1 - (int)(param_4 + 1));
  }
  pcVar5 = param_5 + 0xc;
  iVar2 = FUN_0066e590(param_1,pcVar5,0x8000);
  if ((int)pcVar5 <= iVar2) {
    puVar3 = (undefined1 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x24));
    if ((char *)0xc < pcVar5) {
      pcVar6 = puVar3 + 0xc;
      for (uVar4 = (uint)param_5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)param_4;
        param_4 = param_4 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = (uint)param_5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *param_4;
        param_4 = param_4 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
    *(int *)(param_1 + 0x24) = (int)(pcVar5 + *(int *)(param_1 + 0x24));
    puVar3[8] = (char)((uint)pcVar5 >> 0x18);
    puVar3[9] = (char)((uint)pcVar5 >> 0x10);
    puVar3[10] = (char)((uint)pcVar5 >> 8);
    *puVar3 = (char)((uint)param_2 >> 0x18);
    puVar3[1] = (char)((uint)param_2 >> 0x10);
    puVar3[2] = (char)((uint)param_2 >> 8);
    puVar3[3] = (char)param_2;
    puVar3[4] = (char)((uint)param_3 >> 0x18);
    puVar3[5] = (char)((uint)param_3 >> 0x10);
    puVar3[0xb] = (char)pcVar5;
    puVar3[6] = (char)((uint)param_3 >> 8);
    puVar3[7] = (char)param_3;
    FUN_0066e080(param_1);
    return 0;
  }
  return 0xffffffff;
}

