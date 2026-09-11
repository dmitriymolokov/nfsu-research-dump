/* Decompiled from Speed.exe @ 004fb9e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fb9e0(uint param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = param_5 + param_2;
  for (; uVar1 = param_1, param_2 < uVar2; param_2 = param_2 + 1) {
    for (; uVar1 < param_4 + param_1; uVar1 = uVar1 + 1) {
      puVar3 = (undefined4 *)FUN_004fa3f0(param_2);
      *puVar3 = param_3;
    }
  }
  return;
}

