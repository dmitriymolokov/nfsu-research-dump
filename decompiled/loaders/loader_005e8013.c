/* Decompiled from Speed.exe @ 005e8013 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005e8013(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  _DAT_00709470 = 0;
  DAT_0070946c = 0;
  DAT_00709464 = (short *)&DAT_00709070;
  DAT_00709460 = (undefined4 *)&DAT_007088a0;
  iVar4 = 0;
  _DAT_00709070 = 0;
LAB_005e8045:
  DAT_00709468 = -1;
LAB_005e804a:
  iVar2 = (int)(short)(&DAT_006de718)[iVar4];
  if (iVar2 == 0) {
    if ((DAT_00709468 < 0) && (DAT_00709468 = FUN_005e739b(), DAT_00709468 < 0)) {
      DAT_00709468 = 0;
    }
    if (((((short)(&DAT_006de860)[iVar4] != 0) &&
         (iVar2 = (short)(&DAT_006de860)[iVar4] + DAT_00709468, -1 < iVar2)) && (iVar2 < 0x128)) &&
       (*(short *)(&DAT_006ded00 + iVar2 * 2) == DAT_00709468)) {
      if (&DAT_00709456 <= DAT_00709464) goto LAB_005e84cf;
      iVar4 = (int)*(short *)(&DAT_006deab0 + iVar2 * 2);
      DAT_00709464 = DAT_00709464 + 1;
      *DAT_00709464 = *(short *)(&DAT_006deab0 + iVar2 * 2);
      DAT_00709460 = DAT_00709460 + 1;
      *DAT_00709460 = DAT_00709458;
      DAT_00709468 = -1;
      if (0 < DAT_0070946c) {
        DAT_0070946c = DAT_0070946c + -1;
      }
      goto LAB_005e804a;
    }
    if ((((short)(&DAT_006de968)[iVar4] != 0) &&
        (iVar2 = (short)(&DAT_006de968)[iVar4] + DAT_00709468, -1 < iVar2)) &&
       ((iVar2 < 0x128 && (*(short *)(&DAT_006ded00 + iVar2 * 2) == DAT_00709468)))) {
      iVar2 = (int)*(short *)(&DAT_006deab0 + iVar2 * 2);
      goto LAB_005e8130;
    }
    if (DAT_0070946c == 0) {
      FUN_005e556b(DAT_00709478,"syntax error");
      _DAT_00709470 = _DAT_00709470 + 1;
    }
    if (2 < DAT_0070946c) goto LAB_005e84c3;
    DAT_0070946c = 3;
    while ((((short)(&DAT_006de860)[*DAT_00709464] == 0 ||
            (iVar4 = (short)(&DAT_006de860)[*DAT_00709464] + 0x100, iVar4 < 0)) ||
           ((0x127 < iVar4 || (*(short *)(&DAT_006ded00 + iVar4 * 2) != 0x100))))) {
      if (DAT_00709464 < (short *)0x709071) {
        DAT_0070946c = 3;
        return 1;
      }
      DAT_00709464 = DAT_00709464 + -1;
      DAT_00709460 = DAT_00709460 + -1;
    }
    if ((short *)0x709455 < DAT_00709464) goto LAB_005e84cf;
    sVar1 = *(short *)(&DAT_006deab0 + iVar4 * 2);
    DAT_00709464 = DAT_00709464 + 1;
    *DAT_00709464 = sVar1;
    uVar6 = DAT_00709458;
  }
  else {
LAB_005e8130:
    iVar4 = (int)*(short *)(&DAT_006de698 + iVar2 * 2);
    DAT_0070945c = DAT_00709460[1 - iVar4];
    switch(iVar2) {
    case 1:
      uVar7 = 0;
      uVar6 = 0;
      break;
    case 2:
      uVar7 = 1;
      uVar6 = 1;
      break;
    case 3:
      uVar7 = 1;
      uVar6 = 2;
      break;
    case 4:
      uVar7 = 2;
      uVar6 = 3;
      break;
    case 5:
      uVar7 = 1;
      uVar6 = 4;
      break;
    case 6:
      uVar7 = 1;
      uVar6 = 5;
      break;
    case 7:
      uVar7 = 0;
      uVar6 = 6;
      break;
    case 8:
      uVar7 = 1;
      uVar6 = 7;
      break;
    case 9:
      uVar7 = 1;
      uVar6 = 8;
      break;
    case 10:
      uVar7 = 1;
      uVar6 = 9;
      break;
    case 0xb:
      uVar7 = 1;
      uVar6 = 10;
      break;
    case 0xc:
      uVar7 = 2;
      uVar6 = 0xb;
      break;
    case 0xd:
      uVar7 = 1;
      uVar6 = 0xc;
      break;
    case 0xe:
      uVar7 = 2;
      uVar6 = 0xd;
      break;
    case 0xf:
      uVar7 = 3;
      uVar6 = 0xe;
      break;
    case 0x10:
      uVar7 = 4;
      uVar6 = 0xf;
      break;
    case 0x11:
      uVar7 = 5;
      uVar6 = 0x10;
      break;
    case 0x12:
      uVar7 = 6;
      uVar6 = 0x11;
      break;
    case 0x13:
      uVar7 = 6;
      uVar6 = 0x12;
      break;
    case 0x14:
      uVar7 = 6;
      uVar6 = 0x13;
      break;
    case 0x15:
      uVar7 = 3;
      uVar6 = 0x14;
      break;
    case 0x16:
      uVar7 = 2;
      uVar6 = 0x15;
      break;
    case 0x17:
      uVar7 = 3;
      uVar6 = 0x16;
      break;
    case 0x18:
      uVar7 = 1;
      uVar6 = 0x17;
      break;
    case 0x19:
      uVar7 = 2;
      uVar6 = 0x18;
      break;
    case 0x1a:
      uVar7 = 1;
      uVar6 = 0x19;
      break;
    case 0x1b:
      uVar7 = 1;
      uVar6 = 0x1a;
      break;
    case 0x1c:
      uVar7 = 1;
      uVar6 = 0x1b;
      break;
    case 0x1d:
      uVar7 = 2;
      uVar6 = 0x1c;
      break;
    case 0x1e:
      uVar7 = 1;
      uVar6 = 0x1d;
      break;
    case 0x1f:
      uVar7 = 2;
      uVar6 = 0x1e;
      break;
    case 0x20:
      uVar7 = 1;
      uVar6 = 0x21;
      break;
    case 0x21:
      uVar7 = 2;
      uVar6 = 0x22;
      break;
    case 0x22:
      uVar7 = 1;
      uVar6 = 0x23;
      break;
    case 0x23:
      uVar7 = 2;
      uVar6 = 0x24;
      break;
    case 0x24:
      uVar7 = 1;
      uVar6 = 0x25;
      break;
    case 0x25:
      uVar7 = 1;
      uVar6 = 0x26;
      break;
    case 0x26:
      uVar7 = 0;
      uVar6 = 0x27;
      break;
    case 0x27:
      uVar7 = 0;
      uVar6 = 0x28;
      break;
    case 0x28:
      uVar7 = 1;
      uVar6 = 0x29;
      break;
    case 0x29:
      uVar7 = 1;
      uVar6 = 0x2a;
      break;
    case 0x2a:
      uVar7 = 1;
      uVar6 = 0x2b;
      break;
    case 0x2b:
      uVar7 = 1;
      uVar6 = 0x2c;
      break;
    case 0x2c:
      uVar7 = 1;
      uVar6 = 0x2d;
      break;
    case 0x2d:
      uVar7 = 1;
      uVar6 = 0x2e;
      break;
    case 0x2e:
      uVar7 = 1;
      uVar6 = 0x2f;
      break;
    case 0x2f:
      uVar7 = 1;
      uVar6 = 0x30;
      break;
    case 0x30:
      uVar7 = 1;
      uVar6 = 0x31;
      break;
    case 0x31:
      uVar7 = 0;
      uVar6 = 0x32;
      break;
    case 0x32:
      uVar7 = 0;
      uVar6 = 0x33;
      break;
    case 0x33:
      uVar7 = 0;
      uVar6 = 0x34;
      break;
    case 0x34:
      uVar7 = 0;
      uVar6 = 0x35;
      break;
    case 0x35:
      uVar7 = 0;
      uVar6 = 0x36;
      break;
    case 0x36:
      uVar7 = 0;
      uVar6 = 0x37;
      break;
    case 0x37:
      uVar7 = 0;
      uVar6 = 0x38;
      break;
    case 0x38:
      uVar7 = 0;
      uVar6 = 0x39;
      break;
    case 0x39:
      uVar7 = 0;
      uVar6 = 0x3a;
      break;
    case 0x3a:
      uVar7 = 0;
      uVar6 = 0x3b;
      break;
    case 0x3b:
      uVar7 = 0;
      uVar6 = 0x3c;
      break;
    case 0x3c:
      uVar7 = 0;
      uVar6 = 0x3d;
      break;
    case 0x3d:
      uVar7 = 0;
      uVar6 = 0x3e;
      break;
    case 0x3e:
      uVar7 = 0;
      uVar6 = 0x3f;
      break;
    default:
      goto switchD_005e815a_default;
    }
    FUN_005e79cd(uVar6,uVar7);
switchD_005e815a_default:
    DAT_00709464 = DAT_00709464 + -iVar4;
    iVar3 = (int)*DAT_00709464;
    DAT_00709460 = DAT_00709460 + -iVar4;
    if ((iVar3 == 0) && (*(short *)(&DAT_006de618 + iVar2 * 2) == 0)) {
      DAT_00709464 = DAT_00709464 + 1;
      iVar4 = 0x10;
      *DAT_00709464 = 0x10;
      DAT_00709460 = DAT_00709460 + 1;
      *DAT_00709460 = DAT_0070945c;
      bVar5 = DAT_00709468 == 0;
      if (DAT_00709468 < 0) {
        DAT_00709468 = FUN_005e739b();
        bVar5 = DAT_00709468 == 0;
        if (DAT_00709468 < 0) {
          DAT_00709468 = 0;
          bVar5 = true;
        }
      }
      if (bVar5) {
        return 0;
      }
      goto LAB_005e804a;
    }
    iVar4 = *(short *)(&DAT_006de618 + iVar2 * 2) * 2;
    if ((((*(short *)(&DAT_006dea70 + iVar4) == 0) ||
         (iVar2 = *(short *)(&DAT_006dea70 + iVar4) + iVar3, iVar2 < 0)) || (0x127 < iVar2)) ||
       (*(short *)(&DAT_006ded00 + iVar2 * 2) != iVar3)) {
      sVar1 = *(short *)(&DAT_006de820 + iVar4);
    }
    else {
      sVar1 = *(short *)(&DAT_006deab0 + iVar2 * 2);
    }
    if ((short *)0x709455 < DAT_00709464) {
LAB_005e84cf:
      FUN_005e556b(DAT_00709478,"yacc stack overflow");
      return 1;
    }
    DAT_00709464 = DAT_00709464 + 1;
    *DAT_00709464 = sVar1;
    uVar6 = DAT_0070945c;
  }
  iVar4 = (int)sVar1;
  DAT_00709460 = DAT_00709460 + 1;
  *DAT_00709460 = uVar6;
  goto LAB_005e804a;
LAB_005e84c3:
  if (DAT_00709468 == 0) {
    return 1;
  }
  goto LAB_005e8045;
}

