/* Decompiled from Speed.exe @ 0050a3c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_0050a3c0(int param_1,uint param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_0073578c;
  if (0xb5971bf1 < param_2) {
    if (param_2 == 0xc519bfc0) {
      if (((DAT_0073578c != 0) && (iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 != 0)) &&
         (*(int *)(iVar3 + 0x18) != 0)) {
        FUN_004eebf0(*(undefined4 *)(iVar4 + 8),*(int *)(iVar3 + 0x18));
      }
      iVar4 = FUN_004f3f90(&DAT_00746104);
      if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) && (*(int **)(iVar4 + 0x14) != (int *)0x0)
         ) {
        (**(code **)(**(int **)(iVar4 + 0x14) + 8))(0x2401cd38,0,0,*(int *)(iVar4 + 0x18));
      }
      FUN_00504320(*(undefined4 *)(param_1 + 0xc));
      iVar4 = DAT_0073578c;
      DAT_00745e4c = 0;
      if (((DAT_0073578c != 0) && (iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 != 0)) &&
         (*(int *)(iVar3 + 0x18) != 0)) {
        FUN_004f0800(*(undefined4 *)(iVar4 + 8),*(int *)(iVar3 + 0x18));
      }
    }
    else if (param_2 == 0xc98356ba) {
      FUN_004f89d0();
      FUN_004f7d30();
      return;
    }
    return;
  }
  if (param_2 != 0xb5971bf1) {
    if (param_2 == 0xc407210) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 8);
      cVar2 = FUN_00509d70(uVar1);
      if ((((cVar2 == '\0') || (cVar2 = FUN_00509d70(uVar1), cVar2 == '\0')) ||
          (cVar2 = FUN_00509d70(uVar1), cVar2 == '\0')) || (DAT_0073572c != '\0')) {
        FUN_0050a2a0();
        return;
      }
      if (DAT_006f1dd8 == 0) {
        return;
      }
      if (*(int **)(DAT_007356a8 + 0xc0) == (int *)0x0) {
        return;
      }
      (**(code **)(**(int **)(DAT_007356a8 + 0xc0) + 0x14))(7);
      return;
    }
    if (param_2 == 0x911ab364) {
      FUN_00507020(param_1);
      return;
    }
    if (param_2 != 0x9120409e) {
      return;
    }
  }
  FUN_0050a100();
  return;
}

