/* Decompiled from Speed.exe @ 00667260 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_00667260(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_EDI;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  uVar2 = 0;
  uVar3 = 0xffffffff;
  do {
    uVar4 = uVar2 + uVar3 >> 1;
    FUN_00667100(&local_24);
    iVar1 = local_10 - unaff_EDI[5];
    if ((((iVar1 == 0) && (iVar1 = local_14 - unaff_EDI[4], iVar1 == 0)) &&
        (iVar1 = local_18 - unaff_EDI[3], iVar1 == 0)) &&
       (((iVar1 = local_1c - unaff_EDI[2], iVar1 == 0 &&
         (iVar1 = local_20 - unaff_EDI[1], iVar1 == 0)) &&
        (iVar1 = local_24 - *unaff_EDI, iVar1 == 0)))) break;
    if (iVar1 < 1) {
      uVar2 = uVar4 + 1;
    }
    else {
      uVar3 = uVar4 - 1;
    }
  } while (uVar2 <= uVar3);
  return (iVar1 != 0) - 1 & uVar4;
}

