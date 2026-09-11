/* spd-match: far pct=4.24 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FB210 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fa3d0();
int __cdecl FUN_004fb040();
int __cdecl FUN_004fb0f0();
int _param_6;
undefined4 __fastcall FUN_004fb210(int val, int param_1, undefined4 *param_2, undefined4 *param_3, int param_4, uint param_5, char param_6)

{
  undefined4 uVar1;
  char cVar2;

  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (val == 0) {
    return 0;
  }
  cVar2 = FUN_004fb040(*param_2,*param_3,param_5);
  if ((cVar2 != '\0') && (cVar2 = FUN_004fb0f0(param_2,param_3,param_5), cVar2 != '\0')) {
    if (param_4 != 0) {
      if (param_6 == '\0') {
        if (val < 1) {
          if (*(int *)(param_1 + 0xbc) == 0) {
            if (*(int *)(param_1 + 0x58) != 0) {
              uVar7 = *(uint *)(param_1 + 0x5c);
              _param_6 = 0;
              if (uVar7 != 0) {
                param_5 = 0;
                do {
                  iVar8 = *(int *)(param_1 + 0x60) + -1;
                  uVar3 = *(undefined4 *)
                           ((uVar7 * iVar8 + _param_6) * 0x30 + 0x20 + *(int *)(param_1 + 0x88));
                  while (iVar8 != 0) {
                    iVar5 = *(int *)(param_1 + 0x5c) * iVar8 + _param_6;
                    iVar8 = iVar8 + -1;
                    puVar10 = (undefined4 *)
                              ((iVar5 - *(int *)(param_1 + 0x5c)) * 0x30 + *(int *)(param_1 + 0x88))
                    ;
                    puVar9 = (undefined4 *)(iVar5 * 0x30 + *(int *)(param_1 + 0x88));
                    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar9 = *puVar10;
                      puVar10 = puVar10 + 1;
                      puVar9 = puVar9 + 1;
                    }
                  }
                  *(undefined4 *)(param_5 + 0x20 + *(int *)(param_1 + 0x88)) = uVar3;
                  iVar8 = *(int *)(param_1 + 0x74);
                  iVar5 = *(int *)(param_1 + 0x6c);
                  if (iVar8 < 0) {
                    if (iVar5 < 2) {
                      iVar8 = 0;
                    }
                    else {
                      iVar8 = iVar5 - -iVar8 % iVar5;
                    }
                  }
                  else {
                    iVar8 = iVar8 % iVar5;
                  }
                  (**(code **)(**(int **)(param_1 + 0x58) + 0x4c))
                            (param_1,*(undefined4 *)(param_1 + 0x70),iVar8);
                  uVar7 = *(uint *)(param_1 + 0x5c);
                  _param_6 = _param_6 + 1;
                  param_5 = param_5 + 0x30;
                } while (_param_6 < uVar7);
              }
            }
          }
          else {
            uVar7 = *(uint *)(param_1 + 0x5c);
            _param_6 = 0;
            if (uVar7 != 0) {
              param_5 = 0;
              do {
                iVar8 = *(int *)(param_1 + 0x60) + -1;
                uVar3 = *(undefined4 *)
                         ((uVar7 * iVar8 + _param_6) * 0x30 + 0x20 + *(int *)(param_1 + 0x88));
                while (iVar8 != 0) {
                  iVar5 = *(int *)(param_1 + 0x5c) * iVar8 + _param_6;
                  iVar8 = iVar8 + -1;
                  puVar10 = (undefined4 *)
                            ((iVar5 - *(int *)(param_1 + 0x5c)) * 0x30 + *(int *)(param_1 + 0x88));
                  puVar9 = (undefined4 *)(iVar5 * 0x30 + *(int *)(param_1 + 0x88));
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar9 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar9 = puVar9 + 1;
                  }
                }
                *(undefined4 *)(param_5 + 0x20 + *(int *)(param_1 + 0x88)) = uVar3;
                iVar8 = *(int *)(param_1 + 0x74);
                iVar5 = *(int *)(param_1 + 0x6c);
                if (iVar8 < 0) {
                  if (iVar5 < 2) {
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = iVar5 - -iVar8 % iVar5;
                  }
                }
                else {
                  iVar8 = iVar8 % iVar5;
                }
                (**(code **)(param_1 + 0xbc))
                          (*(undefined4 *)(param_1 + 0xc0),param_1,*(undefined4 *)(param_1 + 0x70),
                           iVar8);
                uVar7 = *(uint *)(param_1 + 0x5c);
                _param_6 = _param_6 + 1;
                param_5 = param_5 + 0x30;
              } while (_param_6 < uVar7);
              return 1;
            }
          }
        }
        else {
          iVar8 = *(int *)(param_1 + 0x60);
          uVar3 = FUN_004fa3d0();
          if (*(int *)(param_1 + 0xbc) == 0) {
            if ((*(int *)(param_1 + 0x58) != 0) && (param_5 = 0, *(int *)(param_1 + 0x5c) != 0)) {
              param_3 = (undefined4 *)0x0;
              do {
                uVar1 = *(undefined4 *)((int)param_3 + 0x20 + *(int *)(param_1 + 0x88));
                uVar7 = 0;
                if (iVar8 != 1) {
                  do {
                    iVar5 = *(int *)(param_1 + 0x5c) * uVar7 + param_5;
                    uVar7 = uVar7 + 1;
                    puVar10 = (undefined4 *)
                              ((*(int *)(param_1 + 0x5c) + iVar5) * 0x30 + *(int *)(param_1 + 0x88))
                    ;
                    puVar9 = (undefined4 *)(iVar5 * 0x30 + *(int *)(param_1 + 0x88));
                    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar9 = *puVar10;
                      puVar10 = puVar10 + 1;
                      puVar9 = puVar9 + 1;
                    }
                  } while (uVar7 < iVar8 - 1U);
                }
                *(undefined4 *)
                 ((*(int *)(param_1 + 0x5c) * uVar7 + param_5) * 0x30 + 0x20 +
                 *(int *)(param_1 + 0x88)) = uVar1;
                iVar4 = *(int *)(param_1 + 0x70) + param_5;
                iVar5 = *(int *)(param_1 + 0x68);
                if (iVar4 < 0) {
                  if (iVar5 < 2) {
                    iVar4 = 0;
                  }
                  else {
                    iVar4 = iVar5 - -iVar4 % iVar5;
                  }
                }
                else {
                  iVar4 = iVar4 % iVar5;
                }
                (**(code **)(**(int **)(param_1 + 0x58) + 0x4c))(param_1,iVar4,uVar3);
                param_5 = param_5 + 1;
                param_3 = (undefined4 *)((int)param_3 + 0x30);
              } while (param_5 < *(uint *)(param_1 + 0x5c));
              return 1;
            }
          }
          else {
            param_5 = 0;
            if (*(int *)(param_1 + 0x5c) != 0) {
              param_3 = (undefined4 *)0x0;
              do {
                uVar1 = *(undefined4 *)((int)param_3 + 0x20 + *(int *)(param_1 + 0x88));
                uVar7 = 0;
                if (iVar8 != 1) {
                  do {
                    iVar5 = *(int *)(param_1 + 0x5c) * uVar7 + param_5;
                    uVar7 = uVar7 + 1;
                    puVar10 = (undefined4 *)
                              ((*(int *)(param_1 + 0x5c) + iVar5) * 0x30 + *(int *)(param_1 + 0x88))
                    ;
                    puVar9 = (undefined4 *)(iVar5 * 0x30 + *(int *)(param_1 + 0x88));
                    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar9 = *puVar10;
                      puVar10 = puVar10 + 1;
                      puVar9 = puVar9 + 1;
                    }
                  } while (uVar7 < iVar8 - 1U);
                }
                *(undefined4 *)
                 ((*(int *)(param_1 + 0x5c) * uVar7 + param_5) * 0x30 + 0x20 +
                 *(int *)(param_1 + 0x88)) = uVar1;
                iVar4 = *(int *)(param_1 + 0x70) + param_5;
                iVar5 = *(int *)(param_1 + 0x68);
                if (iVar4 < 0) {
                  if (iVar5 < 2) {
                    iVar4 = 0;
                  }
                  else {
                    iVar4 = iVar5 - -iVar4 % iVar5;
                  }
                }
                else {
                  iVar4 = iVar4 % iVar5;
                }
                (**(code **)(param_1 + 0xbc))(*(undefined4 *)(param_1 + 0xc0),param_1,iVar4,uVar3);
                param_5 = param_5 + 1;
                param_3 = (undefined4 *)((int)param_3 + 0x30);
              } while (param_5 < *(uint *)(param_1 + 0x5c));
              return 1;
            }
          }
        }
      }
      else if (val < 1) {
        if (*(int *)(param_1 + 0xbc) == 0) {
          if (*(int *)(param_1 + 0x58) != 0) {
            uVar7 = 0;
            if (*(int *)(param_1 + 0x60) != 0) {
              _param_6 = 0x30;
              do {
                iVar8 = *(int *)(param_1 + 0x5c);
                uVar3 = *(undefined4 *)(iVar8 * _param_6 + -0x10 + *(int *)(param_1 + 0x88));
                while (iVar8 = iVar8 + -1, iVar8 != 0) {
                  puVar10 = (undefined4 *)
                            ((*(int *)(param_1 + 0x5c) * uVar7 + iVar8) * 0x30 +
                            *(int *)(param_1 + 0x88));
                  puVar9 = puVar10 + -0xc;
                  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar10 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar10 = puVar10 + 1;
                  }
                }
                *(undefined4 *)
                 (*(int *)(param_1 + 0x5c) * uVar7 * 0x30 + 0x20 + *(int *)(param_1 + 0x88)) = uVar3
                ;
                iVar5 = *(int *)(param_1 + 0x74) + uVar7;
                iVar8 = *(int *)(param_1 + 0x6c);
                if (iVar5 < 0) {
                  if (iVar8 < 2) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = iVar8 - -iVar5 % iVar8;
                  }
                }
                else {
                  iVar5 = iVar5 % iVar8;
                }
                (**(code **)(**(int **)(param_1 + 0x58) + 0x4c))
                          (param_1,*(undefined4 *)(param_1 + 0x70),iVar5);
                uVar7 = uVar7 + 1;
                _param_6 = _param_6 + 0x30;
              } while (uVar7 < *(uint *)(param_1 + 0x60));
              return 1;
            }
          }
        }
        else {
          uVar7 = 0;
          if (*(int *)(param_1 + 0x60) != 0) {
            _param_6 = 0x30;
            do {
              iVar8 = *(int *)(param_1 + 0x5c);
              uVar3 = *(undefined4 *)(iVar8 * _param_6 + -0x10 + *(int *)(param_1 + 0x88));
              while (iVar8 = iVar8 + -1, iVar8 != 0) {
                puVar10 = (undefined4 *)
                          ((*(int *)(param_1 + 0x5c) * uVar7 + iVar8) * 0x30 +
                          *(int *)(param_1 + 0x88));
                puVar9 = puVar10 + -0xc;
                for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar10 = puVar10 + 1;
                }
              }
              *(undefined4 *)
               (*(int *)(param_1 + 0x5c) * uVar7 * 0x30 + 0x20 + *(int *)(param_1 + 0x88)) = uVar3;
              iVar5 = *(int *)(param_1 + 0x74) + uVar7;
              iVar8 = *(int *)(param_1 + 0x6c);
              if (iVar5 < 0) {
                if (iVar8 < 2) {
                  iVar5 = 0;
                }
                else {
                  iVar5 = iVar8 - -iVar5 % iVar8;
                }
              }
              else {
                iVar5 = iVar5 % iVar8;
              }
              (**(code **)(param_1 + 0xbc))
                        (*(undefined4 *)(param_1 + 0xc0),param_1,*(undefined4 *)(param_1 + 0x70),
                         iVar5);
              uVar7 = uVar7 + 1;
              _param_6 = _param_6 + 0x30;
            } while (uVar7 < *(uint *)(param_1 + 0x60));
            return 1;
          }
        }
      }
      else {
        iVar8 = *(int *)(param_1 + 0x5c);
        uVar3 = FUN_004fa3d0();
        if (*(int *)(param_1 + 0xbc) == 0) {
          if (*(int *)(param_1 + 0x58) != 0) {
            uVar7 = 0;
            if (*(int *)(param_1 + 0x60) != 0) {
              do {
                uVar1 = *(undefined4 *)
                         (*(int *)(param_1 + 0x5c) * uVar7 * 0x30 + 0x20 + *(int *)(param_1 + 0x88))
                ;
                uVar6 = 0;
                if (iVar8 != 1) {
                  do {
                    puVar10 = (undefined4 *)
                              ((*(int *)(param_1 + 0x5c) * uVar7 + uVar6) * 0x30 +
                              *(int *)(param_1 + 0x88));
                    uVar6 = uVar6 + 1;
                    puVar9 = puVar10 + 0xc;
                    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
                      *puVar10 = *puVar9;
                      puVar9 = puVar9 + 1;
                      puVar10 = puVar10 + 1;
                    }
                  } while (uVar6 < iVar8 - 1U);
                }
                *(undefined4 *)
                 ((*(int *)(param_1 + 0x5c) * uVar7 + uVar6) * 0x30 + 0x20 +
                 *(int *)(param_1 + 0x88)) = uVar1;
                iVar4 = *(int *)(param_1 + 0x74) + uVar7;
                iVar5 = *(int *)(param_1 + 0x6c);
                if (iVar4 < 0) {
                  if (iVar5 < 2) {
                    iVar4 = 0;
                  }
                  else {
                    iVar4 = iVar5 - -iVar4 % iVar5;
                  }
                }
                else {
                  iVar4 = iVar4 % iVar5;
                }
                (**(code **)(**(int **)(param_1 + 0x58) + 0x4c))(param_1,uVar3,iVar4);
                uVar7 = uVar7 + 1;
              } while (uVar7 < *(uint *)(param_1 + 0x60));
              return 1;
            }
          }
        }
        else {
          uVar7 = 0;
          if (*(int *)(param_1 + 0x60) != 0) {
            do {
              uVar1 = *(undefined4 *)
                       (*(int *)(param_1 + 0x5c) * uVar7 * 0x30 + 0x20 + *(int *)(param_1 + 0x88));
              uVar6 = 0;
              if (iVar8 != 1) {
                do {
                  puVar10 = (undefined4 *)
                            ((*(int *)(param_1 + 0x5c) * uVar7 + uVar6) * 0x30 +
                            *(int *)(param_1 + 0x88));
                  uVar6 = uVar6 + 1;
                  puVar9 = puVar10 + 0xc;
                  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar10 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar10 = puVar10 + 1;
                  }
                } while (uVar6 < iVar8 - 1U);
              }
              *(undefined4 *)
               ((*(int *)(param_1 + 0x5c) * uVar7 + uVar6) * 0x30 + 0x20 + *(int *)(param_1 + 0x88))
                   = uVar1;
              iVar4 = *(int *)(param_1 + 0x74) + uVar7;
              iVar5 = *(int *)(param_1 + 0x6c);
              if (iVar4 < 0) {
                if (iVar5 < 2) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = iVar5 - -iVar4 % iVar5;
                }
              }
              else {
                iVar4 = iVar4 % iVar5;
              }
              (**(code **)(param_1 + 0xbc))(*(undefined4 *)(param_1 + 0xc0),param_1,uVar3,iVar4);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_1 + 0x60));
            return 1;
          }
        }
      }
    }
    return 1;
  }
  return 0;
}
