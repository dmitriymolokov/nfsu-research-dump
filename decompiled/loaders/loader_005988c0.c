/* Decompiled from Speed.exe @ 005988c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00598a29) */
/* WARNING: Removing unreachable block (ram,0x00598a3a) */
/* WARNING: Removing unreachable block (ram,0x00598a31) */
/* WARNING: Removing unreachable block (ram,0x005989d3) */
/* WARNING: Removing unreachable block (ram,0x005989ec) */
/* WARNING: Removing unreachable block (ram,0x005989e3) */
/* WARNING: Removing unreachable block (ram,0x005989f3) */
/* WARNING: Removing unreachable block (ram,0x00598a04) */
/* WARNING: Removing unreachable block (ram,0x005989fb) */
/* WARNING: Removing unreachable block (ram,0x00598a0b) */
/* WARNING: Removing unreachable block (ram,0x00598a1c) */
/* WARNING: Removing unreachable block (ram,0x00598a13) */
/* WARNING: Removing unreachable block (ram,0x005988de) */

undefined1 FUN_005988c0(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  undefined1 local_20;
  undefined1 local_1c;
  
  iVar4 = FUN_0041f5d0();
  cVar1 = FUN_0044d650();
  if (cVar1 == '\0') {
    cVar1 = *(char *)(iVar4 + 0x4d1);
    cVar2 = FUN_00598a50(param_1);
    cVar3 = FUN_0059ac20(param_1);
    if ((cVar1 == '\0') && ((cVar2 == '\0' || (cVar3 != '\0')))) {
      local_20 = 0;
    }
    else {
      local_20 = 1;
    }
    return local_20;
  }
  if (*(char *)(iVar4 + 0x4d0) != '\0') {
    fVar5 = (float10)FUN_0041f5f0();
    cVar1 = FUN_00598b60((float)fVar5);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(char *)(iVar4 + 0x4d1) == '\0') && (cVar1 = FUN_0059ac80(param_1), cVar1 != '\0')) {
    local_1c = 0;
  }
  else {
    local_1c = 1;
  }
  return local_1c;
}

