/* spd-match: far pct=19.05 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00615AFF */
/* Decompiled from Speed.exe @ 00615aff */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef struct Node { int type; int val1; int val2; int val3; int val4; struct Node *next; struct Node *child1; struct Node *child2; } Node; int __stdcall FUN_00615aff(Node *n) { if (!n) return 0; loop: switch (n->type) { case 1: return FUN_00615aff(n->child1) + FUN_00615aff(n->child2); case 5: case 10: n = n->next; if (n) goto loop; break; case 7: return FUN_00615aff(n->child1) * n->val1; case 8: return n->val3 * n->val1; } return 0; }

