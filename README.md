# hacker_cup

runtime of program
```
auto start = chrono::high_resolution_clock::now();
foo(bar);
auto end = chrono::high_resolution_clock::now();
auto elapsed = chrono::duration_cast<chrono::milliseconds>(end - start);
cerr << " elapsed " << elapsed.count() << " milliseconds \n";
```


precision of doubles in `cout`
```
cout.precision(17)
```

flush `cout` before reading from `cin`
```
cin.tie(0)
```

don\`t synchronize `cout` and `printf`
```
ios::sync_with_stdio(0);
```

unlimited stack depth
```
ulimit -s unlimited
```

