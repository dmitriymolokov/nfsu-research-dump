/* Decompiled from Speed.exe @ 0066f090 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0066f090(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint unaff_retaddr;
  int local_43c;
  undefined1 local_438 [16];
  undefined1 local_428 [20];
  char local_414;
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  local_43c = 0x10;
  local_43c = FUN_00662f00(*param_3,local_428,0x424,0,local_438,&local_43c);
  do {
    if (local_43c < 1) {
      return 0;
    }
    if (0 < (int)param_3[0xd]) {
      if (local_414 == '\0') {
        iVar4 = FUN_0066efc0();
      }
      else {
        if (local_414 != '\v') goto LAB_0066f151;
        iVar4 = FUN_0066ef70(local_438);
      }
      if (iVar4 != 0) {
        FUN_00668d60(param_3 + 3);
        piVar3 = (int *)param_3[0xc];
        piVar2 = param_3 + 0xc;
        while (piVar1 = piVar3, piVar1 != (int *)0x0) {
          piVar2 = piVar1;
          piVar3 = (int *)*piVar1;
        }
        *piVar2 = iVar4;
        param_3[0xd] = param_3[0xd] + -1;
        FUN_00668df0(param_3 + 3);
      }
    }
LAB_0066f151:
    local_43c = 0x10;
    local_43c = FUN_00662f00(*param_3,local_428,0x424,0,local_438,&local_43c);
  } while( true );
}

