/* Decompiled from Speed.exe @ 0044d760 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0044d760(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *unaff_EBX;
  int unaff_EDI;
  char local_5;
  int local_4;
  
  FUN_00571ea0(0,"AIGoalPtr");
  piVar1 = (int *)*unaff_EBX;
  local_5 = piVar1 != (int *)0x0;
  FUN_00571c20(unaff_EDI,&local_5,1,1,1);
  if (local_5 == '\0') goto LAB_0044d857;
  if (piVar1 != (int *)0x0) {
    local_4 = piVar1[5];
  }
  FUN_00571c20(unaff_EDI,&local_4,1,4,1);
  if (*(char *)(unaff_EDI + 0x3d) != '\0') {
    switch(local_4) {
    case 1:
      iVar2 = FUN_00567160();
      if (iVar2 == 0) {
LAB_0044d845:
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = (int *)FUN_0044a150(0);
      }
      break;
    case 2:
      iVar2 = FUN_00567160();
      if (iVar2 == 0) goto LAB_0044d845;
      piVar1 = (int *)FUN_0044a190(0);
      break;
    case 3:
      iVar2 = FUN_00567160();
      if (iVar2 == 0) goto LAB_0044d845;
      piVar1 = (int *)FUN_0044a1c0(0);
      break;
    case 4:
      iVar2 = FUN_00567160();
      if (iVar2 == 0) goto LAB_0044d845;
      piVar1 = (int *)FUN_0044a200(0);
      break;
    case 5:
      iVar2 = FUN_00567160();
      if (iVar2 == 0) goto LAB_0044d845;
      piVar1 = (int *)FUN_0044a230(0);
    }
    *unaff_EBX = (int)piVar1;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
LAB_0044d857:
  iVar2 = *(char *)(unaff_EDI + 0x40) * 0x10;
  *(int *)(iVar2 + unaff_EDI + 0x58) =
       *(int *)(unaff_EDI + 0x150) - *(int *)(iVar2 + 0x58 + unaff_EDI);
  cVar3 = *(char *)(unaff_EDI + 0x40) + -1;
  *(char *)(unaff_EDI + 0x40) = cVar3;
  if ((int)cVar3 < *(int *)(unaff_EDI + 0x44)) {
    *(undefined4 *)(unaff_EDI + 0x44) = 0xffffffff;
  }
  return;
}

