/* Decompiled from Speed.exe @ 0043d7e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0043d7e0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_70;
  undefined4 local_54;
  undefined4 local_38;
  undefined4 local_1c;
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar2 = FUN_0043b850(local_8);
    if (iVar2 != 0) {
      FUN_0042ae40();
      iVar3 = FUN_0054a1b0();
      if (iVar3 == 0) {
        cVar1 = FUN_00421a50();
        if (cVar1 == '\0') {
          cVar1 = FUN_0041f600();
          if (cVar1 == '\0') {
            if (DAT_0078a318 == 0) {
              *(undefined4 *)(iVar2 + 8) = local_70;
            }
            else {
              *(undefined4 *)(iVar2 + 8) = local_54;
            }
          }
          else {
            *(undefined4 *)(iVar2 + 8) = local_1c;
          }
        }
        else {
          *(undefined4 *)(iVar2 + 8) = local_38;
        }
        if (*(uint *)(iVar2 + 8) < 100) {
          *(undefined4 *)(iVar2 + 8) = 100;
        }
      }
    }
  }
  return;
}

