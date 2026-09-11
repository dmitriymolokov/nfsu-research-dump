/* spd-match: far pct=4.91 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0061e5f0();
int __cdecl FUN_0061e850();
int __cdecl FUN_0061f340();
int __cdecl FUN_0061f500();
int __cdecl FUN_0061f570();
int __cdecl FUN_0061f590();
extern int DAT_007094b8;
extern unsigned char *PTR_FUN_006dfa9c;
extern void LAB_0061ea60(void);
extern void LAB_0061eaa0(void);
extern void LAB_0061eca2(void);
extern void LAB_0061ecd0(void);
extern void LAB_0061ed50(void);
extern void LAB_0061ed5f(void);
extern void LAB_0061ed8b(void);
extern void LAB_0061ee53(void);
extern void LAB_0061ee94(void);

void __fastcall FUN_0061ea00(int *param_1)

{
  char *_Str2;
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  char cStack_bb;
  char local_ba;
  char cStack_b9;
  int local_b8;
  undefined4 *local_b4;
  uint local_b0;
  int local_ac;
  int *local_a8;
  int *local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int *local_94;
  int local_90;
  undefined4 uStack_8c;
  int local_88;
  char *pcStack_84;
  int aiStack_80 [32];
  
  puVar11 = (undefined4 *)*param_1;
  if (puVar11 == (undefined4 *)0x0) {
    return;
  }
  if (*(char *)(puVar11 + 3) != '\0') {
    return;
  }
  local_b8 = puVar11[6];
  iVar7 = puVar11[7];
  *(undefined1 *)(puVar11 + 3) = 1;
  bVar3 = false;
  local_ac = 0;
  local_9c = 0;
  local_b4 = puVar11;
  local_a4 = param_1;
  local_a0 = iVar7;
  if (*(short *)(iVar7 + 0x30) != 0) {
    local_94 = (int *)(local_b8 + 0x14);
LAB_0061ea60:
    if (local_94[-4] == 9) {
      local_88 = local_94[2];
      local_a8 = (int *)local_94[-1];
      iVar5 = (int)(*local_94 + (*local_94 >> 0x1f & 7U)) >> 3;
      local_90 = local_94[1];
      if (iVar5 != 0) {
LAB_0061eaa0:
        local_98 = iVar5;
        piVar14 = (int *)(((uint)local_a8[1] >> 8) * 0x10 + local_90);
        bVar1 = *(byte *)(piVar14 + 3);
        uVar13 = 0;
        local_b0 = 0;
        while ((bVar1 & 0xf) < 4) {
          uVar6 = (uint)*(ushort *)((int)piVar14 + 0xe);
          puVar2 = DAT_007094b8;
          if ((uVar6 != 0) && (uVar6 < *(ushort *)(local_a0 + 0x30))) {
            local_b0 = *(uint *)(local_b8 + 0x10 + uVar6 * 0x28);
            goto LAB_0061ed8b;
          }
          for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
            if ((puVar2 != puVar11) &&
               (iVar7 = FUN_0061e5f0(puVar2,puVar11[2] + *piVar14), iVar7 != 0)) {
              *(undefined2 *)((int)piVar14 + 0xe) = 1;
              piVar14[1] = iVar7 - *(int *)(local_b8 + 0x38);
              *(undefined1 *)((int)piVar14 + 0xd) = 2;
              goto LAB_0061eca2;
            }
          }
          if (((code *)puVar11[0x10b] == (code *)0x0) ||
             (iVar7 = (*(code *)puVar11[0x10b])(puVar11[2] + *piVar14,&local_ba), local_ba == '\0'))
          {
            iVar7 = FUN_0061f340(*piVar14 + puVar11[2],&cStack_b9);
            if (cStack_b9 == '\0') {
              _Str2 = (char *)(*piVar14 + puVar11[2]);
              pcVar4 = _Str2;
              do {
                pcVar12 = pcVar4;
                pcVar4 = pcVar12 + 1;
              } while (*pcVar12 != '\0');
              if (pcVar12[1] == '\x7f') {
                pcVar12 = pcVar12 + 2;
              }
              pcVar4 = "RUNTIME_ALLOC::";
              do {
                pcVar8 = pcVar4;
                pcVar4 = pcVar8 + 1;
              } while (*pcVar8 != '\0');
              iVar7 = _strncmp("RUNTIME_ALLOC::",_Str2,(size_t)(pcVar8 + -0x6a7074));
              if (iVar7 == 0) {
                pcVar4 = "RUNTIME_ALLOC::";
                do {
                  pcStack_84 = pcVar4;
                  pcVar4 = pcStack_84 + 1;
                } while (*pcStack_84 != '\0');
                pcStack_84 = pcStack_84 + -0x6a7074;
                pcVar9 = (code *)FUN_0061f570(pcVar12);
                if (pcVar9 != (code *)0x0) {
                  uVar10 = FUN_0061f590(pcVar12);
                  cStack_bb = '\0';
                  iVar7 = (*pcVar9)(pcStack_84 + (int)_Str2,local_a4,&uStack_8c,&cStack_bb,_Str2);
                  if ((cStack_bb != '\0') && (iVar7 != 0)) {
                    puVar11 = (undefined4 *)
                              (*(code *)PTR_FUN_006dfa9c)
                                        (0x10,"EAGL::DynamicLoader::RuntimeAllocDestructorEntry new"
                                        );
                    if (puVar11 == (undefined4 *)0x0) {
                      puVar11 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar11 = uVar10;
                      puVar11[1] = iVar7;
                      puVar11[2] = uStack_8c;
                      puVar11[3] = 0;
                    }
                    puVar11[3] = local_a4[3];
                    local_a4[3] = (int)puVar11;
                  }
                  *(undefined2 *)((int)piVar14 + 0xe) = 1;
                  piVar14[1] = iVar7 - *(int *)(local_b8 + 0x38);
                  *(undefined1 *)((int)piVar14 + 0xd) = 5;
                  puVar11 = local_b4;
                  uVar13 = local_b0;
                  goto LAB_0061eca2;
                }
              }
              if (!bVar3) {
                FUN_0061f500(0,"\n------------------------------------\n");
                FUN_0061f500(0,
                             "ERROR: DynamicLoader::Resolve - Failed to resolve the following undefined\nrelocation symbol(s):\n\n"
                            );
                bVar3 = true;
              }
              puVar11 = local_b4;
              if (0x1f < local_ac) goto LAB_0061ed8b;
              iVar7 = 0;
              if (local_ac < 1) goto LAB_0061ed5f;
              goto LAB_0061ed50;
            }
            *(undefined2 *)((int)piVar14 + 0xe) = 1;
            piVar14[1] = iVar7 - *(int *)(local_b8 + 0x38);
            *(undefined1 *)((int)piVar14 + 0xd) = 4;
          }
          else {
            *(undefined2 *)((int)piVar14 + 0xe) = 1;
            piVar14[1] = iVar7 - *(int *)(local_b8 + 0x38);
            *(undefined1 *)((int)piVar14 + 0xd) = 3;
          }
LAB_0061eca2:
          bVar1 = *(byte *)(piVar14 + 3);
        }
        FUN_0061f500(0,
                     "dlopen: Relocation to a symbol type I don\'t understand! (symbol %s type %d)\n"
                     ,puVar11[2] + *piVar14,*(byte *)(piVar14 + 3) & 0xf);
        goto LAB_0061ecd0;
      }
    }
    goto LAB_0061ee53;
  }
LAB_0061ee94:
  FUN_0061e850();
  return;
  while (iVar7 = iVar7 + 1, iVar7 < local_ac) {
LAB_0061ed50:
    if (*piVar14 + local_b4[2] == aiStack_80[iVar7]) goto LAB_0061ed8b;
  }
LAB_0061ed5f:
  iVar7 = *piVar14;
  iVar5 = local_b4[2];
  aiStack_80[local_ac] = iVar5 + iVar7;
  local_ac = local_ac + 1;
  FUN_0061f500(0,"   %s\n",iVar5 + iVar7);
  puVar11 = local_b4;
LAB_0061ed8b:
  uVar13 = local_b0 + piVar14[1];
  local_b0 = uVar13;
LAB_0061ecd0:
  uVar6 = *(uint *)(*local_a8 + local_88);
  puVar15 = (uint *)(*local_a8 + local_88);
  switch((char)local_a8[1]) {
  case '\0':
  case '\x01':
  case '\x03':
    break;
  case '\x02':
    *puVar15 = uVar6 + uVar13;
    break;
  case '\x04':
    uVar13 = uVar13 + (uVar6 & 0x3ffffff) * 4;
    if ((((uint)(puVar15 + 1) ^ uVar13) & 0xfc000000) != 0) {
      FUN_0061f500(0,
                   "dlopen: Result of patching jmp instruction is outside of range of possible jump. (%x vs. %x) Aborting.\n"
                   ,puVar15 + 1,uVar13);
    }
    *puVar15 = *puVar15 ^ (uVar13 >> 2 ^ *puVar15) & 0x3ffffff;
    break;
  case '\x05':
    uVar13 = uVar13 >> 0x10;
  case '\x06':
    *(short *)puVar15 = (short)*puVar15 + (short)uVar13;
    break;
  case '\a':
  case '\f':
    FUN_0061f500(0,"dlopen: Cannot deal with GP relative relocations. Aborting\n");
    break;
  case '\b':
    FUN_0061f500(0,"dlopen: Cannot deal with MIPS_LITERAL relocation yet\n");
    break;
  case '\t':
    FUN_0061f500(0,"dlopen: Cannot deal with MIPS_GOT16 relocation yet\n");
    break;
  default:
    FUN_0061f500(0,"dlopen: Cannot deal with relocation type %d yet\n",(char)local_a8[1]);
  }
  local_a8 = local_a8 + 2;
  iVar5 = local_98 + -1;
  if (local_98 + -1 == 0) goto code_r0x0061ee4b;
  goto LAB_0061eaa0;
code_r0x0061ee4b:
  local_98 = 0;
  iVar7 = local_a0;
LAB_0061ee53:
  local_9c = local_9c + 1;
  local_94 = local_94 + 10;
  if ((int)(uint)*(ushort *)(iVar7 + 0x30) <= local_9c) goto code_r0x0061ee6f;
  goto LAB_0061ea60;
code_r0x0061ee6f:
  if (bVar3) {
    FUN_0061f500(0,
                 "\nPossible causes:\n    - You forgot to add the symbol to the global symbol pool before loading\n      this ELF.\n    - You forgot to provide an address if using an address callback function.\n    - You forgot to load another ELF that contains the symbol before loading\n      this ELF.\n      ie. forgot to load eaglrm.o before a model ELF.\n    - There is a problem with the ELF file\n"
                );
    FUN_0061f500(0,"------------------------------------\n\n");
  }
  goto LAB_0061ee94;
}
