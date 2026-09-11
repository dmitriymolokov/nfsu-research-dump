/* Decompiled from Speed.exe @ 005c765d */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005c765d(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar4 = 0;
  _DAT_00708890 = 0;
  DAT_0070888c = 0;
  DAT_00708884 = (short *)&DAT_00708490;
  DAT_00708880 = (undefined4 *)&DAT_00707cc0;
  _DAT_00708490 = 0;
LAB_005c768d:
  DAT_00708888 = -1;
LAB_005c7695:
  iVar2 = (int)(short)(&DAT_006db100)[iVar4];
  if (iVar2 == 0) {
    if ((DAT_00708888 < 0) && (DAT_00708888 = FUN_005c56ef(), DAT_00708888 < 0)) {
      DAT_00708888 = 0;
    }
    if (((((short)(&DAT_006db1c0)[iVar4] != 0) &&
         (iVar2 = (short)(&DAT_006db1c0)[iVar4] + DAT_00708888, -1 < iVar2)) && (iVar2 < 0x172)) &&
       (*(short *)(&DAT_006db608 + iVar2 * 2) == DAT_00708888)) {
      if (&DAT_00708876 <= DAT_00708884) goto LAB_005c7a9a;
      iVar4 = (int)*(short *)(&DAT_006db320 + iVar2 * 2);
      DAT_00708884 = DAT_00708884 + 1;
      *DAT_00708884 = *(short *)(&DAT_006db320 + iVar2 * 2);
      DAT_00708880 = DAT_00708880 + 1;
      *DAT_00708880 = DAT_00708878;
      DAT_00708888 = -1;
      if (0 < DAT_0070888c) {
        DAT_0070888c = DAT_0070888c + -1;
      }
      goto LAB_005c7695;
    }
    if ((((short)(&DAT_006db260)[iVar4] != 0) &&
        (iVar2 = (short)(&DAT_006db260)[iVar4] + DAT_00708888, -1 < iVar2)) &&
       ((iVar2 < 0x172 && (*(short *)(&DAT_006db608 + iVar2 * 2) == DAT_00708888)))) {
      iVar2 = (int)*(short *)(&DAT_006db320 + iVar2 * 2);
      goto LAB_005c777c;
    }
    if (DAT_0070888c == 0) {
      FUN_005c5a21(DAT_00708898,"syntax error");
      _DAT_00708890 = _DAT_00708890 + 1;
    }
    if (2 < DAT_0070888c) goto LAB_005c7a91;
    DAT_0070888c = 3;
    while ((((short)(&DAT_006db1c0)[*DAT_00708884] == 0 ||
            (iVar4 = (short)(&DAT_006db1c0)[*DAT_00708884] + 0x100, iVar4 < 0)) ||
           ((0x171 < iVar4 || (*(short *)(&DAT_006db608 + iVar4 * 2) != 0x100))))) {
      if (DAT_00708884 < (short *)0x708491) {
        DAT_0070888c = 3;
        return 1;
      }
      DAT_00708884 = DAT_00708884 + -1;
      DAT_00708880 = DAT_00708880 + -1;
    }
    if ((short *)0x708875 < DAT_00708884) goto LAB_005c7a9a;
    sVar1 = *(short *)(&DAT_006db320 + iVar4 * 2);
    DAT_00708884 = DAT_00708884 + 1;
    *DAT_00708884 = sVar1;
    uVar6 = DAT_00708878;
  }
  else {
LAB_005c777c:
    iVar4 = (int)*(short *)(&DAT_006db0a0 + iVar2 * 2);
    DAT_0070887c = DAT_00708880[1 - iVar4];
    switch(iVar2) {
    case 1:
      uVar7 = 1;
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
      uVar7 = 0;
      uVar6 = 4;
      break;
    case 6:
      uVar7 = 0;
      uVar6 = 5;
      break;
    case 7:
      uVar7 = 1;
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
      uVar7 = 0;
      uVar6 = 10;
      break;
    case 0xc:
      uVar7 = 0;
      uVar6 = 0xb;
      break;
    case 0xd:
      uVar7 = 0;
      uVar6 = 0xc;
      break;
    case 0xe:
      uVar7 = 0;
      uVar6 = 0xd;
      break;
    case 0xf:
      uVar7 = 0;
      uVar6 = 0xe;
      break;
    case 0x10:
      uVar7 = 1;
      uVar6 = 0xf;
      break;
    case 0x11:
      uVar7 = 1;
      uVar6 = 0x10;
      break;
    case 0x12:
      uVar7 = 1;
      uVar6 = 0x11;
      break;
    case 0x13:
      uVar7 = 1;
      uVar6 = 0x12;
      break;
    case 0x14:
      uVar7 = 1;
      uVar6 = 0x13;
      break;
    case 0x15:
      uVar7 = 1;
      uVar6 = 0x14;
      break;
    case 0x16:
      uVar7 = 1;
      uVar6 = 0x15;
      break;
    case 0x17:
      uVar7 = 1;
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
      uVar7 = 2;
      uVar6 = 0x19;
      break;
    case 0x1b:
      uVar7 = 1;
      uVar6 = 0x1a;
      break;
    case 0x1c:
      uVar7 = 2;
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
      uVar7 = 2;
      uVar6 = 0x1f;
      break;
    case 0x21:
      uVar7 = 2;
      uVar6 = 0x20;
      break;
    case 0x22:
      uVar7 = 2;
      uVar6 = 0x21;
      break;
    case 0x23:
      uVar7 = 1;
      uVar6 = 0x22;
      break;
    case 0x24:
      uVar7 = 2;
      uVar6 = 0x23;
      break;
    case 0x25:
      uVar7 = 2;
      uVar6 = 0x24;
      break;
    case 0x26:
      uVar7 = 1;
      uVar6 = 0x25;
      break;
    case 0x27:
      uVar7 = 2;
      uVar6 = 0x26;
      break;
    case 0x28:
      uVar7 = 1;
      uVar6 = 0x27;
      break;
    case 0x29:
      uVar7 = 2;
      uVar6 = 0x28;
      break;
    case 0x2a:
      uVar7 = 1;
      uVar6 = 0x29;
      break;
    case 0x2b:
      uVar7 = 3;
      uVar6 = 0x2a;
      break;
    case 0x2c:
      uVar7 = 1;
      uVar6 = 0x2b;
      break;
    case 0x2d:
      uVar7 = 0;
      uVar6 = 0x2c;
      break;
    case 0x2e:
      uVar7 = 0;
      uVar6 = 0x2d;
      break;
    case 0x2f:
      uVar7 = 0;
      uVar6 = 0x2e;
      break;
    default:
      goto switchD_005c77a6_default;
    }
    FUN_005c7212(uVar6,uVar7);
switchD_005c77a6_default:
    DAT_00708884 = DAT_00708884 + -iVar4;
    iVar3 = (int)*DAT_00708884;
    DAT_00708880 = DAT_00708880 + -iVar4;
    if ((iVar3 == 0) && (*(short *)(&DAT_006db040 + iVar2 * 2) == 0)) {
      DAT_00708884 = DAT_00708884 + 1;
      iVar4 = 0xf;
      *DAT_00708884 = 0xf;
      DAT_00708880 = DAT_00708880 + 1;
      *DAT_00708880 = DAT_0070887c;
      bVar5 = DAT_00708888 == 0;
      if (DAT_00708888 < 0) {
        DAT_00708888 = FUN_005c56ef();
        bVar5 = DAT_00708888 == 0;
        if (DAT_00708888 < 0) {
          DAT_00708888 = 0;
          bVar5 = true;
        }
      }
      if (bVar5) {
        return 0;
      }
      goto LAB_005c7695;
    }
    iVar4 = *(short *)(&DAT_006db040 + iVar2 * 2) * 2;
    if ((((*(short *)(&DAT_006db300 + iVar4) == 0) ||
         (iVar2 = *(short *)(&DAT_006db300 + iVar4) + iVar3, iVar2 < 0)) || (0x171 < iVar2)) ||
       (*(short *)(&DAT_006db608 + iVar2 * 2) != iVar3)) {
      sVar1 = *(short *)(&DAT_006db1a0 + iVar4);
    }
    else {
      sVar1 = *(short *)(&DAT_006db320 + iVar2 * 2);
    }
    if ((short *)0x708875 < DAT_00708884) {
LAB_005c7a9a:
      FUN_005c5a21(DAT_00708898,"yacc stack overflow");
      return 1;
    }
    DAT_00708884 = DAT_00708884 + 1;
    *DAT_00708884 = sVar1;
    uVar6 = DAT_0070887c;
  }
  iVar4 = (int)sVar1;
  DAT_00708880 = DAT_00708880 + 1;
  *DAT_00708880 = uVar6;
  goto LAB_005c7695;
LAB_005c7a91:
  if (DAT_00708888 == 0) {
    return 1;
  }
  goto LAB_005c768d;
}

