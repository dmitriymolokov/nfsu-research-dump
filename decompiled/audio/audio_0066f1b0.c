/* Decompiled from Speed.exe @ 0066f1b0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_0066f1b0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint unaff_retaddr;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  iVar1 = FUN_00662c30(2,3,1);
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  local_14 = 2;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_12 = 0x100;
  FUN_00662d70(iVar1,&local_14,0x10);
  piVar2 = (int *)FUN_00549460(0x3c);
  if (piVar2 != (int *)0x0) {
    piVar4 = piVar2;
    for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    *piVar2 = iVar1;
    piVar2[1] = 1;
    piVar2[0xd] = 8;
    piVar2[0xe] = 0x40;
    FUN_00668cc0(piVar2 + 3);
    FUN_00663160(*piVar2,2,5000,piVar2,FUN_0066f090);
    return piVar2;
  }
  return (int *)0x0;
}

