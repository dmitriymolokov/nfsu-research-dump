/* Decompiled from Speed.exe @ 006655c0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 * FUN_006655c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)FUN_00549460(0x708);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    for (iVar3 = 0x1c2; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    if (param_1 != 0) {
      iVar3 = FUN_00672a10(param_1,0x3d);
      if (iVar3 == 0) {
        FUN_00667950(puVar1 + 0xd,0x100,&DAT_006bd138,param_1);
      }
      else {
        FUN_00667650(puVar1 + 0xd,0x100);
      }
    }
    uVar2 = FUN_0066de50(0x8000);
    *puVar1 = uVar2;
    uVar2 = FUN_006687e0(0x40);
    puVar1[1] = uVar2;
    puVar1[0x1bf] = param_2;
    puVar1[0x1c0] = param_3;
    FUN_00664990(puVar1);
  }
  return puVar1;
}

