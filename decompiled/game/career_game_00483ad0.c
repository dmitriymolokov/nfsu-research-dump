/* Decompiled from Speed.exe @ 00483ad0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_00483ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_c0 [16];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_90 [52];
  undefined1 auStack_5c [88];
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0x3f800000;
  FUN_0040b780(&local_b0);
  FUN_0040bc10();
  thunk_FUN_005abda2(local_c0,param_3,local_90);
  thunk_FUN_005abda2(&local_ac,&stack0xffffff34,auStack_5c);
  FUN_0040b780(&stack0xffffff38);
  return;
}

