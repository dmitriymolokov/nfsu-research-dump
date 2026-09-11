/* Decompiled from Speed.exe @ 00642450 */
/* Module: Loader */
/* Ghidra DecompileModule */


void FUN_00642450(int param_1)

{
  undefined1 local_200 [512];
  
  if (param_1 == 0) {
    local_200[0] = 0;
  }
  else {
    FUN_00671077(local_200,param_1,&stack0x00000008);
  }
  (*(code *)PTR_FUN_006e76ac)(&DAT_006cc568,local_200);
  return;
}

