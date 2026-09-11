/* Decompiled from Speed.exe @ 0064a28a */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_0064a28a(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_10;
  
  iVar1 = param_7 >> 1;
  if (DAT_00713444 == 0) {
    local_10 = 0;
  }
  else if ((DAT_00712c38 & 0xc0000000) == 0) {
    local_10 = 0;
    FUN_0064a5ee(2);
  }
  else {
    if ((DAT_00712c38 & 0x80000000) == 0) {
      local_10 = DAT_00712c38 >> 0x18;
      FUN_0064a5ee(8);
    }
    else {
      local_10 = 0x3ff;
      FUN_0064a5ee(1);
    }
    iVar3 = FUN_0064a662();
    iVar2 = FUN_0064a662(iVar3);
    param_1 = param_1 + iVar2 * param_7 + iVar3;
    param_2 = param_2 + (iVar2 >> 1) * iVar1 + (iVar3 >> 1);
    param_3 = param_3 + (iVar2 >> 1) * iVar1 + (iVar3 >> 1);
  }
  if ((local_10 & 1) == 0) {
    iVar3 = FUN_0064b110();
    if (iVar3 == 1) {
      FUN_0064a694(&DAT_00712038,0x10);
    }
    else {
      FUN_0064abc0(&DAT_00712038,0x10);
    }
  }
  else {
    iVar3 = FUN_0064a662();
    FUN_0064a71f(param_1,param_7,&DAT_00712038,iVar3 * 2 + -0x80);
  }
  if ((local_10 & 2) == 0) {
    iVar3 = FUN_0064b110();
    if (iVar3 == 1) {
      FUN_0064a694(&DAT_00712058,0x10);
    }
    else {
      FUN_0064abc0(&DAT_00712058,0x10);
    }
  }
  else {
    iVar3 = FUN_0064a662();
    FUN_0064a71f(param_1 + 8,param_7,&DAT_00712058,iVar3 * 2 + -0x80);
  }
  if ((local_10 & 4) == 0) {
    iVar3 = FUN_0064b110();
    if (iVar3 == 1) {
      FUN_0064a694(&DAT_00712238,0x10);
    }
    else {
      FUN_0064abc0(&DAT_00712238,0x10);
    }
  }
  else {
    iVar3 = FUN_0064a662();
    FUN_0064a71f(param_1 + param_7 * 8,param_7,&DAT_00712238,iVar3 * 2 + -0x80);
  }
  if ((local_10 & 8) == 0) {
    iVar3 = FUN_0064b110();
    if (iVar3 == 1) {
      FUN_0064a694(&DAT_00712258,0x10);
    }
    else {
      FUN_0064abc0(&DAT_00712258,0x10);
    }
  }
  else {
    iVar3 = FUN_0064a662();
    FUN_0064a71f(param_1 + 8 + param_7 * 8,param_7,&DAT_00712258,iVar3 * 2 + -0x80);
  }
  if ((local_10 & 0x10) == 0) {
    iVar3 = FUN_0064b110();
    if (iVar3 == 1) {
      FUN_0064a694(&DAT_00712538,8);
    }
    else {
      FUN_0064abc0(&DAT_00712538,8);
    }
  }
  else {
    iVar3 = FUN_0064a662();
    FUN_0064a7f0(param_2,iVar1,&DAT_00712538,iVar3 * 2 + -0x80);
  }
  if ((local_10 & 0x20) == 0) {
    iVar3 = FUN_0064b110();
    if (iVar3 == 1) {
      FUN_0064a694(&DAT_00712638,8);
    }
    else {
      FUN_0064abc0(&DAT_00712638,8);
    }
  }
  else {
    iVar3 = FUN_0064a662();
    FUN_0064a7f0(param_3,iVar1,&DAT_00712638,iVar3 * 2 + -0x80);
  }
  FUN_0064a8c1(&DAT_00712038,param_4,param_7);
  FUN_0064aaa5(&DAT_00712538,param_5,iVar1);
  FUN_0064aaa5(&DAT_00712638,param_6,iVar1);
  return;
}

