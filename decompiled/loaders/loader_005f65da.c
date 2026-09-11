/* Decompiled from Speed.exe @ 005f65da */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005f65da(int param_1,uint param_2,int *param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  uint local_10;
  ushort *local_c;
  uint *local_8;
  
  piVar3 = param_3;
  if ((param_3 == (int *)0x0) && (param_4 == (uint *)0x0)) {
    iVar1 = -0x7789f794;
  }
  else {
    iVar1 = FUN_005f57fd(param_2,&local_8,&local_c,&local_10);
    if (-1 < iVar1) {
      if (param_3 != (int *)0x0) {
        if (param_4 == (uint *)0x0) {
          param_3 = (int *)0x1;
        }
        else {
          param_3 = (int *)*param_4;
          if (local_10 <= param_3) {
            param_3 = (int *)local_10;
          }
        }
        param_2 = 0;
        if (param_3 != (int *)0x0) {
          do {
            if ((*(uint *)(param_1 + 8) <= *local_8) || (*(uint *)(param_1 + 8) <= local_8[4])) {
              return -0x7789f4a7;
            }
            piVar4 = piVar3;
            for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar4 = 0;
              piVar4 = piVar4 + 1;
            }
            if (*local_8 == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = *(int *)(param_1 + 0xc) + *local_8;
            }
            *piVar3 = iVar1;
            piVar3[1] = (uint)(ushort)local_8[1];
            piVar3[2] = (uint)*(ushort *)((int)local_8 + 6);
            piVar3[3] = (uint)(ushort)local_8[2];
            piVar3[4] = (uint)*local_c;
            piVar3[5] = (uint)local_c[1];
            piVar3[6] = (uint)local_c[2];
            piVar3[7] = (uint)local_c[3];
            piVar3[8] = (uint)local_c[4];
            piVar3[9] = (uint)local_c[5];
            piVar3[10] = piVar3[7] * piVar3[8] * piVar3[6] * 4;
            if (local_8[4] == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = *(int *)(param_1 + 0xc) + local_8[4];
            }
            piVar3[0xb] = iVar1;
            puVar2 = local_8;
            if (param_3 != (int *)0x0) {
              puVar2 = local_8 + 5;
              piVar3 = piVar3 + 0xc;
              local_c = (ushort *)(local_8[8] + *(int *)(param_1 + 0xc));
            }
            param_2 = param_2 + 1;
            local_8 = puVar2;
          } while (param_2 < param_3);
        }
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = local_10;
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}

