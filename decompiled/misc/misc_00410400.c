/* Decompiled from Speed.exe @ 00410400 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410400(undefined *param_1)

{
  int iVar1;
  int unaff_EDI;
  undefined1 local_90 [52];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [76];
  
  DAT_0071b1f4 = DAT_0071b1f4 + 1;
  if (param_1 == &DAT_0078bcc0) {
    _DAT_0071b200 = _DAT_0071b200 + 1;
  }
  if (((param_1 != DAT_0078eb80) || (DAT_0073640c != DAT_0078eb7c)) || (DAT_007010b8 != unaff_EDI))
  {
    iVar1 = (&DAT_00740460)[unaff_EDI * 0x18];
    if (unaff_EDI != DAT_007010b8) {
      if (DAT_00736414 != 0) {
        (**(code **)(*DAT_0073636c + 0xb0))(DAT_0073636c,2,iVar1);
        (**(code **)(*DAT_0073636c + 0xb0))(DAT_0073636c,3,iVar1 + 0x40);
      }
      DAT_0071b1fc = DAT_0071b1fc + 1;
      DAT_007010b8 = unaff_EDI;
    }
    _DAT_0071b1f8 = _DAT_0071b1f8 + 1;
    DAT_0078eb80 = param_1;
    DAT_0078eb7c = DAT_0073640c;
    if ((*DAT_0073640c == 5) && (DAT_00736418 != 0)) {
      thunk_FUN_005ac68f(local_90,param_1,iVar1);
      (**(code **)(*(int *)DAT_0073640c[6] + 0x98))
                ((int *)DAT_0073640c[6],DAT_0073640c[9],&stack0xffffff64);
    }
    if (DAT_00736414 != 0) {
      (**(code **)(*DAT_0073636c + 0xb0))(DAT_0073636c,0x100,param_1);
    }
    if (DAT_00736418 != 0) {
      thunk_FUN_005ac68f(auStack_50,param_1,iVar1 + 0x80);
      (**(code **)(*(int *)DAT_0073640c[6] + 0x98))
                ((int *)DAT_0073640c[6],DAT_0073640c[7],auStack_5c);
    }
  }
  return;
}

