/* spd-match: far pct=7.85 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

int __cdecl FUN_006565c0();
int __cdecl FUN_00657cd0();
extern int DAT_00713d70;
extern int DAT_00713d72;
extern int DAT_00713d74;
extern int DAT_00713d75;
extern int DAT_00713d76;
extern int DAT_00713d7a;
extern int DAT_00713d7c;
extern int DAT_00713d90;
extern int DAT_00713d9a;
extern int DAT_00713d9e;
extern int DAT_00713da1;
extern int DAT_00713dad;
extern int DAT_00713dae;
extern int DAT_00713db0;
extern int DAT_00713db6;
extern int DAT_00713db7;
extern int DAT_00713db8;
extern int DAT_00713dbc;
extern int DAT_00713dbe;
extern int DAT_00713dc0;
extern int DAT_00713e44;
extern int DAT_00713ee4;
extern int DAT_00713ee8;
extern int DAT_00713eeb;
extern int DAT_00713ff3;
extern int DAT_00713ff4;
extern int DAT_00713ff5;
extern int _DAT_006aaa0c;
extern int _DAT_006cc9f8;
extern int _DAT_006cca94;
extern int _DAT_006ccb4c;
extern int _DAT_00713ca0;
extern int _DAT_00713da4;
extern int _DAT_00713ff8;

undefined4 FUN_00651c60(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  FUN_006565c0(DAT_00713db0);
  if (DAT_00713ee4 != '\0') {
    puVar5 = &DAT_00713e44;
    puVar6 = &DAT_00713d90;
    for (iVar3 = 0x28; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    return 0;
  }
  DAT_00713ff3 = '\0';
  DAT_00713ff4 = 0;
  DAT_00713ff5 = 0;
  if (DAT_00713db7 < DAT_00713d74) {
    DAT_00713db7 = DAT_00713d74;
  }
  if (DAT_00713d75 < DAT_00713db7) {
    DAT_00713db7 = DAT_00713d75;
  }
  if (DAT_00713d9a < DAT_00713d70) {
    DAT_00713d9a = DAT_00713d70;
  }
  if (DAT_00713d72 < DAT_00713d9a) {
    DAT_00713d9a = DAT_00713d72;
  }
  if (DAT_00713d76 < DAT_00713d9e) {
    DAT_00713d9e = DAT_00713d76;
  }
  if (DAT_00713d7a < DAT_00713da1) {
    DAT_00713da1 = DAT_00713d7a;
  }
  if (0x20 < DAT_00713db6) {
    DAT_00713db6 = 0x20;
  }
  if ((DAT_00713dae != '\0') && (DAT_00713d7c == '\0')) {
    DAT_00713dae = '\0';
  }
  if (DAT_00713db7 == 4) {
    if (DAT_00713db8 != '\0') {
      DAT_00713db8 = '\0';
    }
  }
  else if (DAT_00713db7 == 2) {
    if (DAT_00713db8 != '\0') {
      DAT_00713db8 = '\0';
    }
  }
  else if ((DAT_00713db7 == 6) && (DAT_00713db8 == '\0')) {
    DAT_00713db7 = 5;
    DAT_00713db8 = '\x01';
  }
  DAT_00713ee8 = (ushort)((int)DAT_00713da1) + (ushort)DAT_00713d9e;
  if (0x100 < DAT_00713ee8) {
    DAT_00713da1 = ((int)DAT_00713da1) - (char)DAT_00713ee8;
    DAT_00713ee8 = 0x100;
  }
  do {
    iVar3 = 0;
    bVar4 = DAT_00713dbc;
    while( true ) {
      if ((int)(uint)bVar4 <= iVar3) {
        if (DAT_00713ff3 == '\0') {
          DAT_00713da1 = 0;
        }
        _DAT_00713ca0 = _DAT_006ccb4c;
        if (((_DAT_00713da4 != _DAT_006aaa0c) &&
            (_DAT_00713ca0 = _DAT_006cca94, _DAT_006cca94 <= _DAT_00713da4)) &&
           (_DAT_00713ca0 = _DAT_00713da4, _DAT_006cc9f8 < _DAT_00713da4)) {
          _DAT_00713ca0 = _DAT_006cc9f8;
        }
        _DAT_00713ff8 = ((int)_DAT_006cca94) / ((int)_DAT_00713ca0);
        if ((DAT_00713dad != '\0') && (uVar2 = FUN_00657cd0(), (uVar2 & 2) != 0)) {
          DAT_00713eeb = ((int)DAT_00713eeb) | 2;
          return 0;
        }
        DAT_00713eeb = ((int)DAT_00713eeb) & 0xfd;
        DAT_00713dad = 0;
        return 0;
      }
      if ((DAT_00713da1 == 0) && (((&DAT_00713dbe)[iVar3 * 2] & 0x10) != 0)) {
        *(undefined2 *)(((unsigned char *)&DAT_00713dbe) + iVar3 * 2) = 0;
        bVar4 = DAT_00713dbc;
      }
      uVar1 = *(ushort *)(((unsigned char *)&DAT_00713dbe) + iVar3 * 2);
      if ((uVar1 & 0x10) != 0) {
        DAT_00713ff3 = '\x01';
        if ((uVar1 & 1) == 0) {
          if ((uVar1 & 2) != 0) {
            DAT_00713ff4 = 1;
          }
        }
        else {
          DAT_00713ff5 = 1;
        }
      }
      if (uVar1 == 0) break;
      iVar3 = iVar3 + 1;
    }
    DAT_00713dbc = bVar4 - 1;
    if (iVar3 < (int)(uint)DAT_00713dbc) {
      do {
        *(undefined2 *)(((unsigned char *)&DAT_00713dbe) + iVar3 * 2) = *(undefined2 *)(((unsigned char *)&DAT_00713dc0) + iVar3 * 2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)DAT_00713dbc);
    }
  } while( true );
}
