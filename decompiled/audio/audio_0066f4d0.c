/* Decompiled from Speed.exe @ 0066f4d0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0066f4d0(undefined4 *param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  uVar5 = 0;
  FUN_0066f090(*param_1,0,param_1);
  puVar1 = (undefined4 *)param_1[0xc];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00668d60(param_1 + 3);
    uVar5 = puVar1[3];
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar5;
      param_4[1] = puVar1[2];
      param_4[3] = (uint)*(byte *)((int)puVar1 + 0x15);
      iVar2 = puVar1[1];
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      param_4[2] = iVar2;
    }
    if (param_3 != (uint *)0x0) {
      if ((int)puVar1[4] < (int)*param_3) {
        *param_3 = puVar1[4];
      }
      if (param_2 != (undefined4 *)0x0) {
        uVar4 = *param_3;
        puVar6 = puVar1 + 5;
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *param_2 = *puVar6;
          puVar6 = puVar6 + 1;
          param_2 = param_2 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)param_2 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
      }
    }
    param_1[0xc] = *puVar1;
    FUN_00447030(puVar1);
    param_1[0xd] = param_1[0xd] + 1;
    FUN_00668df0(param_1 + 3);
  }
  return uVar5;
}

