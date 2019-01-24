# MoveSemantics
Move semantics experiment
Move semantics

Adding objects...
T ctor 0x558c0f1bf2b0 2
move && 0x558c0f1bf2b0
T dtor 0
T ctor 0x558c0f1bf2d0 1
move && 0x558c0f1bf2d0
T dtor 0
T ctor 0x558c0f1bf2f0 4
move && 0x558c0f1bf2f0
T dtor 0
T ctor 0x558c0f1bf310 3
move && 0x558c0f1bf310
T dtor 0
T ctor 0x558c0f1bf330 5
move && 0x558c0f1bf330
T dtor 0

Sorting...
move && 0x558c0f1bf2d0
move op=&& 0 0x558c0f1bf2b0
move op=&& 0 0x558c0f1bf2d0
T dtor 0
move && 0x558c0f1bf2f0
move op=&& 0 0x558c0f1bf2f0
T dtor 0
move && 0x558c0f1bf310
move op=&& 0 0x558c0f1bf2f0
move op=&& 0 0x558c0f1bf310
T dtor 0
move && 0x558c0f1bf330
move op=&& 0 0x558c0f1bf330
T dtor 0

After sort...
1
2
3
4
5
End.

T dtor 0x558c0f1bf2d0
T dtor 0x558c0f1bf2b0
T dtor 0x558c0f1bf310
T dtor 0x558c0f1bf2f0
T dtor 0x558c0f1bf330
