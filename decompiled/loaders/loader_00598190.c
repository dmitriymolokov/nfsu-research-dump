/* Decompiled from Speed.exe @ 00598190 */
/* Module: Loader */
/* Ghidra DecompileAll */


void * FUN_00598190(void *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined **ppuVar5;
  
  _eh_vector_constructor_iterator_(param_1,8,0xcb,FUN_00579590,FUN_004049f0);
  ppuVar5 = &PTR_DAT_006ef2d0;
  do {
    iVar4 = 0;
    do {
      switch(iVar4) {
      case 0:
        pbVar3 = ppuVar5[0x10];
        break;
      case 1:
        pbVar3 = ppuVar5[0x13];
        break;
      case 2:
        pbVar3 = ppuVar5[0x16];
        break;
      case 3:
        pbVar3 = ppuVar5[0x19];
        break;
      case 4:
        pbVar3 = ppuVar5[0x1c];
        break;
      case 5:
        pbVar3 = ppuVar5[0x1f];
        break;
      case 6:
        pbVar3 = ppuVar5[0x22];
        break;
      default:
        goto switchD_005981bd_default;
      }
      if ((pbVar3 != (byte *)0x0) && (bVar1 = *pbVar3, bVar1 != 0)) {
        iVar2 = -1;
        do {
          iVar2 = iVar2 * 0x21 + (uint)bVar1;
          bVar1 = pbVar3[1];
          pbVar3 = pbVar3 + 1;
        } while (bVar1 != 0);
        FUN_00402ad0(iVar2);
      }
switchD_005981bd_default:
      iVar4 = iVar4 + 1;
    } while (iVar4 < 7);
    ppuVar5 = ppuVar5 + 0x25;
    if (0x6f0393 < (int)ppuVar5) {
      return param_1;
    }
  } while( true );
}

