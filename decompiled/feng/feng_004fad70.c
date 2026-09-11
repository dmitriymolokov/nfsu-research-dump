/* Decompiled from Speed.exe @ 004fad70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fad70(uint param_1,int param_2)

{
  void *_Memory;
  void *_Memory_00;
  short *psVar1;
  void *pvVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  int unaff_ESI;
  uint uVar7;
  undefined4 *puVar8;
  
  _Memory = *(void **)(unaff_ESI + 0x9c);
  _Memory_00 = *(void **)(unaff_ESI + 0x98);
  *(undefined4 *)(unaff_ESI + 0x8c) = 0;
  *(undefined4 *)(unaff_ESI + 0x94) = 0;
  *(undefined4 *)(unaff_ESI + 0x90) = 0;
  *(undefined4 *)(unaff_ESI + 0x9c) = 0;
  *(undefined4 *)(unaff_ESI + 0x98) = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar7 = param_1 * param_2 * 2;
    pvVar2 = _malloc(uVar7);
    *(void **)(unaff_ESI + 0x9c) = pvVar2;
    pvVar2 = _malloc(param_1 * 4);
    *(void **)(unaff_ESI + 0x98) = pvVar2;
    puVar8 = *(undefined4 **)(unaff_ESI + 0x9c);
    for (uVar5 = (param_1 * param_2 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar5 = 0;
    if (param_1 != 0) {
      iVar6 = 0;
      do {
        *(int *)(*(int *)(unaff_ESI + 0x98) + uVar5 * 4) = *(int *)(unaff_ESI + 0x9c) + iVar6;
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + param_2 * 2;
      } while (uVar5 < param_1);
    }
    *(uint *)(unaff_ESI + 0x8c) = param_1;
    *(int *)(unaff_ESI + 0x90) = param_2;
    if (_Memory == (void *)0x0) goto LAB_004faf12;
    if ((_Memory_00 != (void *)0x0) && (param_1 = 0, *(int *)(unaff_ESI + 0x60) != 0)) {
      do {
        uVar5 = 0;
        if (*(int *)(unaff_ESI + 0x5c) != 0) {
          do {
            iVar6 = (*(int *)(unaff_ESI + 0x5c) * param_1 + uVar5) * 0x30;
            iVar3 = iVar6 + *(int *)(unaff_ESI + 0x88);
            if (*(int *)(iVar6 + 0x18 + *(int *)(unaff_ESI + 0x88)) == 2) {
              puVar4 = *(undefined2 **)(*(int *)(unaff_ESI + 0x98) + *(int *)(unaff_ESI + 0x94) * 4)
              ;
              psVar1 = *(short **)(iVar3 + 0x20);
              *(int *)(unaff_ESI + 0x94) = *(int *)(unaff_ESI + 0x94) + 1;
              *puVar4 = 0;
              *(undefined2 **)(iVar3 + 0x20) = puVar4;
              if (psVar1 != (short *)0x0) {
                iVar6 = 0;
                if (*psVar1 != 0) {
                  iVar3 = (int)psVar1 - (int)puVar4;
                  do {
                    if (param_2 + -1 == iVar6) break;
                    *puVar4 = *(undefined2 *)(iVar3 + (int)puVar4);
                    puVar4 = puVar4 + 1;
                    iVar6 = iVar6 + 1;
                  } while (*(short *)(iVar3 + (int)puVar4) != 0);
                }
              }
              *puVar4 = 0;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(unaff_ESI + 0x5c));
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(uint *)(unaff_ESI + 0x60));
    }
  }
  if (_Memory != (void *)0x0) {
    _free(_Memory);
  }
LAB_004faf12:
  if (_Memory_00 != (void *)0x0) {
    _free(_Memory_00);
  }
  return;
}

