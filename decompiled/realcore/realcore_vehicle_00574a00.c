/* Decompiled from Speed.exe @ 00574a00 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


undefined * FUN_00574a00(int param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = FUN_005749b0();
  iVar5 = 0;
  if (0 < DAT_00704140) {
    puVar3 = &DAT_00703880;
    do {
      if (*(int *)(puVar3 + 8) == param_1) {
        iVar4 = 0;
        do {
          if (iVar2 == 0) {
            bVar6 = param_1 == 1;
LAB_00574a4a:
            if (bVar6) {
              return puVar3;
            }
          }
          else {
            cVar1 = puVar3[iVar4];
            if (cVar1 != '\0') {
              if (cVar1 == -1) {
                return puVar3;
              }
              bVar6 = cVar1 == iVar2;
              goto LAB_00574a4a;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 8);
      }
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 0x20;
    } while (iVar5 < DAT_00704140);
  }
  return (undefined *)0x0;
}

