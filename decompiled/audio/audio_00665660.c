/* Decompiled from Speed.exe @ 00665660 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00665660(int *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int *piVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  uint unaff_retaddr;
  undefined1 *puStack_370;
  int iStack_36c;
  uint uStack_368;
  int iStack_364;
  undefined4 uStack_360;
  int iStack_35c;
  uint uStack_358;
  undefined1 *puStack_354;
  uint local_350;
  int *piStack_34c;
  code *pcStack_310;
  undefined4 uStack_30c;
  undefined1 auStack_304 [256];
  byte bStack_204;
  byte abStack_203 [511];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  if (*param_1 != 0) {
    uVar3 = GetTickCount();
    local_350 = uVar3;
    if (param_1[3] != 0x6f66666c) {
      iVar4 = param_1[5];
      if ((iVar4 != 0) && (5000 < (int)(uVar3 - iVar4))) {
        param_1[4] = param_1[4] + (uVar3 - iVar4);
      }
      if ((int)(param_1[4] - uVar3) < 0) {
        FUN_00664930(0x74696d65);
      }
    }
    param_1[5] = uVar3;
    if ((param_1[3] != 0x7465726d) && (param_1[3] != 0x6f66666c)) {
      FUN_00664800();
      iVar4 = FUN_0066e780(*param_1,&iStack_36c,&uStack_368,&puStack_370);
      while (-1 < iVar4) {
        param_1[4] = uVar3 + 60000;
        if (iStack_36c == 0x7e706e67) {
          if (param_1[7] != -1) {
            FUN_00667650(auStack_304,0x100,puStack_370);
            FUN_00667690(auStack_304,0x100,&DAT_006aadac,param_1[7]);
            puStack_370 = auStack_304;
            iVar4 = -1;
          }
          FUN_0066e6a0(*param_1,iStack_36c,uStack_368,puStack_370,iVar4);
        }
        else {
          uStack_360 = 0;
          iStack_35c = iStack_36c;
          uStack_358 = uStack_368;
          puStack_354 = puStack_370;
          if ((code *)param_1[0x1b3] != (code *)0x0) {
            (*(code *)param_1[0x1b3])(param_1,&uStack_360,param_1[0x1b4]);
          }
          FUN_00664400();
          if (pcStack_310 != (code *)0x0) {
            (*pcStack_310)(param_1,&uStack_360,uStack_30c);
          }
          if (param_1[3] == 0x72646972) {
            if (iStack_36c == 0x40646972) {
              uVar5 = FUN_0066df40(*param_1,0x6c707274);
              iVar4 = FUN_0066df40(*param_1,0x6c616472);
              param_1[0x1ae] = iVar4;
              iVar4 = FUN_00667530(puStack_370,"DIRECT");
              if (iVar4 == 0) {
                uVar6 = FUN_00667530(puStack_370,&DAT_006aac3c,0);
                iVar4 = FUN_00667f50(uVar6);
                param_1[0x15b] = iVar4;
                uVar6 = FUN_00667530(puStack_370,&DAT_006aad9c,0);
                iVar4 = FUN_00667ec0(uVar6);
                param_1[0x15a] = iVar4;
              }
              uVar6 = FUN_00667530(puStack_370,&DAT_006aad94,0);
              iVar4 = FUN_00667ec0(uVar6);
              param_1[0x19c] = iVar4;
              uVar6 = FUN_00667530(puStack_370,&DAT_006aac5c,param_1 + 0x19d,0x40,&DAT_006b9172);
              FUN_00668130(uVar6);
              FUN_0066e040(*param_1);
              if (param_1[0x15b] != 0) {
                param_1[3] = 0x636f6e6e;
                FUN_006652b0();
                FUN_00664310("connecting to %08x:%d\n",param_1[0x15b],param_1[0x15a]);
                FUN_0066dfd0(*param_1,param_1[0x15b],param_1[0x15a]);
                auStack_304[0] = 0;
                FUN_006677e0(auStack_304,0x100,&DAT_006aac3c,param_1[0x1ae]);
                FUN_00667690(auStack_304,0x100,&DAT_006aad9c,uVar5);
                FUN_0066e6a0(*param_1,0x61646472,0,auStack_304,0xffffffff);
                break;
              }
              uVar5 = FUN_00667530(puStack_370,&DAT_006aad8c,param_1 + 0x15c,0x100,&DAT_006b9172);
              FUN_00668130(uVar5);
              param_1[2] = param_1[2] | 0x400;
            }
            iStack_36c = 0;
          }
          else if ((iStack_36c == -1) && (uStack_368 == 0xffffffff)) {
            auStack_304[0] = 0;
            FUN_00667aa0(auStack_304,0x100,&DAT_006aad84,"Public Key",10);
            FUN_0066e6a0(*param_1,0x736b6579,0,auStack_304,0xffffffff);
            param_1[0x1af] = 1;
            param_1[3] = 0x736b6579;
            iStack_36c = 0x636f6e6e;
            uStack_368 = 0;
            goto LAB_00666b17;
          }
          if ((param_1[3] == 0x736b6579) &&
             (((iStack_36c == 0x736b6579 || (iStack_36c == 0x73656c65)) && (uStack_368 == 0)))) {
            if (iStack_36c == 0x736b6579) {
              uVar5 = FUN_00667530(puStack_370,&DAT_006aad84,param_1 + 9,0x10);
              FUN_00668270(uVar5);
            }
            param_1[2] = param_1[2] | 1;
            param_1[3] = 0x69646c65;
            iStack_36c = 0x636f6e6e;
            uStack_368 = 0;
            param_1[6] = uVar3;
            if ((code *)param_1[0x1b9] == (code *)0x0) goto LAB_00666b17;
            uStack_358 = 0;
            puStack_354 = (undefined1 *)0x0;
            uStack_360 = 3;
            iStack_35c = 0x636f6e6e;
            (*(code *)param_1[0x1b9])(param_1,&uStack_360,param_1[0x1ba]);
          }
          if ((iStack_36c == -1) && (uStack_368 == 0xfefefefe)) {
            if (param_1[3] == 0x636f6e6e) goto LAB_00666b17;
            FUN_00664930(0xfefefefe);
          }
          if (uStack_368 == 0x61757468) {
            FUN_00664930(0x61757468);
          }
          if (iStack_36c == 0x61757468) {
            if (uStack_368 != 0) goto LAB_00666b17;
            param_1[2] = param_1[2] | 2;
            param_1[3] = 0x61757468;
            uVar5 = FUN_00667530(puStack_370,&DAT_006bd3bc,param_1 + 0x4d,0x40,&DAT_006b9172);
            FUN_00668130(uVar5);
            uVar5 = FUN_00667530(puStack_370,&DAT_006aac3c,0);
            iVar4 = FUN_00667f50(uVar5);
            param_1[0x1ad] = iVar4;
          }
          if (iStack_36c == 0x61636374) {
            if (uStack_368 == 0) {
              param_1[3] = 0x61636374;
              param_1[2] = param_1[2] | 2;
            }
          }
          else {
            if (iStack_36c == 0x736e6170) {
              piVar13 = param_1 + 0x1b1;
              *piVar13 = *piVar13 + -1;
              if ((*piVar13 != 0) || (uStack_368 != 0)) goto LAB_00666b17;
              uVar5 = FUN_00667530(puStack_370,&DAT_006bd368,0);
              iVar4 = FUN_00667ec0(uVar5);
              param_1[0x1b0] = iVar4;
            }
            if (iStack_36c == 0x73656c65) {
              if (uStack_368 != 0) goto LAB_00666b17;
              uVar5 = FUN_00667530(puStack_370,&DAT_006aad70,0);
              iVar4 = FUN_00667ec0(uVar5);
              param_1[0x1af] = iVar4;
              uVar5 = FUN_00667530(puStack_370,"SLOTS",0);
              iVar4 = FUN_00667ec0(uVar5);
              param_1[0x1b2] = iVar4;
            }
            if (iStack_36c == 0x70657273) {
              if (uStack_368 != 0) goto LAB_00666b17;
              uVar5 = FUN_00667530(puStack_370,&DAT_006bd3c4,param_1 + 0x5d,0x40,&DAT_006b9172);
              FUN_00668130(uVar5);
              param_1[6] = uVar3;
            }
            if (iStack_36c == 0x2b736573) {
              piVar13 = param_1 + 0x80;
              for (iVar4 = 0xa8; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar13 = 0;
                piVar13 = piVar13 + 1;
              }
              FUN_006652f0(param_1 + 0x80,puStack_370);
              param_1[2] = param_1[2] | 0x200;
              if ((code *)param_1[0x1bb] != (code *)0x0) {
                puStack_354 = puStack_370;
                uStack_360 = 4;
                iStack_35c = 0x706c6179;
                uStack_358 = 0;
                (*(code *)param_1[0x1bb])(param_1,&uStack_360,param_1[0x1bc]);
              }
            }
            if (iStack_36c == 0x2b6d7367) {
              if (param_1[0x1b5] == 0) goto LAB_00666b17;
              uStack_360 = 1;
              iStack_35c = 0x63686174;
              uStack_358 = 0;
              puStack_354 = puStack_370;
              uVar5 = FUN_00667530(puStack_370,&DAT_006aad64,0);
              uStack_358 = FUN_00667f10(uVar5);
              if ((uStack_358 & 4) != 0) {
                iStack_35c = 0x63617374;
              }
              if ((uStack_358 & 0x10000) != 0) {
                iStack_35c = 0x70726976;
              }
              (*(code *)param_1[0x1b5])(param_1,&uStack_360,param_1[0x1b6]);
            }
            if (iStack_36c == 0x2b77686f) {
              uVar5 = FUN_00667530(puStack_370,&DAT_006bd2ec,param_1 + 0x5d,0x40,&DAT_006b9172);
              FUN_00668130(uVar5);
              uVar5 = FUN_00667530(puStack_370,&DAT_006aad64,0);
              iVar4 = FUN_00667f10(uVar5);
              param_1[0x6d] = iVar4;
              uVar5 = FUN_00667530(puStack_370,&DAT_006aad60,0);
              iVar4 = FUN_00667ec0(uVar5);
              uVar5 = FUN_00667530(puStack_370,&DAT_006aad5c,0);
              uVar5 = FUN_00667ec0(uVar5);
              if (iVar4 != param_1[0x6e]) {
                param_1[0x6e] = iVar4;
                FUN_00664520(uVar5);
                uVar5 = FUN_00667530(puStack_370,&DAT_006a9714,param_1 + 0x70,0x40,&DAT_006b9172);
                FUN_00668130(uVar5);
                uVar5 = FUN_00667530(puStack_370,&DAT_006aad58,0);
                iVar4 = FUN_00667f10(uVar5);
                param_1[0x6f] = iVar4;
                param_1[2] = param_1[2] | 8;
                if (param_1[0x12d] != 0) {
                  iVar4 = FUN_0066dac0(param_1[0x12d]);
                  while (iVar4 != 0) {
                    uVar5 = FUN_00666eb0(param_1[0x12e],iVar4);
                    FUN_00447030(uVar5);
                    iVar4 = FUN_0066dac0(param_1[0x12d]);
                  }
                  param_1[2] = param_1[2] | 0x40;
                }
              }
            }
            if (iStack_36c == 0x2b726f6d) {
              if (param_1[0x128] == 0) goto LAB_00666b17;
              uVar5 = FUN_00667530(puStack_370,&DAT_0069edd8,0xffffffff);
              iVar4 = FUN_00667ec0(uVar5);
              if (-1 < iVar4) {
                iVar7 = FUN_00667530(puStack_370,&DAT_006bd2ec);
                if (iVar7 == 0) {
                  iVar7 = FUN_0066dd40(param_1[0x128],iVar4);
                  if (iVar7 != 0) {
                    FUN_0066dd80(param_1[0x128],iVar4);
                    uVar5 = FUN_00666eb0(param_1[0x129],iVar7);
                    FUN_00447030(uVar5);
                    param_1[2] = param_1[2] | 0x20;
                  }
                }
                else {
                  piVar8 = (int *)FUN_00549460(0x68);
                  piVar13 = piVar8;
                  for (iVar7 = 0x1a; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *piVar13 = 0;
                    piVar13 = piVar13 + 1;
                  }
                  *piVar8 = iVar4;
                  uVar5 = FUN_00667530(puStack_370,&DAT_006bd2ec,piVar8 + 7,0x20,&DAT_006b9172);
                  FUN_00668130(uVar5);
                  uVar5 = FUN_00667530(puStack_370,&DAT_006aad54,piVar8 + 0xf,0x20,&DAT_006b9172);
                  FUN_00668130(uVar5);
                  uVar5 = FUN_00667530(puStack_370,&DAT_006aad64,0xffffffff);
                  iVar4 = FUN_00667f10(uVar5);
                  piVar8[2] = iVar4;
                  uVar5 = FUN_00667530(puStack_370,&DAT_006a9718,0);
                  iVar4 = FUN_00667f50(uVar5);
                  piVar8[0x19] = iVar4;
                  uVar5 = FUN_00667530(puStack_370,&DAT_006bd2e8,0);
                  iVar4 = FUN_00667ec0(uVar5);
                  piVar8[4] = iVar4;
                  uVar5 = FUN_00667530(puStack_370,&DAT_006aad50,0);
                  iVar4 = FUN_00667ec0(uVar5);
                  piVar8[3] = iVar4;
                  FUN_0067101f(piVar8 + 5,&DAT_006ca778,piVar8[4]);
                  pcVar12 = "No";
                  if ((piVar8[2] & 0x10000U) == 0) {
                    pcVar12 = "Yes";
                  }
                  piVar13 = piVar8 + 6;
                  do {
                    cVar1 = *pcVar12;
                    pcVar12 = pcVar12 + 1;
                    *(char *)piVar13 = cVar1;
                    piVar13 = (int *)((int)piVar13 + 1);
                  } while (cVar1 != '\0');
                  piVar13 = piVar8 + 0x17;
                  *(undefined1 *)piVar13 = 0;
                  uVar5 = FUN_00667530(puStack_370,&DAT_006aad4c,0xffffffff);
                  iVar4 = FUN_00667ec0(uVar5);
                  if (iVar4 == 0) {
                    *piVar13 = 0x2d2d2d;
                  }
                  else if (0 < iVar4) {
                    FUN_0067101f(piVar13,"~%dms",iVar4);
                  }
                  iVar4 = FUN_0066dd40(param_1[0x128],*piVar8);
                  if (iVar4 == 0) {
                    uVar5 = FUN_00666de0(param_1[0x129],piVar8);
                    FUN_0066dcd0(param_1[0x128],*piVar8,uVar5);
                  }
                  else {
                    iVar7 = FUN_00666ea0(param_1[0x129],iVar4);
                    if (iVar7 != 0) {
                      pcVar12 = (char *)(iVar7 + 0x5c);
                      if (('/' < *(char *)(iVar7 + 0x5c)) && (*(char *)(iVar7 + 0x5c) < ':')) {
                        iVar16 = (int)piVar13 - (int)pcVar12;
                        do {
                          cVar1 = *pcVar12;
                          pcVar12[iVar16] = cVar1;
                          pcVar12 = pcVar12 + 1;
                        } while (cVar1 != '\0');
                      }
                    }
                    FUN_00447030(iVar7);
                    FUN_00666e50(param_1[0x129],iVar4,piVar8);
                  }
                }
                param_1[2] = param_1[2] | 0x20;
              }
            }
            if (iStack_36c == 0x2b706f70) {
              uVar3 = local_350;
              if (param_1[0x128] == 0) goto LAB_00666b17;
              uVar5 = FUN_00667530(puStack_370,&DAT_006aad40,&bStack_204,0x200,&DAT_006b9172);
              FUN_00668130(uVar5);
              pbVar14 = &bStack_204;
              bVar2 = bStack_204;
              while (bVar2 != 0) {
                bVar2 = *pbVar14;
                iVar4 = 0;
                if ((char)bVar2 < '0') break;
                do {
                  if ('9' < (char)bVar2) break;
                  pbVar14 = pbVar14 + 1;
                  iVar4 = (bVar2 & 0xf) + iVar4 * 10;
                  bVar2 = *pbVar14;
                } while ('/' < (char)bVar2);
                if (iVar4 == 0) break;
                if (*pbVar14 != 0) {
                  pbVar14 = pbVar14 + 1;
                }
                iVar7 = 0;
                bVar2 = *pbVar14;
                while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
                  pbVar14 = pbVar14 + 1;
                  iVar7 = (bVar2 & 0xf) + iVar7 * 10;
                  bVar2 = *pbVar14;
                }
                if (*pbVar14 != 0) {
                  pbVar14 = pbVar14 + 1;
                }
                if (iVar4 != param_1[0x6e]) {
                  FUN_00664520(iVar7);
                }
                bVar2 = *pbVar14;
              }
            }
            if (iStack_36c == 0x2b757372) {
              uVar3 = local_350;
              if (param_1[0x12d] == 0) goto LAB_00666b17;
              uVar5 = FUN_00667530(puStack_370,&DAT_0069edd8,0xffffffff);
              iVar4 = FUN_00667ec0(uVar5);
              if (-1 < iVar4) {
                iVar7 = FUN_00667530(puStack_370,&DAT_006bd2ec);
                if (iVar7 == 0) {
                  iVar7 = FUN_0066dd40(param_1[0x12d],iVar4);
                  if (iVar7 != 0) {
                    FUN_0066dd80(param_1[0x12d],iVar4);
                    uVar5 = FUN_00666eb0(param_1[0x12e],iVar7);
                    FUN_00447030(uVar5);
                  }
                }
                else {
                  piVar13 = (int *)FUN_00549460(0x1fc);
                  piVar8 = piVar13;
                  for (iVar7 = 0x7f; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *piVar8 = 0;
                    piVar8 = piVar8 + 1;
                  }
                  *piVar13 = iVar4;
                  uVar5 = FUN_00667530(puStack_370,&DAT_006bd2ec,piVar13 + 2,0x20,&DAT_006b9172);
                  FUN_00668130(uVar5);
                  uVar5 = FUN_00667530(puStack_370,&DAT_006a9718,0);
                  iVar4 = FUN_00667f50(uVar5);
                  piVar13[0xc] = iVar4;
                  uVar5 = FUN_00667530(puStack_370,&DAT_006aad4c,piVar13 + 10,8,&DAT_006b9172);
                  FUN_00668130(uVar5);
                  uVar5 = FUN_00667530(puStack_370,&DAT_006aad64,0);
                  iVar4 = FUN_00667f10(uVar5);
                  piVar13[1] = iVar4;
                  uVar5 = FUN_00667530(puStack_370,&DAT_006aad3c,piVar13 + 0xe,0xc0,&DAT_006b9172);
                  FUN_00668130(uVar5);
                  uVar5 = FUN_00667530(puStack_370,&DAT_006a9714,0);
                  iVar4 = FUN_00667ec0(uVar5);
                  piVar13[0xd] = iVar4;
                  uVar5 = FUN_00667530(puStack_370,&DAT_006a9748,piVar13 + 0x3e,0x100,&DAT_006b9172)
                  ;
                  FUN_00668130(uVar5);
                  uVar5 = FUN_00667530(puStack_370,&DAT_006a9710,0);
                  iVar4 = FUN_00667ec0(uVar5);
                  piVar13[0x7e] = iVar4;
                  iStack_364 = FUN_0066dd40(param_1[0x12d],*piVar13);
                  if (iStack_364 == 0) {
                    uVar5 = FUN_00666de0(param_1[0x12e],piVar13);
                    FUN_0066dcd0(param_1[0x12d],*piVar13,uVar5);
                  }
                  else {
                    piStack_34c = (int *)FUN_00666ea0(param_1[0x12e],iStack_364);
                    piVar8 = piVar13;
                    piVar17 = piStack_34c;
                    for (iVar4 = 0x7f; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *piVar17 = *piVar8;
                      piVar8 = piVar8 + 1;
                      piVar17 = piVar17 + 1;
                    }
                    FUN_00666e50(param_1[0x12e],iStack_364,piStack_34c);
                    FUN_00447030(piVar13);
                    piVar13 = piStack_34c;
                  }
                  if ((piVar13[1] & 0x200000U) != 0) {
                    param_1[0x6d] = piVar13[1];
                  }
                }
                uVar5 = FUN_00667530(puStack_370,&DAT_006bd2e8,0);
                uVar5 = FUN_00667ec0(uVar5);
                FUN_00664520(uVar5);
                param_1[2] = param_1[2] | 0x40;
              }
            }
            if (iStack_36c == 0x2b726e6b) {
              uVar3 = local_350;
              if (param_1[0x132] == 0) goto LAB_00666b17;
              uVar5 = FUN_00667530(puStack_370,&DAT_006aad38,0);
              iVar4 = FUN_00667ec0(uVar5);
              if (iVar4 == -2) {
                iVar4 = FUN_0066dac0(param_1[0x132]);
                while (iVar4 != 0) {
                  uVar5 = FUN_00666eb0(param_1[0x133],iVar4);
                  FUN_00447030(uVar5);
                  iVar4 = FUN_0066dac0(param_1[0x132]);
                }
              }
              else {
                piVar8 = (int *)FUN_00549460(0xe8);
                piVar8[1] = 0;
                uVar5 = FUN_00667530(puStack_370,&DAT_006a9718,0);
                iVar4 = FUN_00667ec0(uVar5);
                piVar13 = piVar8 + 2;
                *piVar8 = iVar4;
                uVar5 = FUN_00667530(puStack_370,&DAT_006bd2ec,piVar13,0x20,&DAT_006b9172);
                FUN_00668130(uVar5);
                uVar5 = FUN_00667530(puStack_370,&DAT_006aad3c,piVar8 + 10,0xc0,&DAT_006b9172);
                FUN_00668130(uVar5);
                iStack_364 = FUN_0066dc20(param_1[0x132],piVar13);
                if (iStack_364 == 0) {
                  if (*piVar8 < 1) {
LAB_006665ff:
                    FUN_00447030(piVar8);
                  }
                  else {
                    uVar5 = FUN_00666de0(param_1[0x133],piVar8);
                    FUN_0066dbb0(param_1[0x132],piVar13,uVar5);
                  }
                }
                else if (*piVar8 < 1) {
                  if (0 < *piVar8) goto LAB_006665ff;
                  uVar5 = FUN_0066dc70(param_1[0x132],piVar13);
                  uVar5 = FUN_00666eb0(param_1[0x133],uVar5);
                  FUN_00447030(uVar5);
                  FUN_00447030(piVar8);
                }
                else {
                  piVar9 = (int *)FUN_00666ea0(param_1[0x133],iStack_364);
                  piVar13 = piVar8;
                  piVar17 = piVar9;
                  for (iVar4 = 0x3a; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *piVar17 = *piVar13;
                    piVar13 = piVar13 + 1;
                    piVar17 = piVar17 + 1;
                  }
                  FUN_00666e50(param_1[0x133],iStack_364,piVar9);
                  FUN_00447030(piVar8);
                }
              }
              param_1[2] = param_1[2] | 0x80;
            }
            if (iStack_36c == 0x2b736e70) {
              iVar4 = param_1[0x1b0];
              uVar3 = local_350;
              if (((iVar4 < 6) || (9 < iVar4)) || (param_1[iVar4 * 5 + 0x128] == 0))
              goto LAB_00666b17;
              puVar10 = (undefined4 *)FUN_00549460(0xe8);
              uVar5 = FUN_00667530(puStack_370,&DAT_006a9714,0);
              uVar5 = FUN_00667ec0(uVar5);
              puVar10[1] = uVar5;
              uVar5 = FUN_00667530(puStack_370,&DAT_006aad4c,0);
              uVar5 = FUN_00667ec0(uVar5);
              puVar15 = puVar10 + 2;
              *puVar10 = uVar5;
              uVar5 = FUN_00667530(puStack_370,&DAT_006bd2ec,puVar15,0x20,&DAT_006b9172);
              FUN_00668130(uVar5);
              uVar5 = FUN_00667530(puStack_370,&DAT_006aad3c,puVar10 + 10,0xc0,&DAT_006b9172);
              FUN_00668130(uVar5);
              iStack_364 = FUN_0066dc20(param_1[param_1[0x1b0] * 5 + 0x128],puVar15);
              if (iStack_364 == 0) {
                uVar5 = FUN_00666de0(param_1[param_1[0x1b0] * 5 + 0x129],puVar10);
                FUN_0066dbb0(param_1[param_1[0x1b0] * 5 + 0x128],puVar15,uVar5);
              }
              else {
                puVar11 = (undefined4 *)FUN_00666ea0(param_1[param_1[0x1b0] * 5 + 0x129],iStack_364)
                ;
                puVar15 = puVar10;
                puVar18 = puVar11;
                for (iVar4 = 0x3a; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar18 = *puVar15;
                  puVar15 = puVar15 + 1;
                  puVar18 = puVar18 + 1;
                }
                FUN_00666e50(param_1[param_1[0x1b0] * 5 + 0x129],iStack_364,puVar11);
                FUN_00447030(puVar10);
              }
              param_1[2] = param_1[2] | 0x80;
            }
            if (iStack_36c == 0x2b61676d) {
              uVar3 = local_350;
              if (param_1[0x141] == 0) goto LAB_00666b17;
              uVar5 = FUN_00667530(puStack_370,"IDENT",0xffffffff);
              iVar4 = FUN_00667ec0(uVar5);
              if (-1 < iVar4) {
                iVar7 = FUN_00667530(puStack_370,&DAT_006bd3bc);
                if (iVar7 == 0) {
                  iVar7 = FUN_0066dd40(param_1[0x141],iVar4);
                  if (iVar7 != 0) {
                    FUN_0066dd80(param_1[0x141],iVar4);
                    uVar5 = FUN_00666eb0(param_1[0x142],iVar7);
                    FUN_00447030(uVar5);
                  }
                }
                else {
                  puVar10 = (undefined4 *)FUN_00549460(0x2a0);
                  puVar15 = puVar10;
                  for (iVar7 = 0xa8; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *puVar15 = 0;
                    puVar15 = puVar15 + 1;
                  }
                  FUN_006652f0(puVar10,puStack_370);
                  iStack_364 = FUN_0066dd40(param_1[0x141],iVar4);
                  if (iStack_364 == 0) {
                    uVar5 = FUN_00666de0(param_1[0x142],puVar10);
                    FUN_0066dcd0(param_1[0x141],iVar4,uVar5);
                  }
                  else {
                    puVar11 = (undefined4 *)FUN_00666ea0(param_1[0x142],iStack_364);
                    puVar15 = puVar10;
                    puVar18 = puVar11;
                    for (iVar4 = 0xa8; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar18 = *puVar15;
                      puVar15 = puVar15 + 1;
                      puVar18 = puVar18 + 1;
                    }
                    FUN_00666e50(param_1[0x142],iStack_364,puVar11);
                    FUN_00447030(puVar10);
                  }
                }
                param_1[2] = param_1[2] | 0x1000;
              }
            }
            if (iStack_36c == 0x2b67616d) {
              uVar3 = local_350;
              if (param_1[0x13c] == 0) goto LAB_00666b17;
              iVar4 = FUN_00667530(puStack_370,&DAT_006bd3bc);
              if (iVar4 != 0) {
                puVar10 = (undefined4 *)FUN_00549460(0x2a0);
                puVar15 = puVar10;
                for (iVar4 = 0xa8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar15 = 0;
                  puVar15 = puVar15 + 1;
                }
                FUN_006652f0(puVar10,puStack_370);
                iStack_364 = FUN_0066dc20(param_1[0x13c],puVar10 + 1);
                if (iStack_364 == 0) {
                  uVar5 = FUN_00666de0(param_1[0x13d],puVar10);
                  FUN_0066dbb0(param_1[0x13c],puVar10 + 1,uVar5);
                }
                else {
                  puVar11 = (undefined4 *)FUN_00666ea0(param_1[0x13d],iStack_364);
                  puVar15 = puVar10;
                  puVar18 = puVar11;
                  for (iVar4 = 0xa8; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar18 = *puVar15;
                    puVar15 = puVar15 + 1;
                    puVar18 = puVar18 + 1;
                  }
                  FUN_00666e50(param_1[0x13d],iStack_364,puVar11);
                  FUN_00447030(puVar10);
                }
                param_1[2] = param_1[2] | 0x2000;
              }
            }
            if (((iStack_36c == 0x6d6f7665) || (iStack_36c == 0x726f6f6d)) && (uStack_368 == 0)) {
              uVar5 = FUN_00667530(puStack_370,"LIDENT",0xffffffff);
              iVar4 = FUN_00667ec0(uVar5);
              if (-1 < iVar4) {
                uVar5 = FUN_00667530(puStack_370,"LCOUNT",0);
                uVar5 = FUN_00667ec0(uVar5);
                FUN_00664520(uVar5);
              }
            }
            uVar3 = local_350;
            if (iStack_36c == 0x6d6f7665) {
              uVar5 = FUN_00667530(puStack_370,"IDENT",0);
              iVar4 = FUN_00667ec0(uVar5);
              uVar5 = FUN_00667530(puStack_370,"COUNT",0);
              uVar5 = FUN_00667ec0(uVar5);
              uVar3 = local_350;
              if (iVar4 != param_1[0x6e]) {
                param_1[0x6e] = iVar4;
                FUN_00664520(uVar5);
                uVar5 = FUN_00667530(puStack_370,&DAT_006bd3bc,param_1 + 0x70,0x40,&DAT_006b9172);
                FUN_00668130(uVar5);
                uVar5 = FUN_00667530(puStack_370,"FLAGS",0);
                iVar4 = FUN_00667f10(uVar5);
                param_1[0x6f] = iVar4;
                param_1[2] = param_1[2] | 8;
                if (param_1[0x12d] != 0) {
                  iVar4 = FUN_0066dac0(param_1[0x12d]);
                  while (iVar4 != 0) {
                    uVar5 = FUN_00666eb0(param_1[0x12e],iVar4);
                    FUN_00447030(uVar5);
                    iVar4 = FUN_0066dac0(param_1[0x12d]);
                  }
                  param_1[2] = param_1[2] | 0x40;
                }
                uVar3 = local_350;
                if (param_1[0x141] != 0) {
                  iVar4 = FUN_0066dac0(param_1[0x141]);
                  uVar3 = local_350;
                  while (local_350 = uVar3, iVar4 != 0) {
                    uVar5 = FUN_00666eb0(param_1[0x142],iVar4);
                    FUN_00447030(uVar5);
                    iVar4 = FUN_0066dac0(param_1[0x141]);
                    uVar3 = local_350;
                  }
                  param_1[2] = param_1[2] | 0x1000;
                }
              }
            }
          }
        }
LAB_00666b17:
        FUN_0066e840(*param_1,0,0,0,0);
        iVar4 = FUN_0066e780(*param_1,&iStack_36c,&uStack_368,&puStack_370);
      }
      FUN_00664590();
      if ((param_1[6] != 0) && ((uint)param_1[6] <= uVar3)) {
        FUN_006652b0();
        param_1[6] = uVar3 + 30000;
      }
    }
  }
  return;
}

