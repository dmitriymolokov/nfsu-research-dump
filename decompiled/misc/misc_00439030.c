/* Decompiled from Speed.exe @ 00439030 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_00439030(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0xc) != param_2) {
    iVar1 = FUN_00421a30();
    if (iVar1 != 0) {
      fVar3 = (float)(param_2 - *(int *)(param_1 + 0xc));
      FUN_0041f0b0(param_1 + 0x14);
      FUN_0040ed00(fVar3);
      uVar2 = FUN_00674898();
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
    FUN_00405560();
    *(int *)(param_1 + 0xc) = param_2;
  }
  iVar1 = FUN_00421a30();
  if (iVar1 == 0) {
    FUN_00405560();
  }
  return;
}

