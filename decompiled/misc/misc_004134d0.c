/* Decompiled from Speed.exe @ 004134d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int FUN_004134d0(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EDI;
  
  uVar1 = FUN_004fd230();
  if (((((unaff_EDI != 0) && (iVar2 = FUN_004f65d0(), iVar2 != 0)) &&
       (iVar2 = FUN_004ffb70(), iVar2 != 0)) ||
      ((DAT_0073578c != 0 && (iVar2 = FUN_004ef050(uVar1), iVar2 != 0)))) &&
     (*(int *)(iVar2 + 0x18) == 2)) {
    return iVar2;
  }
  return 0;
}

