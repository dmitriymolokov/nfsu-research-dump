/* Decompiled from Speed.exe @ 0065a130 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_0065a130(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_007172ec != 0) {
    iVar3 = FUN_0065fce0(DAT_00717290 + 4 + DAT_007172e8 * 4,4);
    if ((iVar3 != 0) && (iVar4 = 0, 0 < iVar3)) {
      do {
        iVar1 = *(int *)(DAT_0071728c + iVar4 * 4);
        pcVar2 = *(code **)(iVar1 + 4);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(iVar1);
          *(undefined4 *)(*(int *)(DAT_0071728c + iVar4 * 4) + 4) = 0;
        }
        iVar1 = *(int *)(DAT_0071728c + iVar4 * 4);
        if (iVar1 != 0) {
          FUN_006510d0(iVar1);
          *(undefined4 *)(DAT_0071728c + iVar4 * 4) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (DAT_0071728c != 0) {
      FUN_006510d0(DAT_0071728c);
      DAT_0071728c = 0;
    }
    iVar4 = 0;
    iVar3 = DAT_00717294;
    do {
      if (*(int *)(iVar4 + iVar3) != 0) {
        *(undefined4 *)(iVar4 + iVar3) = 0;
        iVar3 = DAT_00717294;
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0x18);
    if (iVar3 != 0) {
      FUN_006510d0(iVar3);
      DAT_00717294 = 0;
    }
    DAT_007172a4 = 0;
    DAT_007172a0 = 0;
    DAT_007172a8 = 0;
    DAT_007172e4 = 0;
    DAT_007172ec = 0;
    FUN_00654cd0(&DAT_00716688,0x400);
  }
  return;
}

