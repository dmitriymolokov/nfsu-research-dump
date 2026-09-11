/* Decompiled from Speed.exe @ 00448650 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_00448650(void)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_4;
  
  iVar4 = FUN_004482f0("GLOBAL\\GLOBALB.LZC",1,9,0,0);
  FUN_00448110();
  pcVar5 = (char *)(iVar4 + 0x18);
  iVar4 = 0x27;
  iVar7 = (int)"GLOBAL\\GLOBALB.BUN" - (int)pcVar5;
  do {
    cVar1 = pcVar5[iVar7];
    iVar4 = iVar4 + -1;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
  } while (iVar4 != 0);
  FUN_004482f0(PTR_s_CARS_EXHAUST_GEOMETRY_BIN_00700794,1,0,0,0);
  FUN_00448110();
  FUN_004482f0(PTR_s_CARS_BRAKES_GEOMETRY_BIN_00700798,1,0,0,0);
  FUN_00448110();
  FUN_004482f0(PTR_s_CARS_BRAKES_TEXTURES_BIN_0070079c,1,0,0,0);
  FUN_00448110();
  FUN_004482f0(PTR_s_CARS_PLATES_GEOMETRY_BIN_007007a0,1,0,0,0);
  FUN_00448110();
  FUN_004482f0(PTR_s_CARS_PLATES_TEXTURES_BIN_007007a4,1,0,0,0);
  FUN_00448110();
  while (DAT_007360e8 != 0) {
    FUN_004483c0();
  }
  FUN_0053eed0(&DAT_00740420,PTR_s_GLOBAL_DYNTEX_BIN_007007b0,0,0,0);
  puVar3 = PTR_s_GLOBAL_DYNTEX_BIN_007007b0;
  iVar4 = FUN_0053ed70(&DAT_00740420,PTR_s_GLOBAL_DYNTEX_BIN_007007b0);
  while (iVar4 != 0) {
    FUN_004483c0();
    iVar4 = FUN_0053ed70(&DAT_00740420,puVar3);
  }
  FUN_0059fa20();
  iVar7 = FUN_005461c0(0xab0e817d,0,0);
  iVar4 = DAT_0073578c;
  if (iVar7 == 0) {
    local_4 = 0xab0e817d;
    FUN_0053e9e0(&DAT_00740420,&local_4,1,0,0,0);
    iVar4 = DAT_0073578c;
  }
  while (DAT_0073578c = iVar4, DAT_007360e8 != 0) {
    FUN_004483c0();
    iVar4 = DAT_0073578c;
  }
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    iVar7 = iVar2 + 0xdc;
    if ((iVar7 == 0) || (iVar7 = FUN_004fd1e0(iVar7), iVar7 == 0)) {
      FUN_004eede0(iVar2,"PC_Loading.fng",0x10,0);
      iVar4 = DAT_0073578c;
    }
    if (((iVar4 != 0) && (iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 != 0)) &&
       (*(int *)(iVar4 + 0x18) != 0)) {
      *(undefined1 *)(*(int *)(iVar4 + 0x18) + 0x15) = 1;
    }
  }
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if (iVar4 != 0) {
    *(undefined2 *)(iVar4 + 0x1c) = 1;
  }
  if (DAT_0073578c != 0) {
    iVar7 = *(int *)(DAT_0073578c + 8);
    iVar4 = iVar7 + 0xdc;
    if ((iVar4 == 0) || (iVar4 = FUN_004fd1e0(iVar4), iVar4 == 0)) {
      FUN_004eede0(iVar7,"Chyron.fng",0x10,0);
    }
  }
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if (iVar4 != 0) {
    *(undefined2 *)(iVar4 + 0x1c) = 1;
  }
  if (DAT_0073578c != 0) {
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) {
      *(undefined1 *)(*(int *)(iVar4 + 0x18) + 0x15) = 1;
    }
    iVar4 = DAT_0073578c;
    if (((DAT_0073578c != 0) && (iVar7 = FUN_004f3f90(&DAT_00746104), iVar7 != 0)) &&
       (*(int *)(iVar7 + 0x18) != 0)) {
      FUN_004eebf0(*(undefined4 *)(iVar4 + 8),*(int *)(iVar7 + 0x18));
    }
  }
  FUN_0040a580();
  FUN_0053eed0(&DAT_00740420,PTR_s_GLOBAL_HUDTEX_BIN_007007b4,0,0,0);
  FUN_0053eed0(&DAT_00740420,PTR_s_CARS_TEXTURES_BIN_007007a8,0,0,0);
  FUN_0053eed0(&DAT_00740420,PTR_s_CARS_WHEELS_TEXTURES_BIN_007007ac,0,0,0);
  FUN_0053eed0(&DAT_00743c20,PTR_s_CARS_WHEELS_GEOMETRY_BIN_00700790,0,0,0);
  while (puVar6 = DAT_00740438, (undefined4 **)DAT_00740438 != &DAT_00740438) {
    while ((puVar6[0x24] != 0 && ((int)puVar6[0x29] < 1))) {
      puVar6 = (undefined4 *)*puVar6;
      if ((undefined4 **)puVar6 == &DAT_00740438) goto LAB_004489b0;
    }
    FUN_004483c0();
  }
LAB_004489b0:
  do {
    puVar6 = DAT_00743c38;
    if ((undefined4 **)DAT_00743c38 == &DAT_00743c38) {
joined_r0x004489e4:
      while (DAT_007360e8 != 0) {
        FUN_004483c0();
      }
      return;
    }
    while ((puVar6[0x24] != 0 && ((int)puVar6[0x29] < 1))) {
      puVar6 = (undefined4 *)*puVar6;
      if ((undefined4 **)puVar6 == &DAT_00743c38) goto joined_r0x004489e4;
    }
    FUN_004483c0();
  } while( true );
}

