/* spd-match: far pct=47.25 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00622E30 */
/* Decompiled from Speed.exe @ 00622e30 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef struct Node { int val; int unk4; int ref_count; struct Node* prev; struct Node* next; } Node; extern Node* DAT_0070a4a8; extern void*** DAT_00709d80; void __fastcall FUN_00622e30(Node* pNode) { int ref = pNode->ref_count; pNode->unk4 = 0; pNode->ref_count = --ref; if (ref == 0 && pNode->val != 0) { (*(void (__stdcall **)(void**, int))(*((int*)*DAT_00709d80) + 0x168))(*DAT_00709d80, pNode->val); } if (pNode->next != 0) { pNode->next->prev = pNode->prev; } if (pNode->prev != 0) { pNode->prev->next = pNode->next; } if (pNode == DAT_0070a4a8) { DAT_0070a4a8 = pNode->prev; } pNode->next = 0; pNode->prev = 0; }

