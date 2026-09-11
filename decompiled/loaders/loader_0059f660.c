/* Decompiled from Speed.exe @ 0059f660 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059f660(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar4 = 0;
  piVar2 = &DAT_006ee650;
  if (DAT_00734998 == 2) {
    do {
      if (*piVar2 == 7) goto LAB_0059f6b9;
      piVar2 = piVar2 + 4;
      iVar4 = iVar4 + 1;
    } while ((int)piVar2 < 0x6ee6f0);
  }
  else {
    do {
      if (*piVar2 == 0) goto LAB_0059f6b9;
      piVar2 = piVar2 + 4;
      iVar4 = iVar4 + 1;
    } while ((int)piVar2 < 0x6ee6f0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0059f688:
  piVar2 = (int *)puVar5[3];
  iVar4 = *piVar2;
  iVar6 = 0;
  do {
    if (iVar4 == 0) {
      DAT_00734420 = iVar6 + 0x333f8U & 0xffffffc0;
      if (DAT_006ee4a4 != 0) {
        _DAT_0073441c = FUN_00565b60(DAT_00734420,0,0,0);
        uVar1 = DAT_00734420;
        iVar6 = DAT_006ee4a4 * 0x58;
        puVar5 = (undefined4 *)(&DAT_007301f8 + iVar6);
        (&DAT_007301d4)[DAT_006ee4a4] = puVar5;
        iVar4 = iVar6 + 0x7301fc;
        *(int *)iVar4 = iVar4;
        *(int *)(iVar6 + 0x730200) = iVar4;
        iVar4 = iVar6 + 0x730204;
        *(int *)iVar4 = iVar4;
        *(int *)(iVar6 + 0x730208) = iVar4;
        iVar4 = iVar6 + 0x73020c;
        *(int *)iVar4 = iVar4;
        *(int *)(iVar6 + 0x730210) = iVar4;
        *(undefined4 *)(iVar6 + 0x730214) = 0;
        *(undefined4 *)(iVar6 + 0x730218) = 0;
        *(undefined4 *)(iVar6 + 0x73021c) = 0;
        *(undefined4 *)(iVar6 + 0x730220) = 0;
        *(undefined4 *)(iVar6 + 0x730224) = 0;
        *(undefined4 *)(iVar6 + 0x730228) = 0;
        *(undefined4 *)(iVar6 + 0x73022c) = 0;
        FUN_0063f150(iVar6 + 0x730234);
        iVar4 = *(int *)(iVar6 + 0x73021c);
        *(undefined1 *)(iVar6 + 0x730230) = 1;
        *(undefined1 *)(iVar6 + 0x730231) = 1;
        *puVar5 = "LanguageMemoryPool";
        *(uint *)(iVar6 + 0x73021c) = iVar4 + uVar1;
        FUN_00565410(puVar5,uVar1);
      }
      FUN_0053eed0(&DAT_00740420,"LANGUAGES\\LANGUAGETEXTURES.BIN",0,0,0);
      iVar4 = FUN_0053ed70(&DAT_00740420,"LANGUAGES\\LANGUAGETEXTURES.BIN");
      while (iVar4 != 0) {
        FUN_004483c0();
        iVar4 = FUN_0053ed70(&DAT_00740420,"LANGUAGES\\LANGUAGETEXTURES.BIN");
      }
      return;
    }
    iVar3 = 0;
    do {
      if ((&DAT_006ee4a8)[iVar3 * 2] == iVar4) {
        if (-1 < (int)(&DAT_006ee4ac)[iVar3 * 2]) {
          iVar6 = iVar6 + (&DAT_006ee4ac)[iVar3 * 2];
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xb);
    iVar4 = piVar2[1];
    piVar2 = piVar2 + 1;
  } while( true );
LAB_0059f6b9:
  puVar5 = &DAT_006ee650 + iVar4 * 4;
  goto LAB_0059f688;
}

