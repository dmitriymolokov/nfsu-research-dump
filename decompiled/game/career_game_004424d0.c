/* Decompiled from Speed.exe @ 004424d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


char __fastcall FUN_004424d0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  cVar1 = '\0';
  iVar3 = 0;
  do {
    if (cVar1 != '\0') {
      return cVar1;
    }
    if (iVar3 == 0) {
      uVar2 = *(uint *)(param_1 + 0x84) >> 6;
LAB_00442504:
      if ((uVar2 & 1) == 0) goto LAB_0044250b;
      cVar1 = '\x01';
    }
    else {
      if (iVar3 == 1) {
        uVar2 = *(uint *)(param_1 + 0x84) >> 0x19;
        goto LAB_00442504;
      }
      if (iVar3 == 2) {
        uVar2 = *(uint *)(param_1 + 0x84) >> 0x1b;
        goto LAB_00442504;
      }
LAB_0044250b:
      cVar1 = '\0';
    }
    iVar3 = iVar3 + 1;
    if (2 < iVar3) {
      return cVar1;
    }
  } while( true );
}

