/* Decompiled from Speed.exe @ 00446140 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_00446140(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int local_17c;
  short *local_178;
  char *local_174;
  char local_14f [63];
  int local_110 [67];
  
  local_110[0] = *(int *)(param_1 + 0x28);
  piVar3 = local_110 + 1;
  local_174 = local_14f;
  do {
    cVar2 = local_174[-1];
    iVar1 = piVar3[-1];
    piVar3 = piVar3 + -1;
    local_174 = local_174 + -1;
    if (cVar2 == '\x01') {
      cVar2 = FUN_0040db20(*(undefined4 *)(param_2 + 0x80));
    }
    if ((cVar2 != '\0') && (local_17c = 0, 0 < *(short *)(iVar1 + 0xc))) {
      local_178 = (short *)(iVar1 + 0xe);
      do {
        if (*local_178 < 0) {
          *piVar3 = *(int *)(param_1 + 0x28) + *local_178 * -0x18;
          piVar3 = piVar3 + 1;
          *local_174 = cVar2;
          local_174 = local_174 + 1;
        }
        else {
          FUN_00445ec0(param_2,cVar2);
        }
        local_178 = local_178 + 1;
        local_17c = local_17c + 1;
      } while (local_17c < *(short *)(iVar1 + 0xc));
    }
  } while (piVar3 != local_110);
  return;
}

