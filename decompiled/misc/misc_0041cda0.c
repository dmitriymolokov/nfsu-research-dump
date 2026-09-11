/* Decompiled from Speed.exe @ 0041cda0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4
FUN_0041cda0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  char local_44 [68];
  
  iVar3 = DAT_00736228;
  if (DAT_00736228 != 0) {
    *(undefined4 *)(DAT_00736228 + 0x3c) = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    FUN_0041c590(param_1,param_2,param_3,param_4,local_44);
    puVar7 = (undefined2 *)&stack0xffffffbb;
    do {
      pcVar1 = (char *)((int)puVar7 + 1);
      puVar7 = (undefined2 *)((int)puVar7 + 1);
    } while (*pcVar1 != '\0');
    *puVar7 = DAT_006cb154;
    iVar3 = FUN_004051f0(local_44);
    if (iVar3 != 0) {
      iVar3 = 0;
      puVar6 = (undefined4 *)(param_5 + 0x254);
      do {
        if (*(int *)(DAT_00736228 + 0x3c) == 0) {
          return 0;
        }
        if (*(int *)(DAT_00736228 + 0x40) == *(int *)(DAT_00736228 + 0x3c) + 0x3c) {
          return 0;
        }
        uVar4 = FUN_00405260();
        iVar2 = DAT_00736228;
        puVar6[-4] = uVar4;
        *(undefined1 *)(iVar3 + 0x264 + param_5) = 1;
        iVar5 = *(int *)(iVar2 + 0x3c);
        if (iVar5 == 0) {
          return 0;
        }
        if (*(int *)(iVar2 + 0x40) == iVar5 + 0x3c) {
          return 0;
        }
        uVar4 = FUN_00405260();
        iVar2 = DAT_00736228;
        *puVar6 = uVar4;
        iVar5 = *(int *)(iVar2 + 0x3c);
        if (iVar5 == 0) {
          return 0;
        }
        if (*(int *)(iVar2 + 0x40) == iVar5 + 0x3c) {
          return 0;
        }
        iVar5 = FUN_00405260();
        *(bool *)(iVar3 + 0x264 + param_5) = iVar5 != 0;
        iVar3 = iVar3 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar3 < 4);
      if ((*(int *)(DAT_00736228 + 0x3c) != 0) &&
         (*(int *)(DAT_00736228 + 0x40) != *(int *)(DAT_00736228 + 0x3c) + 0x3c)) {
        iVar3 = FUN_00405260();
        *(bool *)(param_5 + 0x268) = iVar3 != 0;
        *(bool *)(param_5 + 0x267) = iVar3 != 0;
        *(bool *)(param_5 + 0x266) = iVar3 == 0;
        *(bool *)(param_5 + 0x265) = iVar3 == 0;
        iVar3 = 0;
        puVar6 = (undefined4 *)(param_5 + 0x18);
        while ((*(int *)(DAT_00736228 + 0x3c) != 0 &&
               (*(int *)(DAT_00736228 + 0x40) != *(int *)(DAT_00736228 + 0x3c) + 0x3c))) {
          uVar4 = FUN_00405260();
          *puVar6 = uVar4;
          iVar3 = iVar3 + 1;
          puVar6 = puVar6 + 1;
          if (0x1f < iVar3) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

