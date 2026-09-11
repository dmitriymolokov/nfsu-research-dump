/* Decompiled from Speed.exe @ 0059b130 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0059b1ad) */

uint __thiscall
FUN_0059b130(undefined4 param_1,undefined4 param_2,float param_3,uint param_4,char param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  uint local_8;
  
  local_8 = FUN_00421960(param_1);
  do {
    uVar2 = FUN_0040a880();
    if (local_8 == uVar2) {
      return uVar2 & 0xffffff00;
    }
    if (((local_8 != param_4) && (cVar1 = FUN_004280f0(), cVar1 == '\0')) &&
       ((param_5 != '\0' || (iVar3 = FUN_00424e70(), iVar3 != 0)))) {
      FUN_0041f5e0();
      fVar4 = (float10)FUN_0041f550();
      if (fVar4 < (float10)param_3) {
        return 1;
      }
    }
    local_8 = FUN_00421960(param_1);
  } while( true );
}

