/* Decompiled from Speed.exe @ 0064635f */
/* Module: Audio */
/* Ghidra DecompileVAs */


uint __fastcall FUN_0064635f(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_0064e520(param_1);
  uVar1 = FUN_00647b90(local_20);
  iVar2 = FUN_0064fa60(uVar1);
  if (iVar2 < 0) {
    uVar3 = FUN_0064e540();
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    iVar2 = FUN_0064f900(local_1c,local_14);
    if (iVar2 < 0) {
      uVar3 = FUN_0064e540();
      uVar3 = uVar3 & 0xffffff00;
    }
    else {
      FUN_0064e540();
      uVar3 = (uint)(local_c == 0);
    }
  }
  return uVar3;
}

