/* Decompiled from Speed.exe @ 00418ac0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00418ac0(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int unaff_EBX;
  int *piVar4;
  int local_4;
  
  if (*(char *)(unaff_EBX + 0x266) != '\0') {
    piVar4 = (int *)(unaff_EBX + 0x40);
    local_4 = 3;
    do {
      if ((*piVar4 != 0) && (cVar2 = FUN_004f7eb0(unaff_EBX), cVar2 != '\0')) {
        uVar1 = *(undefined4 *)(*piVar4 + 0x10);
        if ((*(int *)(unaff_EBX + 0xc) == 0) ||
           ((iVar3 = FUN_004f65d0(), iVar3 == 0 || (iVar3 = FUN_004ffb70(), iVar3 == 0)))) {
          if (DAT_0073578c != 0) {
            iVar3 = FUN_004ef050(uVar1);
            goto LAB_00418b32;
          }
        }
        else {
LAB_00418b32:
          if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
            FUN_004f0700(0xc407210,*piVar4,*(undefined4 *)(unaff_EBX + 0x4c),iVar3,0);
          }
        }
        iVar3 = *(int *)(*piVar4 + 0x10);
        if (iVar3 == -0x5597403a) {
          iVar3 = FUN_004f3f90(&DAT_00746104);
          if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) &&
             (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
            (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x911c0a4b,0,0,*(int *)(iVar3 + 0x18));
          }
        }
        else if (iVar3 == -0x55974029) {
          FUN_004c96c0(0x72619778);
        }
        else if (iVar3 == -0x15619cfe) {
          FUN_004c96c0(0x406415e3);
        }
      }
      piVar4 = piVar4 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

