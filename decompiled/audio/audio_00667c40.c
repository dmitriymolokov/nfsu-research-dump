/* Decompiled from Speed.exe @ 00667c40 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00667c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  undefined1 local_148 [36];
  undefined1 local_124 [288];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  if (param_4 == 0) {
    FUN_0066ef60();
  }
  puVar1 = (undefined4 *)FUN_00667100(local_148);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar2 = FUN_006672e0();
  FUN_0067101f(uVar2,"%d.%d.%d %d:%02d:%02d",puVar1[5] + 0x76c,puVar1[4] + 1,puVar1[3],puVar1[2],
               puVar1[1],*puVar1);
  uVar2 = FUN_00667300(param_1,param_2,local_124);
  return uVar2;
}

