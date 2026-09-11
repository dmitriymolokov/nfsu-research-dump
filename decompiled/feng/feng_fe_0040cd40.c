/* spd-match: far pct=5.15 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_0040d090();
int __cdecl FUN_0040d370();
int __cdecl FUN_0040d6e0();
int __cdecl FUN_00567450();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_007024b8;
extern int DAT_00702a38;
extern int DAT_00702a3c;
extern int DAT_00702a40;
extern int DAT_0071ab9c;
extern int DAT_0071aba0;
extern unsigned char *DAT_0073636c;
extern int DAT_00736460;
extern unsigned char *DAT_00740500;
extern int _DAT_006cc7bc;
extern int _DAT_006cc970;
extern int _DAT_006ccb7c;
extern int _DAT_006cccf8;
extern int _DAT_006ccd00;
extern unsigned char *_DAT_00702a48;
extern int _DAT_00702a4c;
extern int _DAT_0073641c;
extern int _DAT_0073654c;

void FUN_0040cd40(void)

{
  float fVar1;
  uint uVar2;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  float fStack_54;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((float)(unsigned int)(_DAT_006ccd00) < ABS(_DAT_0073641c - (float)(unsigned int)(_DAT_0073654c))) {
    if ((float)(unsigned int)(_DAT_0073654c) <= _DAT_0073641c) {
      _DAT_0073641c = _DAT_0073641c - _DAT_00702a4c;
    }
    else {
      _DAT_0073641c = _DAT_00702a48 + _DAT_0073641c;
    }
  }
  local_20 = *(undefined4 *)(DAT_00740500 + 0x1e0);
  fStack_54 = (float)(unsigned int)(DAT_00740500);
  local_1c = *(undefined4 *)(DAT_00740500 + 0x1e4);
  local_18 = *(undefined4 *)(DAT_00740500 + 0x1e8);
  puStack_58 = &local_20;
  puStack_5c = &local_20;
  local_14 = 0;
  FUN_0040cd40();
  if (_DAT_006ccb7c < (float)(unsigned int)(puStack_58)) {
    FUN_00567450();
  }
  fStack_54 = DAT_00702a38;
  fVar1 = DAT_006cc7a4;
  if (((float)(unsigned int)(puStack_58) < DAT_00702a38 == ((float)(unsigned int)(puStack_58) == DAT_00702a38)) &&
     (fVar1 = _DAT_006cc7bc, (float)(unsigned int)(puStack_58) < DAT_00702a3c)) {
    fVar1 = ((float)(unsigned int)(puStack_58) - DAT_00702a38) / (DAT_00702a3c - DAT_00702a38);
  }
  puStack_58 = (undefined4 *)(unsigned int)(_DAT_0073641c * (float)(unsigned int)(_DAT_006cccf8) + fVar1);
  if (DAT_00702a40 < (float)(unsigned int)(puStack_58)) {
    puStack_58 = (undefined4 *)DAT_00702a40;
  }
  if (_DAT_006cc970 <= (float)(unsigned int)(puStack_58)) {
    FUN_0040d370(DAT_00736460,4,&DAT_007024b8);
    uStack_3c = 0x3e800000;
    uStack_38 = 0x3e800000;
    uStack_34 = 0x3e800000;
    uStack_30 = 0x3e800000;
    FUN_0040d090(DAT_0071ab9c,4,&uStack_3c);
    FUN_0040d090(DAT_0071aba0,4,&uStack_3c);
    uVar2 = FUN_00674898();
    (**(code **)(*DAT_0073636c + 0xe4))
              (DAT_0073636c,0xc1,((uVar2 << 8 | uVar2) << 8 | uVar2) << 8 | uVar2);
    FUN_0040d6e0(1,&DAT_0071ab9c,&puStack_5c,1,0xe,0xf);
  }
  return;
}
