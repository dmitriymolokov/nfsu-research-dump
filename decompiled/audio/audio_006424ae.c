/* Decompiled from Speed.exe @ 006424a0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_006424a0(int param_1)

{
  undefined1 local_200 [512];
  
  if (param_1 == 0) {
    local_200[0] = 0;
  }
  else {
    FUN_00671077(local_200,param_1,&stack0x00000008);
  }
  FUN_00642e60(2,"ERROR: %s",local_200);
  if (DAT_0070fe30 != 0) {
    FUN_00642e60(2,"FILE %s LINE %d\n",DAT_0070fe30,DAT_0070fe34);
  }
  FUN_00642540();
  return;
}

