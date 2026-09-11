/* Decompiled from Speed.exe @ 00539030 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00539030(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[param_1[8] + 0xb];
  if (*(int *)(iVar1 + 0x14) != 1) {
    return;
  }
  if (*(char *)(param_1[8] + 0x24 + (int)param_1) != '\x01') {
    switch(*(undefined4 *)(iVar1 + 0xc)) {
    case 0:
      (**(code **)(*param_1 + 0xc0))();
      break;
    case 1:
      (**(code **)(*param_1 + 0x5c))();
      break;
    case 2:
      (**(code **)(*param_1 + 0xb4))();
      break;
    case 4:
      (**(code **)(*param_1 + 0xc4))();
      break;
    case 8:
      (**(code **)(*param_1 + 200))();
    }
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0xc);
    goto LAB_00539110;
  }
  switch(*(undefined4 *)(iVar1 + 0xc)) {
  case 0:
    if (*(int *)(iVar1 + 8) != 0) {
      (**(code **)(*param_1 + 0xc0))();
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0xc);
      goto LAB_00539110;
    }
    break;
  case 1:
    (**(code **)(*param_1 + 0xac))();
    break;
  case 2:
    (**(code **)(*param_1 + 0xb4))();
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0xc);
    goto LAB_00539110;
  case 4:
    (**(code **)(*param_1 + 0xc4))();
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0xc);
    goto LAB_00539110;
  case 8:
    (**(code **)(*param_1 + 0xac))();
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0xc);
    goto LAB_00539110;
  }
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0xc);
LAB_00539110:
  *(undefined4 *)(param_1[param_1[8] + 0xd] + 0x210) = *(undefined4 *)(param_1[1] + 200);
  return;
}

