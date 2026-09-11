/* Decompiled from Speed.exe @ 00544790 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00544790(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = FUN_005461c0(*(undefined4 *)((int)&DAT_006f3ee8 + uVar2),0,0);
    *(undefined4 *)((int)&DAT_0072fa14 + uVar2) = uVar1;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0xc);
  return;
}

