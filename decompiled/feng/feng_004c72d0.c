/* Decompiled from Speed.exe @ 004c72d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c72d0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (((*(char *)(DAT_00777ccc + 0x5964) == '\0') && (*(char *)(DAT_00777ccc + 0x5958) == '\0')) &&
     (cVar1 = FUN_0051ba80(), cVar1 != '\0')) {
    FUN_00567d30();
  }
  iVar3 = DAT_0073578c;
  if (((DAT_0073578c != 0) && (iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0)) &&
     (*(int *)(iVar2 + 0x18) != 0)) {
    FUN_004f0800(*(undefined4 *)(iVar3 + 8),*(int *)(iVar2 + 0x18));
  }
  iVar3 = FUN_004f65d0();
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x1c) = 0xff;
  }
  return;
}

