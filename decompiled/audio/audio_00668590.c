/* Decompiled from Speed.exe @ 00668590 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00668590(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int *piVar5;
  int local_24 [4];
  int local_14;
  int local_10;
  undefined4 local_4;
  int iVar4;
  
  pcVar2 = (char *)0x0;
  if (param_1 == (char *)0x0) goto LAB_00668700;
  cVar3 = *param_1;
  if (cVar3 == '$') {
    cVar3 = param_1[1];
    pcVar1 = param_1;
    if (cVar3 < '0') goto LAB_00668700;
    do {
      iVar4 = (int)cVar3;
      cVar3 = pcVar1[2];
      param_1 = (char *)((int)pcVar2 << 4 | (uint)(byte)(&DAT_006ab0b8)[iVar4]);
      pcVar2 = param_1;
      pcVar1 = pcVar1 + 1;
    } while ('/' < cVar3);
  }
  else {
    if ((cVar3 < '0') || ('9' < cVar3)) goto LAB_00668700;
    pcVar2 = (char *)FUN_006670d0();
    if (' ' < *pcVar2) {
      if ('9' < cVar3) goto LAB_00668700;
      piVar5 = local_24;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
      }
      local_4 = 0xffffffff;
      FUN_006670d0();
      FUN_006670d0();
      FUN_006670d0();
      FUN_006670d0();
      FUN_006670d0();
      FUN_006670d0();
      if ((((local_10 < 0x7b2) || (0x833 < local_10)) || (local_14 < 1)) ||
         (((0xc < local_14 || (local_24[3] < 1)) || (iVar4 = local_10, 0x1f < local_24[3])))) {
        iVar4 = 0;
      }
      if (((local_24[2] < 0) || (0x17 < local_24[2])) ||
         (((local_24[1] < 0 || (((0x3b < local_24[1] || (local_24[0] < 0)) || (0x3d < local_24[0])))
           ) || (iVar4 == 0)))) goto LAB_00668700;
      local_14 = local_14 + -1;
      local_10 = iVar4 + -0x76c;
      param_1 = (char *)FUN_00667260();
    }
  }
  if (param_1 != (char *)0x0) {
    return;
  }
LAB_00668700:
  if (param_2 != 0) {
    return;
  }
  FUN_0066ef60();
  return;
}

