/* Decompiled from Speed.exe @ 005a6ea0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005a6ea0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = 0x10;
  do {
    if ((iVar2 < 0) || (4 < iVar2)) {
      if ((10 < iVar2) && (iVar2 < 0x11)) {
        cVar3 = *(char *)(iVar2 + 0xa6 + param_2);
        goto LAB_005a6ed2;
      }
    }
    else {
      cVar3 = *(char *)(param_2 + 0xb0);
LAB_005a6ed2:
      if (cVar3 != '\0') {
        return iVar2;
      }
    }
    iVar1 = iVar2 + -0xc;
    iVar2 = iVar2 + -1;
    if (iVar1 < 0) {
      return 0xff;
    }
  } while( true );
}

