/* Decompiled from Speed.exe @ 0045d540 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_0045d540(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = unaff_ESI[0xe3];
  local_8 = unaff_ESI[0xe4];
  local_10 = 0;
  local_14 = 0x47c34f80;
  cVar1 = FUN_005a7700(unaff_ESI[0xe5],*unaff_ESI);
  if (cVar1 != '\0') {
    cVar1 = FUN_0045afd0(param_1,0,&local_10,&param_3,&local_14,0,param_3,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

