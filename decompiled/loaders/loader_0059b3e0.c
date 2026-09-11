/* Decompiled from Speed.exe @ 0059b3e0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0059b479) */

float10 FUN_0059b3e0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float local_8;
  
  local_8 = 99999.0;
  FUN_00424e60();
  iVar2 = FUN_0043db70();
  if ((iVar2 != 0) && (cVar1 = FUN_0059b8d0(param_1), cVar1 == '\0')) {
    fVar3 = (float10)FUN_0059b670(iVar2,DAT_0078a300);
    fVar4 = (float10)FUN_0059b6a0(iVar2,DAT_0078a300);
    fVar4 = (float10)FUN_004216f0((float)(fVar4 - (float10)(float)fVar3));
    local_8 = (float)(fVar4 + (float10)(float)fVar3);
  }
  return (float10)local_8;
}

