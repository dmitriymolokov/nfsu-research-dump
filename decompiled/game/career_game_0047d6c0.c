/* Decompiled from Speed.exe @ 0047d6c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0047d6c0(undefined4 param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_004387e0(param_2,param_1);
  uVar1 = FUN_00674898();
  uVar3 = uVar1 << 0xd ^ uVar1;
  uVar2 = uVar1 + 1 ^ (uVar1 + 1) * 0x2000;
  return ((float10)_DAT_006cc7bc -
         (float10)((uVar2 * uVar2 * 0x3d73 + 0xc0ae5) * uVar2 + 0xd208dd0d & 0x7fffffff) *
         (float10)_DAT_006cc958) * ((float10)param_2 - (float10)(int)uVar1) +
         ((float10)_DAT_006cc7bc - ((float10)param_2 - (float10)(int)uVar1)) *
         ((float10)_DAT_006cc7bc -
         (float10)((uVar3 * uVar3 * 0x3d73 + 0xc0ae5) * uVar3 + 0xd208dd0d & 0x7fffffff) *
         (float10)_DAT_006cc958);
}

