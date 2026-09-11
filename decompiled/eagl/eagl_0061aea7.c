/* Decompiled from Speed.exe @ 0061aea7 */
/* Module: EAGL */
/* Ghidra DecompileModule */


void __thiscall FUN_0061aea7(int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = *(uint **)(param_1 + 0x98);
  uVar2 = puVar1[4];
  uVar3 = puVar1[3];
  uVar4 = *puVar1;
  FUN_005f7a5c(0,&local_10);
  FUN_005f7a5c(1,&local_c);
  FUN_005f7a5c(2,&local_8);
  FUN_0061a3fb(param_2,uVar2,uVar3,local_10,local_c,local_8,uVar4 & 0xffffff,0,0,0);
  return;
}

