/* Decompiled from Speed.exe @ 00568690 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00568690(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  piVar3 = &DAT_006f1fb8;
  do {
    if (*piVar3 == param_2) {
      puVar1 = (undefined4 *)(iVar5 * 0x14 + 0x6f1fb0);
      if (puVar1 != (undefined4 *)0x0) {
        if ((uint)(&DAT_006f1fc0)[iVar5 * 5] < 0x20) {
          iVar4 = (&DAT_00733f78)[(&DAT_006f1fc0)[iVar5 * 5]];
        }
        else {
          iVar4 = 0;
        }
        uVar2 = *puVar1;
        switch(uVar2) {
        default:
          iVar4 = 0;
          break;
        case 1:
          iVar4 = *(int *)(iVar4 + 4);
          break;
        case 2:
          iVar4 = *(int *)(iVar4 + 8);
          break;
        case 3:
          iVar4 = *(int *)(iVar4 + 0xc);
        }
        if (((DAT_0073494c != 0) || (DAT_00735ec1 != '\0')) ||
           (iVar6 = DAT_0076026c, DAT_0073440c != '\0')) {
          iVar6 = 1000000000;
        }
        if (iVar4 <= iVar6) {
          (&DAT_006f1fb4)[iVar5 * 5] = uVar2;
          DAT_0073497c = DAT_0073497c - iVar4;
          DAT_00734984 = DAT_00734984 + iVar4;
        }
      }
      return;
    }
    piVar3 = piVar3 + 5;
    iVar5 = iVar5 + 1;
  } while ((int)piVar3 < 0x6f21ac);
  return;
}

