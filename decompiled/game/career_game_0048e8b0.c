/* Decompiled from Speed.exe @ 0048e8b0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_0048e8b0(void)

{
  char *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar8 = &DAT_007404a4;
  do {
    if ((((puVar8 != (undefined4 *)0x44) && (puVar7 = (undefined4 *)*puVar8, puVar7 != puVar8)) &&
        (puVar7 != (undefined4 *)0x0)) && (puVar7 + -1 != (int *)0x0)) {
      (**(code **)(puVar7[-1] + 4))();
    }
    puVar8 = puVar8 + 0x18;
  } while ((int)puVar8 < 0x740a45);
  if (DAT_00735ee4 == 0) {
    pcVar4 = "JR2Server";
    do {
      pcVar1 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
    pcVar4 = "JR2Server";
    do {
      pcVar1 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
    DAT_00735ee0 = 0;
    DAT_00735ee4 = 1;
  }
  else if ((DAT_00735ee0 != 0) && (DAT_00740500 != 0)) {
    iVar5 = DAT_006f0884 - *(int *)(DAT_00740500 + 0x278);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (0x10 < iVar5) {
      *(int *)(DAT_00740500 + 0x278) = DAT_006f0884;
      FUN_0047d630();
    }
  }
  if ((((undefined4 **)DAT_00740504 != &DAT_00740504) && (DAT_00740504 != (undefined4 *)0x0)) &&
     (DAT_00740504 != (undefined4 *)0x4)) {
    FUN_0040a880(DAT_00740500 + 0x40);
  }
  bVar3 = false;
  puVar8 = &DAT_0077aa58;
  puVar7 = &DAT_00740504;
  do {
    if ((((*(char *)(puVar7 + -0xf) != '\0') && (puVar6 = (undefined4 *)*puVar7, puVar6 != puVar7))
        && (puVar6 != (undefined4 *)0x0)) && (puVar6 != (undefined4 *)0x4)) {
      if (!bVar3) {
        bVar3 = true;
        puVar6 = &DAT_0077aa58;
        do {
          puVar6[-1] = 0;
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          *(undefined1 *)(puVar6 + 3) = 0;
          puVar6 = puVar6 + 0x11;
        } while ((int)puVar6 < 0x77aae0);
      }
      iVar5 = puVar7[-1];
      uVar2 = *(undefined4 *)(iVar5 + 0x40);
      *puVar8 = *(undefined4 *)(iVar5 + 0x44);
      puVar8[-1] = uVar2;
      uVar2 = *(undefined4 *)(iVar5 + 0x1e0);
      puVar8[2] = *(undefined4 *)(iVar5 + 0x1e4);
      puVar8[1] = uVar2;
      *(undefined1 *)(puVar8 + 3) = 1;
    }
    puVar7 = puVar7 + 0x18;
    puVar8 = puVar8 + 0x11;
  } while ((int)puVar7 < 0x7405c4);
  return;
}

