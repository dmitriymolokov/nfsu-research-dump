/* spd-match: far pct=9.04 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00497c50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_00497c50(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006c75b8;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  cVar2 = FUN_0043a2e0();
  if (cVar2 == '\0') {
    iVar3 = 4;
  }
  else {
    iVar3 = (int)(size_t)DAT_0078a328 + (int)(size_t)DAT_0078a32c + (int)(size_t)DAT_0078a324 + (int)DAT_0078a320;
  }
  if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
    FUN_00497eb0(param_1,4);
  }
  else {
    FUN_00498d90(param_1,4,iVar3);
  }
  piVar1 = (int *)DAT_00777ccc;
  if (DAT_00777b4c == 1) {
    if ((DAT_00777ccc != (int *)0x0) && (piVar1[0x1629] == 1)) {
    joined_r0x00497d69:
      if ((int)DAT_00735ed4 != '\0') {
        if ((int)DAT_00735ed4 == '\x03') {
          DAT_00735ed4 = (unsigned char *)2; // was '\x02'
          cVar2 = (**(code **)((int)DAT_00777ccc + 4))();
          if (cVar2 != '\0') {
            DAT_00735ed4 = (unsigned char *)((int)DAT_00735ed4 - 1);
          }
        }
        if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
          iVar3 = (int)(size_t)DAT_0078a32c + (int)(size_t)DAT_0078a328 + (int)(size_t)DAT_0078a324 + (int)DAT_0078a320;
        }
        if ((int)DAT_00735ed4 == '\x01') {
          FUN_0049ab60(param_1,4,iVar3,piVar1);
        }
        else if ((int)DAT_00735ed4 == '\x02') {
          FUN_0049af90(param_1,4,iVar3,piVar1);
        }
        goto LAB_00497df5;
      }
    }
  }
  else if (DAT_00777cc8 == 4) goto joined_r0x00497d69;
  if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
    FUN_00499aa0(param_1,4,(int)(size_t)DAT_0078a328 + (int)(size_t)DAT_0078a32c + (int)(size_t)DAT_0078a324 + (int)DAT_0078a320);
  }
  else {
    FUN_0049a3e0(param_1,4,iVar3);
  }
LAB_00497df5:
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  ExceptionList = local_c;
  return param_1;
}

