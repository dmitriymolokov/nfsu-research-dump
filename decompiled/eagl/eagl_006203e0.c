/* spd-match: far pct=25.00 M4.0.2-CE */
/* Decompiled from Speed.exe @ 006203e0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_006203e0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_LAB_006a781c;
  for (iVar1 = DAT_00709d84; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    FUN_00621b00(iVar1);
  }
  piVar2 = (int *)param_1[0x3e];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)param_1[0x3d];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FUN_00623350();
  FUN_00623350();
  if (DAT_00709d80 != (int *)0x0) {
    (**(code **)(*DAT_00709d80 + 8))(DAT_00709d80);
  }
  DAT_00709d80 = (int *)0x0;
  if (DAT_00709d99 != '\0') {
    if (DAT_007096d8 != (HWND)0x0) {
      DestroyWindow(DAT_007096d8);
      DAT_007096d8 = (HWND)0x0;
    }
    UnregisterClassA(DAT_006dfba0,DAT_006dfb8c);
    DAT_00709d99 = '\0';
  }
  (*(code *)PTR_FUN_006dfaa0)(param_1[0x38],param_1[0x37]);
  param_1[0x38] = 0;
  param_1[8] = &PTR_LAB_006a7818;
  param_1[4] = &PTR_LAB_006a7814;
  *param_1 = &PTR_LAB_006a77ec;
  iVar1 = *(int *)(param_1[3] + 0x10);
  while (iVar1 != 0) {
    FUN_0061f0e0(*(undefined4 *)(param_1[3] + 0x10));
    iVar1 = *(int *)(param_1[3] + 0x10);
  }
  return;
}

