/* Decompiled from Speed.exe @ 00549980 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00549980(void)

{
  int unaff_ESI;
  
  DAT_00734fd0 = 0;
  if (*(int *)(unaff_ESI + 0x68) != 0) {
    FUN_00664990(*(int *)(unaff_ESI + 0x68));
    if (*(int *)(unaff_ESI + 0x6c) != 0) {
      FUN_00664c70(*(undefined4 *)(unaff_ESI + 0x68),0,*(int *)(unaff_ESI + 0x6c));
      *(undefined4 *)(unaff_ESI + 0x6c) = 0;
    }
    if (*(int *)(unaff_ESI + 0x70) != 0) {
      FUN_00664c70(*(undefined4 *)(unaff_ESI + 0x68),1,*(int *)(unaff_ESI + 0x70));
      *(undefined4 *)(unaff_ESI + 0x70) = 0;
    }
    if (*(int *)(unaff_ESI + 0x74) != 0) {
      FUN_00664c70(*(undefined4 *)(unaff_ESI + 0x68),5,*(int *)(unaff_ESI + 0x74));
      *(undefined4 *)(unaff_ESI + 0x74) = 0;
    }
    if (*(int *)(unaff_ESI + 0x68) != 0) {
      if (*(int *)(unaff_ESI + 0x40) != 0) {
        FUN_00664c70(*(int *)(unaff_ESI + 0x68),6,*(int *)(unaff_ESI + 0x40));
        *(undefined4 *)(unaff_ESI + 0x40) = 0;
      }
      *(undefined4 *)(unaff_ESI + 0x54) = 0xffffffff;
      *(undefined1 *)(unaff_ESI + 0x58) = 0;
      *(undefined4 *)(unaff_ESI + 0x44) = 0;
      *(undefined4 *)(unaff_ESI + 0x48) = 0;
      *(undefined4 *)(unaff_ESI + 0x4c) = 0;
      *(undefined4 *)(unaff_ESI + 0x50) = 0;
    }
    *(undefined4 *)(unaff_ESI + 0x30) = 0;
    *(undefined4 *)(unaff_ESI + 0x34) = 0;
    *(undefined4 *)(unaff_ESI + 0x38) = 0;
    *(undefined4 *)(unaff_ESI + 0x3c) = 0;
    FUN_00664a40(*(undefined4 *)(unaff_ESI + 0x68));
    *(undefined4 *)(unaff_ESI + 0x68) = 0;
    FUN_00668870(*(undefined4 *)(unaff_ESI + 0x28c));
    *(undefined4 *)(unaff_ESI + 0x28c) = 0;
  }
  DAT_0073d875 = 0;
  DAT_0073d868 = 0;
  DAT_0073dda8 = 0;
  DAT_0073ddac = 0;
  DAT_0073ddb0 = 0;
  DAT_0073ddb8 = 0;
  DAT_0073d8cc = 0;
  DAT_0073dd9c = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x53c) = *(undefined4 *)(unaff_ESI + 0x538);
  *(undefined4 *)(unaff_ESI + 0x538) = 0x18;
  return;
}

