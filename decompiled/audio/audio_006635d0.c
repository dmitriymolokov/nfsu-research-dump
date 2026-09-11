/* Decompiled from Speed.exe @ 006635d0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_006635d0(int param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  if (param_2 == 0xffffffff) {
    param_2 = 3;
  }
  else if (param_2 == 0) {
    param_2 = 0x101;
  }
  else if (param_2 == 1) {
    param_2 = 0x102;
  }
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3[(param_1 - (int)param_3) + 0x24] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0x6c) = param_2 >> 1 & 1;
  *(uint *)(param_1 + 0x78) = param_2 & 0xfffffffc;
  if ((param_2 & 0xfffffffc) == 0) {
    *(undefined4 *)(param_1 + 0x78) = 0x100;
  }
  piVar6 = (int *)(param_1 + 0x7c);
  iVar5 = 4;
  piVar7 = piVar6;
  do {
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 4))(iVar2);
    }
    *piVar7 = 0;
    piVar7[1] = 0;
    piVar7 = piVar7 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (((byte)param_2 & 3) != 3) {
    if ((param_2 & 0x100) != 0) {
      iVar5 = FUN_0066d8f0(0x20e,0x20,0x20);
      *piVar6 = iVar5;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    if ((param_2 & 0x400) != 0) {
      uVar4 = FUN_0066bf40(0x20e,0x20,0x20);
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    if ((param_2 & 0x200) != 0) {
      uVar4 = FUN_0066b000(0x20e,0x20,0x20);
      *(undefined4 *)(param_1 + 0x94) = uVar4;
      if ((*piVar6 == 0) && (*(int *)(param_1 + 0x88) == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 5000;
      }
      *(undefined4 *)(param_1 + 0x9c) = uVar4;
    }
    if ((param_2 & 0x800) != 0) {
      uVar4 = FUN_0066a3e0(0x20e,0x20,0x20);
      *(undefined4 *)(param_1 + 0xa0) = uVar4;
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    iVar5 = 4;
    do {
      iVar2 = *piVar6;
      if (iVar2 != 0) {
        if ((param_2 & 2) == 0) {
          if ((param_2 & 1) != 0) {
            (**(code **)(iVar2 + 0x10))(iVar2,param_3);
          }
        }
        else {
          (**(code **)(iVar2 + 0x18))(iVar2,param_3);
        }
      }
      piVar6 = piVar6 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar4 = FUN_00669720(8);
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    FUN_0040a880(uVar4);
  }
  FUN_00669430(*(undefined4 *)(param_1 + 0x68),"GmUtil",param_3,&DAT_006b9172,
               "TCP:~1:1024\tUDP:~1:1024",0);
  return 0;
}

