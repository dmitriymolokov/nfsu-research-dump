/* Decompiled from Speed.exe @ 004f7c00 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f7c00(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  int *piVar4;
  undefined4 local_38;
  int local_34 [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  if (param_1 == -0x3ae6403d) {
    if (unaff_ESI[0xf] != 0) {
      FUN_004f8340(unaff_ESI[3]);
      iVar2 = unaff_ESI[3];
      piVar4 = local_34;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      local_34[0] = unaff_ESI[0xf];
      local_4 = 0;
      local_c = 0;
      local_8 = 0;
      local_14 = 1;
      local_38 = 0x169268;
      local_10 = 0x639;
      FUN_004dcfd0(&local_38,iVar2);
    }
  }
  else if (param_1 == -0x367ca946) {
    if (((char)unaff_ESI[0xe] != '\0') && (*(int *)(param_4 + 0x1c) != 0)) {
      cVar1 = FUN_004f6650();
      if (cVar1 == '\0') {
        FUN_004f62a0(0x32,0);
      }
    }
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004f3f90(&DAT_00746104);
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar2 + 0x18);
      }
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0x80);
      }
    }
    if (((unaff_ESI[9] != 0) && (iVar2 != 0)) &&
       (*(int *)(unaff_ESI[9] + 0x10) != *(int *)(iVar2 + 0x10))) {
      FUN_004f8340(unaff_ESI[3]);
    }
    unaff_ESI[9] = iVar2;
  }
  (**(code **)(*unaff_ESI + 8))(param_1,param_2,param_3,param_4);
  return;
}

