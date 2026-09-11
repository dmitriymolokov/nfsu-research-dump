/* Decompiled from Speed.exe @ 005c3e7d */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005c3e7d(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar4 = 0;
  _DAT_00707cb0 = 0;
  DAT_00707cac = 0;
  DAT_00707ca4 = (short *)&DAT_007078b0;
  DAT_00707ca0 = (undefined4 *)&DAT_007070e0;
  _DAT_007078b0 = 0;
LAB_005c3eb7:
  DAT_00707ca8 = -1;
LAB_005c3ebc:
  iVar2 = (int)(short)(&DAT_006d6ea0)[iVar4];
  if (iVar2 == 0) {
    if ((DAT_00707ca8 < 0) && (DAT_00707ca8 = FUN_005bfe5c(), DAT_00707ca8 < 0)) {
      DAT_00707ca8 = 0;
    }
    if (((((short)(&DAT_006d7348)[iVar4] != 0) &&
         (iVar2 = (short)(&DAT_006d7348)[iVar4] + DAT_00707ca8, -1 < iVar2)) && (iVar2 < 0xd22)) &&
       (*(short *)(&DAT_006d95f8 + iVar2 * 2) == DAT_00707ca8)) {
      if (&DAT_00707c96 <= DAT_00707ca4) goto LAB_005c4c53;
      iVar4 = (int)*(short *)(&DAT_006d7bb0 + iVar2 * 2);
      DAT_00707ca4 = DAT_00707ca4 + 1;
      *DAT_00707ca4 = *(short *)(&DAT_006d7bb0 + iVar2 * 2);
      DAT_00707ca0 = DAT_00707ca0 + 1;
      *DAT_00707ca0 = DAT_00707c98;
      DAT_00707ca8 = -1;
      if (0 < DAT_00707cac) {
        DAT_00707cac = DAT_00707cac + -1;
      }
      goto LAB_005c3ebc;
    }
    if ((((short)(&DAT_006d7708)[iVar4] != 0) &&
        (iVar2 = (short)(&DAT_006d7708)[iVar4] + DAT_00707ca8, -1 < iVar2)) &&
       ((iVar2 < 0xd22 && (*(short *)(&DAT_006d95f8 + iVar2 * 2) == DAT_00707ca8)))) {
      iVar2 = (int)*(short *)(&DAT_006d7bb0 + iVar2 * 2);
      goto LAB_005c3fa0;
    }
    if (DAT_00707cac == 0) {
      FUN_005ba0ab(DAT_00707cb8,"syntax error");
      _DAT_00707cb0 = _DAT_00707cb0 + 1;
    }
    if (2 < DAT_00707cac) goto LAB_005c4c47;
    DAT_00707cac = 3;
    while ((((short)(&DAT_006d7348)[*DAT_00707ca4] == 0 ||
            (iVar4 = (short)(&DAT_006d7348)[*DAT_00707ca4] + 0x100, iVar4 < 0)) ||
           ((0xd21 < iVar4 || (*(short *)(&DAT_006d95f8 + iVar4 * 2) != 0x100))))) {
      if (DAT_00707ca4 < (short *)0x7078b1) {
        DAT_00707cac = 3;
        return 1;
      }
      DAT_00707ca4 = DAT_00707ca4 + -1;
      DAT_00707ca0 = DAT_00707ca0 + -1;
    }
    if ((short *)0x707c95 < DAT_00707ca4) goto LAB_005c4c53;
    sVar1 = *(short *)(&DAT_006d7bb0 + iVar4 * 2);
    DAT_00707ca4 = DAT_00707ca4 + 1;
    *DAT_00707ca4 = sVar1;
    uVar6 = DAT_00707c98;
  }
  else {
LAB_005c3fa0:
    iVar4 = (int)*(short *)(&DAT_006d6c58 + iVar2 * 2);
    DAT_00707c9c = DAT_00707ca0[1 - iVar4];
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
      uVar7 = 2;
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
      uVar7 = 0;
      uVar6 = 0xf;
      break;
    case 0x11:
      uVar7 = 0;
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
      uVar7 = 2;
      uVar6 = 0x14;
      break;
    case 0x16:
      uVar7 = 0;
      uVar6 = 0x15;
      break;
    case 0x17:
      uVar7 = 0;
      uVar6 = 0x16;
      break;
    case 0x18:
      uVar7 = 0;
      uVar6 = 0x17;
      break;
    case 0x19:
      uVar7 = 1;
      uVar6 = 0x18;
      break;
    case 0x1a:
      uVar7 = 2;
      uVar6 = 0x19;
      break;
    case 0x1b:
      uVar7 = 1;
      uVar6 = 0x1c;
      break;
    case 0x1c:
      uVar7 = 2;
      uVar6 = 0x1d;
      break;
    case 0x1d:
      uVar7 = 2;
      uVar6 = 0x1e;
      break;
    case 0x1e:
      uVar7 = 2;
      uVar6 = 0x1f;
      break;
    case 0x1f:
      uVar7 = 1;
      uVar6 = 0x20;
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
      uVar7 = 1;
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
      uVar7 = 1;
      uVar6 = 0x27;
      break;
    case 0x27:
      uVar7 = 2;
      uVar6 = 0x28;
      break;
    case 0x28:
      uVar7 = 1;
      uVar6 = 0x29;
      break;
    case 0x29:
      uVar7 = 2;
      uVar6 = 0x2a;
      break;
    case 0x2a:
      uVar7 = 0;
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
      uVar7 = 0;
      uVar6 = 0x30;
      break;
    case 0x30:
      uVar7 = 0;
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
      uVar7 = 2;
      uVar6 = 0x36;
      break;
    case 0x36:
      uVar7 = 0;
      uVar6 = 0x37;
      break;
    case 0x37:
      uVar7 = 3;
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
    case 0x3f:
      uVar7 = 0;
      uVar6 = 0x40;
      break;
    case 0x40:
      uVar7 = 0;
      uVar6 = 0x41;
      break;
    case 0x41:
      uVar7 = 0;
      uVar6 = 0x42;
      break;
    case 0x42:
      uVar7 = 0;
      uVar6 = 0x43;
      break;
    case 0x43:
      uVar7 = 0;
      uVar6 = 0x44;
      break;
    case 0x44:
      uVar7 = 0;
      uVar6 = 0x45;
      break;
    case 0x45:
      uVar7 = 0;
      uVar6 = 0x46;
      break;
    case 0x46:
      uVar7 = 0;
      uVar6 = 0x47;
      break;
    case 0x47:
      uVar7 = 2;
      uVar6 = 0x48;
      break;
    case 0x48:
      uVar7 = 3;
      uVar6 = 0x49;
      break;
    case 0x49:
      uVar7 = 3;
      uVar6 = 0x4a;
      break;
    case 0x4a:
      uVar7 = 4;
      uVar6 = 0x4b;
      break;
    case 0x4b:
      uVar7 = 1;
      uVar6 = 0x4c;
      break;
    case 0x4c:
      uVar7 = 2;
      uVar6 = 0x4d;
      break;
    case 0x4d:
      uVar7 = 0;
      uVar6 = 0x4e;
      break;
    case 0x4e:
      uVar7 = 1;
      uVar6 = 0x4f;
      break;
    case 0x4f:
      uVar7 = 2;
      uVar6 = 0x50;
      break;
    case 0x50:
      uVar7 = 0;
      uVar6 = 0x51;
      break;
    case 0x51:
      uVar7 = 1;
      uVar6 = 0x52;
      break;
    case 0x52:
      uVar7 = 1;
      uVar6 = 0x53;
      break;
    case 0x53:
      uVar7 = 1;
      uVar6 = 0x54;
      break;
    case 0x54:
      uVar7 = 2;
      uVar6 = 0x55;
      break;
    case 0x55:
      uVar7 = 0;
      uVar6 = 0x56;
      break;
    case 0x56:
      uVar7 = 1;
      uVar6 = 0x57;
      break;
    case 0x57:
      uVar7 = 1;
      uVar6 = 0x58;
      break;
    case 0x58:
      uVar7 = 2;
      uVar6 = 0x59;
      break;
    case 0x59:
      uVar7 = 2;
      uVar6 = 0x5a;
      break;
    case 0x5a:
      uVar7 = 3;
      uVar6 = 0x5b;
      break;
    case 0x5b:
      uVar7 = 0;
      uVar6 = 0x5c;
      break;
    case 0x5c:
      uVar7 = 1;
      uVar6 = 0x5d;
      break;
    case 0x5d:
      uVar7 = 0;
      uVar6 = 0x5e;
      break;
    case 0x5e:
      uVar7 = 1;
      uVar6 = 0x5f;
      break;
    case 0x5f:
      uVar7 = 2;
      uVar6 = 0x60;
      break;
    case 0x60:
      uVar7 = 0;
      uVar6 = 0x61;
      break;
    case 0x61:
      uVar7 = 1;
      uVar6 = 0x62;
      break;
    case 0x62:
      uVar7 = 1;
      uVar6 = 99;
      break;
    case 99:
      uVar7 = 1;
      uVar6 = 100;
      break;
    case 100:
      uVar7 = 0;
      uVar6 = 0x65;
      break;
    case 0x65:
      uVar7 = 1;
      uVar6 = 0x66;
      break;
    case 0x66:
      uVar7 = 2;
      uVar6 = 0x67;
      break;
    case 0x67:
      uVar7 = 2;
      uVar6 = 0x68;
      break;
    case 0x68:
      uVar7 = 1;
      uVar6 = 0x69;
      break;
    case 0x69:
      uVar7 = 2;
      uVar6 = 0x6a;
      break;
    case 0x6a:
      uVar7 = 4;
      uVar6 = 0x6b;
      break;
    case 0x6b:
      uVar7 = 1;
      uVar6 = 0x6c;
      break;
    case 0x6c:
      uVar7 = 1;
      uVar6 = 0x6d;
      break;
    case 0x6d:
      uVar7 = 2;
      uVar6 = 0x6e;
      break;
    case 0x6e:
      uVar7 = 1;
      uVar6 = 0x6f;
      break;
    case 0x6f:
      uVar7 = 3;
      uVar6 = 0x70;
      break;
    case 0x70:
      uVar7 = 4;
      uVar6 = 0x71;
      break;
    case 0x71:
      uVar7 = 2;
      uVar6 = 0x72;
      break;
    case 0x72:
      uVar7 = 2;
      uVar6 = 0x73;
      break;
    case 0x73:
      uVar7 = 3;
      uVar6 = 0x74;
      break;
    case 0x74:
      uVar7 = 0;
      uVar6 = 0x75;
      break;
    case 0x75:
      uVar7 = 0;
      uVar6 = 0x76;
      break;
    case 0x76:
      uVar7 = 1;
      uVar6 = 0x77;
      break;
    case 0x77:
      uVar7 = 2;
      uVar6 = 0x78;
      break;
    case 0x78:
      uVar7 = 2;
      uVar6 = 0x79;
      break;
    case 0x79:
      uVar7 = 1;
      uVar6 = 0x7a;
      break;
    case 0x7a:
      uVar7 = 2;
      uVar6 = 0x7b;
      break;
    case 0x7b:
      uVar7 = 1;
      uVar6 = 0x7e;
      break;
    case 0x7c:
      uVar7 = 2;
      uVar6 = 0x7f;
      break;
    case 0x7d:
      uVar7 = 0;
      uVar6 = 0x80;
      break;
    case 0x7e:
      uVar7 = 0;
      uVar6 = 0x81;
      break;
    case 0x7f:
      uVar7 = 0;
      uVar6 = 0x82;
      break;
    case 0x80:
      uVar7 = 0;
      uVar6 = 0x83;
      break;
    case 0x81:
      uVar7 = 1;
      uVar6 = 0x84;
      break;
    case 0x82:
      uVar7 = 3;
      uVar6 = 0x85;
      break;
    case 0x83:
      uVar7 = 2;
      uVar6 = 0x86;
      break;
    case 0x84:
      uVar7 = 3;
      uVar6 = 0x87;
      break;
    case 0x85:
      uVar7 = 0;
      uVar6 = 0x88;
      break;
    case 0x86:
      uVar7 = 0;
      uVar6 = 0x89;
      break;
    case 0x87:
      uVar7 = 1;
      uVar6 = 0x8a;
      break;
    case 0x88:
      uVar7 = 2;
      uVar6 = 0x8b;
      break;
    case 0x89:
      uVar7 = 3;
      uVar6 = 0x8c;
      break;
    case 0x8a:
      uVar7 = 2;
      uVar6 = 0x8d;
      break;
    case 0x8b:
      uVar7 = 3;
      uVar6 = 0x8e;
      break;
    case 0x8c:
      uVar7 = 0;
      uVar6 = 0x8f;
      break;
    case 0x8d:
      uVar7 = 0;
      uVar6 = 0x90;
      break;
    case 0x8e:
      uVar7 = 1;
      uVar6 = 0x91;
      break;
    case 0x8f:
      uVar7 = 2;
      uVar6 = 0x92;
      break;
    case 0x90:
      uVar7 = 5;
      uVar6 = 0x93;
      break;
    case 0x91:
      uVar7 = 0;
      uVar6 = 0x94;
      break;
    case 0x92:
      uVar7 = 1;
      uVar6 = 0x95;
      break;
    case 0x93:
      uVar7 = 0;
      uVar6 = 0x96;
      break;
    case 0x94:
      uVar7 = 0;
      uVar6 = 0x97;
      break;
    case 0x95:
      uVar7 = 2;
      uVar6 = 0x98;
      break;
    case 0x96:
      uVar7 = 3;
      uVar6 = 0x99;
      break;
    case 0x97:
      uVar7 = 0;
      uVar6 = 0x9a;
      break;
    case 0x98:
      uVar7 = 0;
      uVar6 = 0x9b;
      break;
    case 0x99:
      uVar7 = 1;
      uVar6 = 0x9c;
      break;
    case 0x9a:
      uVar7 = 2;
      uVar6 = 0x9d;
      break;
    case 0x9b:
      uVar7 = 1;
      uVar6 = 0x9e;
      break;
    case 0x9c:
      uVar7 = 1;
      uVar6 = 0x9f;
      break;
    case 0x9d:
      uVar7 = 1;
      uVar6 = 0xa0;
      break;
    case 0x9e:
      uVar7 = 1;
      uVar6 = 0xa1;
      break;
    case 0x9f:
      uVar7 = 0;
      uVar6 = 0xa2;
      break;
    case 0xa0:
      uVar7 = 1;
      uVar6 = 0xa3;
      break;
    case 0xa1:
      uVar7 = 0;
      uVar6 = 0xa4;
      break;
    case 0xa2:
      uVar7 = 1;
      uVar6 = 0xa5;
      break;
    case 0xa3:
      uVar7 = 2;
      uVar6 = 0xa6;
      break;
    case 0xa4:
      uVar7 = 1;
      uVar6 = 0xa7;
      break;
    case 0xa5:
      uVar7 = 1;
      uVar6 = 0xa8;
      break;
    case 0xa6:
      uVar7 = 2;
      uVar6 = 0xa9;
      break;
    case 0xa7:
      uVar7 = 5;
      uVar6 = 0xaa;
      break;
    case 0xa8:
      uVar7 = 1;
      uVar6 = 0xab;
      break;
    case 0xa9:
      uVar7 = 2;
      uVar6 = 0xac;
      break;
    case 0xaa:
      uVar7 = 5;
      uVar6 = 0xad;
      break;
    case 0xab:
      uVar7 = 2;
      uVar6 = 0xae;
      break;
    case 0xac:
      uVar7 = 3;
      uVar6 = 0xaf;
      break;
    case 0xad:
      uVar7 = 0;
      uVar6 = 0xb0;
      break;
    case 0xae:
      uVar7 = 0;
      uVar6 = 0xb1;
      break;
    case 0xaf:
      uVar7 = 1;
      uVar6 = 0xb2;
      break;
    case 0xb0:
      uVar7 = 1;
      uVar6 = 0xb3;
      break;
    case 0xb1:
      uVar7 = 0;
      uVar6 = 0xb4;
      break;
    case 0xb2:
      uVar7 = 1;
      uVar6 = 0xb5;
      break;
    case 0xb3:
      uVar7 = 0;
      uVar6 = 0xb6;
      break;
    case 0xb4:
      uVar7 = 1;
      uVar6 = 0xb7;
      break;
    case 0xb5:
      uVar7 = 1;
      uVar6 = 0xb8;
      break;
    case 0xb6:
      uVar7 = 2;
      uVar6 = 0xb9;
      break;
    case 0xb7:
      uVar7 = 1;
      uVar6 = 0xba;
      break;
    case 0xb8:
      uVar7 = 1;
      uVar6 = 0xbb;
      break;
    case 0xb9:
      uVar7 = 1;
      uVar6 = 0xbc;
      break;
    case 0xba:
      uVar7 = 1;
      uVar6 = 0xbd;
      break;
    case 0xbb:
      uVar7 = 1;
      uVar6 = 0xbe;
      break;
    case 0xbc:
      uVar7 = 0;
      uVar6 = 0xbf;
      break;
    case 0xbd:
      uVar7 = 0;
      uVar6 = 0xc0;
      break;
    case 0xbe:
      uVar7 = 1;
      uVar6 = 0xc1;
      break;
    case 0xbf:
      uVar7 = 1;
      uVar6 = 0xc2;
      break;
    case 0xc0:
      uVar7 = 1;
      uVar6 = 0xc3;
      break;
    case 0xc1:
      uVar7 = 1;
      uVar6 = 0xc4;
      break;
    case 0xc2:
      uVar7 = 1;
      uVar6 = 0xc5;
      break;
    case 0xc3:
      uVar7 = 2;
      uVar6 = 0xc6;
      break;
    case 0xc4:
      uVar7 = 2;
      uVar6 = 199;
      break;
    case 0xc5:
      uVar7 = 2;
      uVar6 = 200;
      break;
    case 0xc6:
      uVar7 = 1;
      uVar6 = 0xc9;
      break;
    case 199:
      uVar7 = 1;
      uVar6 = 0xca;
      break;
    case 200:
      uVar7 = 2;
      uVar6 = 0xcb;
      break;
    case 0xc9:
      uVar7 = 1;
      uVar6 = 0xcc;
      break;
    case 0xca:
      uVar7 = 1;
      uVar6 = 0xcd;
      break;
    case 0xcb:
      uVar7 = 3;
      uVar6 = 0xce;
      break;
    case 0xcc:
      uVar7 = 1;
      uVar6 = 0xcf;
      break;
    case 0xcd:
      uVar7 = 3;
      uVar6 = 0xd0;
      break;
    case 0xce:
      uVar7 = 1;
      uVar6 = 0xd1;
      break;
    case 0xcf:
      uVar7 = 1;
      uVar6 = 0xd2;
      break;
    case 0xd0:
      uVar7 = 1;
      uVar6 = 0xd3;
      break;
    case 0xd1:
      uVar7 = 2;
      uVar6 = 0xd4;
      break;
    case 0xd2:
      uVar7 = 2;
      uVar6 = 0xd5;
      break;
    case 0xd3:
      uVar7 = 1;
      uVar6 = 0xd6;
      break;
    case 0xd4:
      uVar7 = 1;
      uVar6 = 0xd7;
      break;
    case 0xd5:
      uVar7 = 1;
      uVar6 = 0xd8;
      break;
    case 0xd6:
      uVar7 = 1;
      uVar6 = 0xd9;
      break;
    case 0xd7:
      uVar7 = 1;
      uVar6 = 0xda;
      break;
    case 0xd8:
      uVar7 = 1;
      uVar6 = 0xdb;
      break;
    case 0xd9:
      uVar7 = 1;
      uVar6 = 0xdc;
      break;
    case 0xda:
      uVar7 = 1;
      uVar6 = 0xdd;
      break;
    case 0xdb:
      uVar7 = 1;
      uVar6 = 0xde;
      break;
    case 0xdc:
      uVar7 = 2;
      uVar6 = 0xdf;
      break;
    case 0xdd:
      uVar7 = 1;
      uVar6 = 0xe0;
      break;
    case 0xde:
      uVar7 = 2;
      uVar6 = 0xe1;
      break;
    case 0xdf:
      uVar7 = 2;
      uVar6 = 0xe2;
      break;
    case 0xe0:
      uVar7 = 2;
      uVar6 = 0xe3;
      break;
    case 0xe1:
      uVar7 = 1;
      uVar6 = 0xe4;
      break;
    case 0xe2:
      uVar7 = 2;
      uVar6 = 0xe5;
      break;
    case 0xe3:
      uVar7 = 2;
      uVar6 = 0xe6;
      break;
    case 0xe4:
      uVar7 = 1;
      uVar6 = 0xe7;
      break;
    case 0xe5:
      uVar7 = 2;
      uVar6 = 0xe8;
      break;
    case 0xe6:
      uVar7 = 2;
      uVar6 = 0xe9;
      break;
    case 0xe7:
      uVar7 = 2;
      uVar6 = 0xea;
      break;
    case 0xe8:
      uVar7 = 2;
      uVar6 = 0xeb;
      break;
    case 0xe9:
      uVar7 = 1;
      uVar6 = 0xec;
      break;
    case 0xea:
      uVar7 = 2;
      uVar6 = 0xed;
      break;
    case 0xeb:
      uVar7 = 2;
      uVar6 = 0xee;
      break;
    case 0xec:
      uVar7 = 1;
      uVar6 = 0xef;
      break;
    case 0xed:
      uVar7 = 2;
      uVar6 = 0xf0;
      break;
    case 0xee:
      uVar7 = 1;
      uVar6 = 0xf1;
      break;
    case 0xef:
      uVar7 = 2;
      uVar6 = 0xf2;
      break;
    case 0xf0:
      uVar7 = 1;
      uVar6 = 0xfa;
      break;
    case 0xf1:
      uVar7 = 3;
      uVar6 = 0xfb;
      break;
    case 0xf2:
      uVar7 = 1;
      uVar6 = 0xf3;
      break;
    case 0xf3:
      uVar7 = 2;
      uVar6 = 0xf4;
      break;
    case 0xf4:
      uVar7 = 2;
      uVar6 = 0xf5;
      break;
    case 0xf5:
      uVar7 = 2;
      uVar6 = 0xf6;
      break;
    case 0xf6:
      uVar7 = 2;
      uVar6 = 0xf7;
      break;
    case 0xf7:
      uVar7 = 2;
      uVar6 = 0xf8;
      break;
    case 0xf8:
      uVar7 = 2;
      uVar6 = 0xf9;
      break;
    case 0xf9:
      uVar7 = 1;
      uVar6 = 0xfc;
      break;
    case 0xfa:
      uVar7 = 2;
      uVar6 = 0xfd;
      break;
    case 0xfb:
      uVar7 = 0;
      uVar6 = 0xfe;
      break;
    case 0xfc:
      uVar7 = 1;
      uVar6 = 0xff;
      break;
    case 0xfd:
      uVar7 = 1;
      uVar6 = 0x100;
      break;
    case 0xfe:
      uVar7 = 1;
      uVar6 = 0x101;
      break;
    case 0xff:
      uVar7 = 1;
      uVar6 = 0x102;
      break;
    case 0x100:
      uVar7 = 1;
      uVar6 = 0x103;
      break;
    case 0x101:
      uVar7 = 2;
      uVar6 = 0x104;
      break;
    case 0x102:
      uVar7 = 1;
      uVar6 = 0x105;
      break;
    case 0x103:
      uVar7 = 1;
      uVar6 = 0x106;
      break;
    case 0x104:
      uVar7 = 2;
      uVar6 = 0x107;
      break;
    case 0x105:
      uVar7 = 1;
      uVar6 = 0x108;
      break;
    case 0x106:
      uVar7 = 1;
      uVar6 = 0x109;
      break;
    case 0x107:
      uVar7 = 1;
      uVar6 = 0x10a;
      break;
    case 0x108:
      uVar7 = 1;
      uVar6 = 0x10b;
      break;
    case 0x109:
      uVar7 = 1;
      uVar6 = 0x10c;
      break;
    case 0x10a:
      uVar6 = 0x10d;
      uVar7 = 2;
      break;
    case 0x10b:
      uVar6 = 0x10e;
      uVar7 = 1;
      break;
    case 0x10c:
      uVar6 = 0x10f;
      uVar7 = 0;
      break;
    case 0x10d:
      uVar6 = 0x110;
      uVar7 = 0;
      break;
    case 0x10e:
      uVar6 = 0x111;
      uVar7 = 0;
      break;
    case 0x10f:
      uVar6 = 0x112;
      uVar7 = 1;
      break;
    case 0x110:
      uVar6 = 0x113;
      uVar7 = 1;
      break;
    case 0x111:
      uVar6 = 0x114;
      uVar7 = 0;
      break;
    case 0x112:
      uVar6 = 0x115;
      uVar7 = 1;
      break;
    case 0x113:
      uVar6 = 0x116;
      uVar7 = 1;
      break;
    case 0x114:
      uVar6 = 0x117;
      uVar7 = 0;
      break;
    case 0x115:
      uVar6 = 0x118;
      uVar7 = 0;
      break;
    case 0x116:
      uVar6 = 0x119;
      uVar7 = 0;
      break;
    case 0x117:
      uVar6 = 0x11a;
      uVar7 = 0;
      break;
    case 0x118:
      uVar6 = 0x11b;
      uVar7 = 0;
      break;
    case 0x119:
      uVar6 = 0x11c;
      uVar7 = 0;
      break;
    case 0x11a:
      uVar6 = 0x11d;
      uVar7 = 0;
      break;
    case 0x11b:
      uVar6 = 0x11e;
      uVar7 = 0;
      break;
    case 0x11c:
      uVar6 = 0x11f;
      uVar7 = 0;
      break;
    case 0x11d:
      uVar6 = 0x120;
      uVar7 = 0;
      break;
    case 0x11e:
      uVar6 = 0x121;
      uVar7 = 0;
      break;
    case 0x11f:
      uVar6 = 0x122;
      uVar7 = 0;
      break;
    case 0x120:
      uVar6 = 0x123;
      uVar7 = 0;
      break;
    default:
      goto switchD_005c3fd5_default;
    }
    FUN_005c2a3c(uVar6,uVar7);
switchD_005c3fd5_default:
    DAT_00707ca4 = DAT_00707ca4 + -iVar4;
    iVar3 = (int)*DAT_00707ca4;
    DAT_00707ca0 = DAT_00707ca0 + -iVar4;
    iVar4 = (int)*(short *)(iVar2 * 2 + 0x6d6a10);
    if ((iVar3 == 0) && (iVar4 == 0)) {
      DAT_00707ca4 = DAT_00707ca4 + 1;
      iVar4 = 0x26;
      *DAT_00707ca4 = 0x26;
      DAT_00707ca0 = DAT_00707ca0 + 1;
      *DAT_00707ca0 = DAT_00707c9c;
      bVar5 = DAT_00707ca8 == 0;
      if (DAT_00707ca8 < 0) {
        DAT_00707ca8 = FUN_005bfe5c();
        bVar5 = DAT_00707ca8 == 0;
        if (DAT_00707ca8 < 0) {
          DAT_00707ca8 = 0;
          bVar5 = true;
        }
      }
      if (bVar5) {
        return 0;
      }
      goto LAB_005c3ebc;
    }
    iVar4 = iVar4 * 2;
    if ((((*(short *)(&DAT_006d7ac8 + iVar4) == 0) ||
         (iVar2 = *(short *)(&DAT_006d7ac8 + iVar4) + iVar3, iVar2 < 0)) || (0xd21 < iVar2)) ||
       (*(short *)(&DAT_006d95f8 + iVar2 * 2) != iVar3)) {
      sVar1 = *(short *)(&DAT_006d7260 + iVar4);
    }
    else {
      sVar1 = *(short *)(&DAT_006d7bb0 + iVar2 * 2);
    }
    if ((short *)0x707c95 < DAT_00707ca4) {
LAB_005c4c53:
      FUN_005ba0ab(DAT_00707cb8,"yacc stack overflow");
      return 1;
    }
    DAT_00707ca4 = DAT_00707ca4 + 1;
    *DAT_00707ca4 = sVar1;
    uVar6 = DAT_00707c9c;
  }
  iVar4 = (int)sVar1;
  DAT_00707ca0 = DAT_00707ca0 + 1;
  *DAT_00707ca0 = uVar6;
  goto LAB_005c3ebc;
LAB_005c4c47:
  if (DAT_00707ca8 == 0) {
    return 1;
  }
  goto LAB_005c3eb7;
}

