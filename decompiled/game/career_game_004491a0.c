/* Decompiled from Speed.exe @ 004491a0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004491a0(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  iVar2 = (int)DAT_0078a3f5;
  if (-1 < DAT_0078a410) {
    pcVar1 = (char *)FUN_004327d0();
    if ((pcVar1 != (char *)0x0) && (*pcVar1 < '\x01')) goto LAB_004491e9;
  }
  if (DAT_0078a414 < 0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = (char *)FUN_004327d0();
  }
LAB_004491e9:
  if (pcVar1[0x434] == -1) {
    FUN_0057f2b0(1);
  }
  if ((pcVar1 != (char *)0x0) && (*pcVar1 < '\x01')) {
    FUN_00432a30(*(undefined4 *)(pcVar1 + 0x10),iVar2,local_8);
    FUN_0053e9e0(&DAT_00740420,local_8,2,param_1,0,0);
  }
  return;
}

