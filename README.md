# MoveSemantics
Move semantics experiment

Example output (**USEMOVE=1**):
```
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
```

Example output (**USEMOVE=0**):
```
Move semantics

Adding objects...
T ctor 0x5641e54a72b0 2
T ctor& 0x5641e54a72d0 2
T dtor 0x5641e54a72b0
T ctor 0x5641e54a72b0 1
T ctor& 0x5641e54a72f0 1
T dtor 0x5641e54a72b0
T ctor 0x5641e54a72b0 4
T ctor& 0x5641e54a7310 4
T dtor 0x5641e54a72b0
T ctor 0x5641e54a72b0 3
T ctor& 0x5641e54a7330 3
T dtor 0x5641e54a72b0
T ctor 0x5641e54a72b0 5
T ctor& 0x5641e54a7350 5
T dtor 0x5641e54a72b0

Sorting...
T ctor& 0x5641e54a72b0 1
op=& 0x5641e54a72d01
op=& 0x5641e54a72b02
T dtor 0x5641e54a72b0
T ctor& 0x5641e54a72b0 4
op=& 0x5641e54a72b04
T dtor 0x5641e54a72b0
T ctor& 0x5641e54a72b0 3
op=& 0x5641e54a73103
op=& 0x5641e54a72b04
T dtor 0x5641e54a72b0
T ctor& 0x5641e54a72b0 5
op=& 0x5641e54a72b05
T dtor 0x5641e54a72b0

After sort...
1
2
3
4
5
End.

T dtor 0x5641e54a72d0
T dtor 0x5641e54a72f0
T dtor 0x5641e54a7310
T dtor 0x5641e54a7330
T dtor 0x5641e54a7350
```
